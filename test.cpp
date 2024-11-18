#include <iostream>

void modifyArray(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        array[i] *= 2; 
    }
}

int main() {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    modifyArray(arr, size);

    std::cout << "Mod array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
