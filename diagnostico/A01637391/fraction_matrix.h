#ifndef FRACTION_MATRIX_H
#define FRACTION_MATRIX_H

#include<string>
#include<iostream>
#include<vector>

#include"fractions.h"

class Matrix{
    public:
        Matrix(int rows, int columns);

        //Getters
        int get_rows() const;

        int get_columns() const;

        std::vector<std::vector<Fraction>> get_matrix() const;

        //Other methods
        void set_matrix(std::vector<std::vector<Fraction>> matrix);

        void print_matrix() const;

        void import_matrix_from_csv(std::string filename);

    private:
        int _rows;
        int _columns;
        std::vector<std::vector<Fraction>> _matrix;
};

#endif // FRACTION_MATRIX_H