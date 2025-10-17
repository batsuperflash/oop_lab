#include "Rectangle.h"
#include <iostream>

// ввод ширины и высоты
void Rectangle::read(std::istream& in) {
    std::cout << "enter width and height: ";
    in >> width >> height;
}

// вывод прямоугольника
void Rectangle::print(std::ostream& out) const {
    out << "rectangle: width=" << width << ", height=" << height;
}

// вычисление центра
Point Rectangle::center() const {
    return { width / 2.0, height / 2.0 };
}

// вычисление площади
double Rectangle::area() const {
    return width * height;
}

// сравнение прямоугольников
bool Rectangle::operator==(const Figure& other) const {
    const Rectangle* o = dynamic_cast<const Rectangle*>(&other);
    return o && width == o->width && height == o->height;
}
