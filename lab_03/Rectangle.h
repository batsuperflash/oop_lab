#pragma once
#include "Figure.h"

// класс прямоугольник
class Rectangle : public Figure {
private:
    double width;
    double height;
public:
    Rectangle() : width(0), height(0) {}
    Rectangle(double w, double h) : width(w), height(h) {}

    void read(std::istream& in) override;
    void print(std::ostream& out) const override;
    Point center() const override;
    double area() const override;

    Figure* clone() const override { return new Rectangle(*this); }
    bool operator==(const Figure& other) const override;
};
