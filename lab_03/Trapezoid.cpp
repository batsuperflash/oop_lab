#include "Trapezoid.h"
#include <iostream>

// ввод параметров трапеции
void Trapezoid::read(std::istream& in) {
    std::cout << "enter top base, bottom base and height: ";
    in >> a >> b >> h;
}

// вывод трапеции
void Trapezoid::print(std::ostream& out) const {
    out << "trapezoid: a=" << a << ", b=" << b << ", h=" << h;
}

// вычисление центра
Point Trapezoid::center() const {
    return { (b - a) / 2.0, h / 2.0 };
}

// вычисление площади
double Trapezoid::area() const {
    return (a + b) * h / 2.0;
}

// сравнение трапеций
bool Trapezoid::operator==(const Figure& other) const {
    const Trapezoid* o = dynamic_cast<const Trapezoid*>(&other);
    return o && a == o->a && b == o->b && h == o->h;
}
