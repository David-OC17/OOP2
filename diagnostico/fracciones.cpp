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

        void check_double_negative();

        void check_negative_denominator();

        void check_zero_denominator();
};

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

//Main, showing an example of the use of the class and its methods
int main(){
    Fraction Fraction1(1, 780);
    Fraction Fraction2(44, 2);

    //Print the two fractions
    std::cout << Fraction1.get_fraction() << std::endl;
    std::cout << Fraction2.get_fraction() << std::endl;

    //Print the sum of the two fractions
    Fraction sum_fractions = Fraction1.sum(Fraction1, Fraction2); //Fraction1 + Fraction2, use any of the two objects for the addition

    std::cout << sum_fractions.get_fraction() << std::endl;

    return EXIT_SUCCESS;
};
