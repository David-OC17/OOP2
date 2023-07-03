#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point();
    Point(int x, int y);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);

    float distance_to_point(Point p);

private:
    int x;
    int y;
};  

#endif // POINT_H
