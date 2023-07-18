#ifndef RECT_POINT_H
#define RECT_POINT_H

class RectangularPoint{
    private:
        double x;
        double y;
    public:
        RectangularPoint(double x, double y);

        double get_x() const;
        double get_y() const;

        void set_x(double x);
        void set_y(double y);

        RectangularPoint operator+(const RectangularPoint& p) const;
        RectangularPoint operator-(const RectangularPoint& p) const;
};

#endif  // RECT_POINT_H
