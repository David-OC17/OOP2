#include "shape.h"

class Triangulo:public Shape
{
    public:
        Triangulo();
        Triangulo(int cx, int cy, float base, float altura);
        virtual ~Triangulo();
        float getBase() const;
        void setBase(float base);
        float getAltura() const;
        void setAltura(float altura);
        float getArea();
        string draw();
    protected:
    private:
        float base;
        float altura;
};