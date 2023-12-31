#include "fractions.h"

//Main, showing an example of the use of the class and its methods
int main(){
    Fraction Fraction1(1, 780);
    Fraction Fraction2(44, 2);

    //Print the two fractions
    std::cout << Fraction1.get_fraction() << std::endl;
    std::cout << Fraction2.get_fraction() << std::endl;

    //Print the sum of the two fractions
    Fraction sum_fractions = Fraction1.sum(Fraction1, Fraction2); //Fraction1 + Fraction2, use any of the two objects for the addition
    std::cout << "Addition of fractions:";
    std::cout << sum_fractions.get_fraction() << std::endl;

    //Print the multiplication of the two fractions
    Fraction mult_fractions = Fraction1.mult(Fraction1, Fraction2); //Fraction1 * Fraction2, use any of the two objects for the multiplication
    std::cout << "Multiplication of fractions:";
    std::cout << mult_fractions.get_fraction() << std::endl;

    return EXIT_SUCCESS;
};