#include <iostream>

class Cube {
    public:
        float height {};
        float width {};
        float length {};
        Cube(float height, float width, float length) {
            this->height = height;  
            this->width = width;
            this->length = length;
        }
        void getVolume() {
            std::cout << "Volume of the cube is: " << height * width * length << '\n';
        }
        
};

int main() {
    float height {};
    float width {};
    float length {};    
    std::cout << "Enter the height, width, length: \n";
    std::cin >> height >> width >> length;
    Cube cubeOne(height, width, length);
    cubeOne.getVolume();
    return 0;
}
