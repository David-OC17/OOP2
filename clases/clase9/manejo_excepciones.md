# Manejo de Excepciones
***David Ortiz Cota - A01637391***

## Ejemplo out_of_range
```cpp
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
```

## Ejemplo en fracciones
Se utiliza una función designada a revisar si el denominador es cero, se utiliza donde es necesario.
```cpp
void Fraction::check_zero_denominator(){
    try{
    if(_denominator == 0){
        throw "Error: Denominator cannot be zero";
    }} catch(const char* msg){
        std::cerr << msg << std::endl;
    };
};
```