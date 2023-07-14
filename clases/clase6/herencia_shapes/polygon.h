#include "shape.h"

class Poligono: public Shape
{
    public:
        Poligono();
        Poligono(int numLados, float lado, int cx, int cy); // (int cx, int cy, float base, float altura
        virtual ~Poligono();
        float getLado() const;
        void setLado(float lado);
        int getNumLados() const;
        void setNumLados(int numLados);
        float getArea();
        string draw();
    protected:
        float lado;
        int numLados;
    private:
};