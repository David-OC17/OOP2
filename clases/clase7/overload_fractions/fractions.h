#ifndef  FRACTIONS_H
#define  FRACTIONS_H

#include<string>
#include<iostream>

class Fraction{
    private:
        int _numerator;
        int _denominator;
    
    public:
        Fraction(int numerator, int denominator);

        Fraction();

        void reduce();

        //Getters
        int get_numerator() const;
        int get_denominator() const;
        std::string get_fraction() const;

        //Setters
        void set_numerator(int numerator);
        void set_denominator(int denominator);
        

        //Other methods
        void set_fraction(int numerator, int denominator);

        Fraction sum(Fraction fraction1, Fraction fraction2);

        Fraction mult(Fraction fraction1, Fraction fraction2);

        void check_double_negative();

        void check_negative_denominator();

        void check_zero_denominator();

        //Overload operators (<,>,==)
        bool operator<(const Fraction &fraction) const;
        bool operator>(const Fraction &fraction) const;
        bool operator==(const Fraction &fraction) const;
};

#endif //FRACTIONS_H