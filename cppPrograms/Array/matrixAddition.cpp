#include <iostream>
void displayMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << mat[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}

int main() {
    int n {};
    int m {};
    
    int mat1[3][3] {};
    int mat2[3][3] {};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "Enter number at (" << i << ", " << j << "): ";
            std::cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "Enter number at (" << i << ", " << j << "): ";
            std::cin >> mat2[i][j];
        }
    }
    
    std::cout << "\nAddition Of Matrix: \n\n";
    std::cout << "Matrix A\n";
    displayMatrix(mat1);
    std::cout << std::endl;
    std::cout << "Matrix A\n";
    displayMatrix(mat2);
    std::cout << std::endl;
    std::cout << "\nSum\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << mat1[i][j] + mat2[i][j] << '\t';
        } 
        std::cout << std::endl;
    }

}