#include<iostream>

#include "fraction_matrix.h"
#include "fractions.h"

int main(){
    //Try only creating and printing a matrix with fractionss
    Matrix matrix1(3, 3);

    std::cout << "Matrix 1 has " << matrix1.get_rows() << " rows and " << matrix1.get_columns() << " columns." << std::endl;

    matrix1.set_matrix({{Fraction(1, 2), Fraction(1, 3), Fraction(1, 4)}, {Fraction(1, 5), Fraction(1, 6), Fraction(1, 7)}, {Fraction(1, 8), Fraction(1, 9), Fraction(1, 10)}});

    std::cout << "Matrix 1:" << std::endl;
    matrix1.print_matrix();
    
    //Try importing a matrix from a file and printing it
    /*
    Matrix matrix2(3, 3);

    matrix2.import_matrix_from_csv("matrix3x3_1.csv");
    matrix2.print_matrix();
    */

    return EXIT_SUCCESS;
};