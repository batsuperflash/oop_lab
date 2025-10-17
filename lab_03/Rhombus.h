#pragma once
#include "Figure.h"

// класс ромб
class Rhombus : public Figure {
private:
    double d1, d2;
public:
    Rhombus() : d1(0), d2(0) {}
    Rhombus(double d1_, double d2_) : d1(d1_), d2(d2_) {}

    void read(std::istream& in) override;
    void print(std::ostream& out) const override;
    Point center() const override;
    double area() const override;

    Figure* clone() const override { return new Rhombus(*this); }
    bool operator==(const Figure& other) const override;
};
