namespace targets {
class Alien {
    public:
        Alien(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
        }
        int get_health() {
            return health;
        }
        int x_coordinate, y_coordinate;
    
        int hit() {
            if (health != 0) health = health - 1;
            return true;
        }
        bool is_alive() {
            if (health != 0) return true;
            else return false;
        }
        bool teleport(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
            return true;
        }
        bool collision_detection(Alien alien) {
            if (x_coordinate == alien.x_coordinate && y_coordinate == alien.y_coordinate) return true;
            else return false;
        }
    private:
        int health{3};
};
}  // namespace targets