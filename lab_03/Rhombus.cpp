#include "Rhombus.h"
#include <iostream>

// ввод диагоналей
void Rhombus::read(std::istream& in) {
    std::cout << "enter diagonals: ";
    in >> d1 >> d2;
}

// вывод ромба
void Rhombus::print(std::ostream& out) const {
    out << "rhombus: d1=" << d1 << ", d2=" << d2;
}

// центр ромба
Point Rhombus::center() const {
    return { d1 / 2.0, d2 / 2.0 };
}

// площадь ромба
double Rhombus::area() const {
    return d1 * d2 / 2.0;
}

// сравнение ромбов
bool Rhombus::operator==(const Figure& other) const {
    const Rhombus* o = dynamic_cast<const Rhombus*>(&other);
    return o && d1 == o->d1 && d2 == o->d2;
}
