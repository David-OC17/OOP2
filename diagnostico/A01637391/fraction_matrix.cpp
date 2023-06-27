#include<iostream>
#include<vector>
#include<fstream>

#include"fraction_matrix.h"

Matrix::Matrix(int rows, int columns){
    _rows = rows;
    _columns = columns;
};

int Matrix::get_rows() const{
    return _rows;
};

int Matrix::get_columns() const{
    return _columns;
};

std::vector<std::vector<Fraction>> Matrix::get_matrix() const{
    return _matrix;
};

void Matrix::set_matrix(std::vector<std::vector<Fraction>> matrix){
    _matrix = matrix;
};

void Matrix::print_matrix() const{
    for(int i = 0; i < _rows; i++){
        for(int j = 0; j < _columns; j++){
            std::cout << _matrix[i][j].get_numerator() << "/" << _matrix[i][j].get_denominator() << " ";
        };
        std::cout << std::endl;
    };
    std::cout << std::endl;
};

/*
void Matrix::import_matrix_from_csv(std::string filename){
    std::ifstream MatrixFile(filename);
    std::vector<std::vector<Fraction>> matrix;
    std::string line;

    if (MatrixFile.is_open()) {//Check if the file is open
        while (std::getline(MatrixFile, line)) {//While there is a line, put the line into 'line'
            //Initialize variables to extract individual cells
            std::vector<Fraction> row;
            std::istringstream MatrixRow(line);
            std::string cell;
            Fraction CellFraction();

            while (std::getline(MatrixRow, cell, ';')) {
                // Convert token to Fraction and push it to the row vector
                CellFraction.str_to_frac(cell);//Converts the string into a fraction and sets the obj to that fraction
                row.push_back(CellFraction); //Add to the row
            };

            matrix.push_back(row); //Add the row to the final matrix
        }

        MatrixFile.close(); // Close the file after reading
    } else {
        std::cout << "The file could not be opened." << std::endl;
    }
};
*/