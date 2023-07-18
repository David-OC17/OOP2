#include "polar_point.h"
#include <cmath>

PolarPoint::PolarPoint(double r, double theta){
    this->r = r;
    this->theta = theta;
}

double PolarPoint::get_r() const{
    return this->r;
}

double PolarPoint::get_theta() const{
    return this->theta;
}

void PolarPoint::set_r(double r){
    this->r = r;
}

void PolarPoint::set_theta(double theta){
    this->theta = theta;
}

PolarPoint PolarPoint::operator+(const PolarPoint& p) const{
    double x1 = this->r * cos(this->theta);
    double y1 = this->r * sin(this->theta);

    double x2 = p.r * cos(p.theta);
    double y2 = p.r * sin(p.theta);

    double x3 = x1 + x2;
    double y3 = y1 + y2;

    double r3 = sqrt(x3 * x3 + y3 * y3);
    double theta3 = atan2(y3, x3);

    PolarPoint result(r3, theta3);
    return result;
}

PolarPoint PolarPoint::operator-(const PolarPoint& p) const{
    double x1 = this->r * cos(this->theta);
    double y1 = this->r * sin(this->theta);

    double x2 = p.r * cos(p.theta);
    double y2 = p.r * sin(p.theta);

    double x3 = x1 - x2;
    double y3 = y1 - y2;

    double r3 = sqrt(x3 * x3 + y3 * y3);
    double theta3 = atan2(y3, x3);

    PolarPoint result(r3, theta3);
    return result;
}