#include<string>
#include<iostream>
#include<sstream>

#include "fractions.h"

//Getters
int Fraction::get_numerator() const{
    return _numerator;
};

int Fraction::get_denominator() const{
    return _denominator;
};

std::string Fraction::get_fraction() const{
    std::string fraction = std::to_string(_numerator) + "/" + std::to_string(_denominator);
    return fraction;
};

//Setters
void Fraction::set_numerator(int numerator){
    _numerator = numerator;
};

void Fraction::set_denominator(int denominator){
    _denominator = denominator;
};

void Fraction::set_fraction(int numerator, int denominator){
    _numerator = numerator;
    _denominator = denominator;
};

//Constructors
Fraction::Fraction(int numerator, int denominator) : _numerator{numerator}, _denominator{denominator}
{
    Fraction::reduce(); 
    Fraction::check_double_negative(); 
    Fraction::check_negative_denominator(); 
    Fraction::check_zero_denominator();
};

Fraction::Fraction() : _numerator{0}, _denominator{1} {};

//Other methods
void Fraction::reduce(){
    int gcd = 1; //Greatest common divisor
    int smaller = _numerator < _denominator ? _numerator : _denominator;

    //Iterate from 2 to smaller number of the two denominators
    for(int i = 2; i <= smaller; i++){
        if(_numerator % i == 0 && _denominator % i == 0){
            gcd = i;
        }
    }

    _numerator /= gcd;
    _denominator /= gcd;
};

Fraction Fraction::sum(Fraction fraction1, Fraction fraction2){
    Fraction sum_of_fractions;

    int final_numerator = (fraction1.get_numerator() * fraction2.get_denominator()) + (fraction2.get_numerator() * fraction1.get_denominator());
    int final_denominator = fraction1.get_denominator() * fraction2.get_denominator();

    sum_of_fractions.set_numerator(final_numerator);
    sum_of_fractions.set_denominator(final_denominator);

    sum_of_fractions.reduce();

    return sum_of_fractions;
};

Fraction Fraction::mult(Fraction fraction1, Fraction fraction2){
    Fraction mult_of_fractions;

    int final_numerator = fraction1.get_numerator() * fraction2.get_numerator();
    int final_denominator = fraction1.get_denominator() * fraction2.get_denominator();

    mult_of_fractions.set_numerator(final_numerator);
    mult_of_fractions.set_denominator(final_denominator);

    mult_of_fractions.reduce();

    return mult_of_fractions;
};

void Fraction::check_double_negative(){
    if(_numerator < 0 && _denominator < 0){
        _numerator *= -1;
        _denominator *= -1;
    }
};

void Fraction::check_negative_denominator(){
    if(_denominator < 0){
        _numerator *= -1;
        _denominator *= -1;
    }
};

void Fraction::check_zero_denominator(){
    if(_denominator == 0){
        std::cout << "Error: Denominator cannot be zero" << std::endl;
        exit(EXIT_FAILURE);
    }
};
/*
void Fraction::str_to_frac(std::string string){
    int counter = 0;

    std::string number;
    std::stringstream ss(string); //Converts the string into a stringstream, that getline() can split

    while(std::getline(ss, number, '/')) {
        if(counter==0){
            std::cout << number << std::endl;
            Fraction::set_numerator(number);
        }else{
            Fraction::set_denominator(number);
        };
    };

    std::cout << "String converted and fraction set";
};
*/