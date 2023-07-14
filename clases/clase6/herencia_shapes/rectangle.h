#include "shape.h"

class Rectangulo:public Shape
{
    private:
        float base;
        float altura;
    public:
        Rectangulo();
        Rectangulo(int cx, int cy, float base, float altura);
        virtual ~Rectangulo();

        float getBase() const;
        void setBase(float base);
        float getAltura() const;
        void setAltura(float altura);
        float getArea();
        string draw();
};