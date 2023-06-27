#ifndef FRACTION_MATRIX_H
#define FRACTION_MATRIX_H

#include<vector>
#include<string>

#include"fractions.h"

class Matrix{
    private:
        int _rows;
        int _columns;
        std::vector<std::vector<Fraction>> _matrix;

    public:
        Matrix(int rows, int columns);

        //Getters
        int get_rows() const;
        int get_columns() const;
        std::vector<std::vector<Fraction>> get_matrix() const;

        //Set and import matrix
        void import_matrix_from_csv();

        //Other methods
        Matrix sum(std::string filename1);
};

#endif //FRACTION_MATRIX_H