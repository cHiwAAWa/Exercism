namespace hellmath {

    enum AccountStatus {
        troll,
        guest,
        user,
        mod
    };

    enum Action {
        read,
        write,
        remove
    };

    bool display_post(AccountStatus user1, AccountStatus user2) {
        if (user1 == troll && user2 != troll) return false;
        else return true;
    }

    bool permission_check(Action act, AccountStatus player) {
        switch (player) {
            case guest:
                if (act == 0) return true;
                else return false;
                break;
            case troll:
            case user:
                if (act == 0 || act == 1) return true;
                else return false;
                break;
            case mod:
                return true;
            default:
                return false;
        }
    }

    bool valid_player_combination(AccountStatus user1, AccountStatus user2) {
        if (user1 == 1 || user2 == 1) return false;
        else if (user1 == 2 && (user2 == 2 || user2 == 3)) return true;
        else if (user1 == 3 && (user2 == 2 || user2 == 3)) return true;
        else if (user1 == 0 && user2 == 0) return true;
        else return false;
    }

    bool has_priority(AccountStatus user1, AccountStatus user2) {
        return user1 > user2;
    }
}