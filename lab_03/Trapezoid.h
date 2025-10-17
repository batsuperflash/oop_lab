#pragma once
#include "Figure.h"

// класс трапеция
class Trapezoid : public Figure {
private:
    double a, b, h;
public:
    Trapezoid() : a(0), b(0), h(0) {}
    Trapezoid(double a_, double b_, double h_) : a(a_), b(b_), h(h_) {}

    void read(std::istream& in) override;
    void print(std::ostream& out) const override;
    Point center() const override;
    double area() const override;

    Figure* clone() const override { return new Trapezoid(*this); }
    bool operator==(const Figure& other) const override;
};
