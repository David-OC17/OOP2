#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "fraction_matrix.h"

//Getters
int Matrix::get_rows() const{
    return _rows;
};

int Matrix::get_columns() const{
    return _columns;
};

std::vector<std::vector<Fraction>> Matrix::get_matrix() const{
    return _matrix;
};

//Constructor
Matrix::Matrix(int rows, int columns) : _rows{rows}, _columns{columns} {};

//Other methods
Matrix Matrix::sum(std::string filename1){
    std::ifstream matrix_file1(filename1);
    //std::ifstream matrix_file2(filename2);

    std::string line;
    
    for(int i = 0; i < matrix1.get_rows(); ++i){
        std::getline(matrix_file1, line)
        std::cout << line;
    };
};

int main(){
    Matrix matrix1(3,3);
    int rows = 3;

    matrix1.sum("matrix3x3_1.csv", rows);

    return  EXIT_SUCCESS;
}