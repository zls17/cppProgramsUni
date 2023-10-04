#include <iostream>

class Rectangle {
    protected:
        double length;
        double width;
    public:
        //setters to set the length and width
        void set_length(double len) {
            length = len;
        }
        void set_width(double wid) {
            width = wid;
        }
        double area(double length, double width) {
            return length * width;
        }
};

class Cuboid : public Rectangle{
    private:
        double height;
    public:
        void set_height(double hgt) {
            height = hgt;
        }
        double volume() {
            return area(length, width) * height;
        }
};

int main() {
    Cuboid c1;
    c1.set_length(10);
    c1.set_width(15);
    c1.set_height(10);
    std::cout << "Volume: " << c1.volume() << '\n';
    return 0;
}

