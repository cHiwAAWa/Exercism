#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> int_student_scores;
    for(int i{0}; i < student_scores.size(); i++) {
        int_student_scores.emplace_back(static_cast<int>(student_scores[i]));
    }
    return int_student_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count{0};
    for (int i{0}; i < student_scores.size(); i++) {
        if (student_scores[i] <= 40) count++;
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int thresholds{(highest_score - 40) / 4};
    std::array<int, 4> grades {41, 0, 0, 0};
    for (int i{1}; i < 4; i++) {
        grades[i] = grades[i - 1] + thresholds;
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> forms;
    for (int i{0}; i < student_scores.size(); i++) {
        forms.emplace_back(std::to_string(i + 1) + ". " + student_names[i] + ": " +         std::to_string(student_scores[i]));
    }
    return forms;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i{0}; i < student_scores.size(); i++) {
        if (student_scores[i] == 100) return student_names[i];
    }
    return "";
}
