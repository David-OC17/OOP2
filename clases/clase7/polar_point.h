#ifndef    POLAR_POINT_H
#define    POLAR_POINT_H

class PolarPoint{
    private:
        double r;
        double theta;
    public:
        PolarPoint(double r, double theta);

        double get_r() const;
        double get_theta() const;

        void set_r(double r);
        void set_theta(double theta);

        PolarPoint operator+(const PolarPoint& p) const;
        PolarPoint operator-(const PolarPoint& p) const;
};

#endif  // POLAR_POINT_H
