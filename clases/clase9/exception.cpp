#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int index;

    try {
        std::cout << "Enter the index of the element to access: ";
        std::cin >> index;

        int element = numbers.at(index); // Use the .at() function to access the element with bounds checking

        std::cout << "The element at index " << index << " is: " << element << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        std::cerr << "Invalid index. The vector has a size of " << numbers.size() << std::endl;
    }

    return EXIT_SUCCESS;
}
