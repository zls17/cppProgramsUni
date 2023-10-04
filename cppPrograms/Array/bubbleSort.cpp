
/* Bubble Sort*/

int main() {
    int numbers[] = {1, 5, 2, 4, 6, 8, 3, 9, 7};
    int length = 10;

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < (length - 1); ++j) {
            if (numbers[j] > numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    for (int i {0}; i < length; ++i) {
        std::cout << i << ' ';
    }

    std::cout << '\n';
    return 0;
}
