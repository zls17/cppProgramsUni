
/* Insertion Sort*/

#include <iostream>

int main() {
    int array[4] {12, 5, 14, 65};

    for (int i = 0; i < 3; i++) {
        int minimum = i;
        for (int j = i; j < 3; j++) {
            if (array[j] < array[i]) {
               minimum = j;
            }
        } 
        if (minimum != i) {
            int temp {array[minimum]};
            array[minimum] = array[i];
            array[i] = temp;
        }
    }

    for (int i = 0; i < 4; i++) {
        std::cout << array[i] << '\n';
    }

}
