#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Rhombus.h"

int main() {
    std::vector<Figure*> figures;
    int n;

    std::cout << "enter number of figures: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int type;
        std::cout << "select type: 1-rectangle, 2-trapezoid, 3-rhombus: ";
        std::cin >> type;
        Figure* f = nullptr;
        if (type == 1) f = new Rectangle();
        else if (type == 2) f = new Trapezoid();
        else if (type == 3) f = new Rhombus();
        if (f) {
            std::cin >> *f;
            figures.push_back(f);
        }
    }

    double totalArea = 0;
    for (auto f : figures) {
        Point c = f->center();
        std::cout << *f << ", center=(" << c.x << "," << c.y << "), area=" << f->area() << "\n";
        totalArea += f->area();
    }
    std::cout << "total area: " << totalArea << "\n";

    int idx;
    std::cout << "enter index to remove: ";
    std::cin >> idx;
    if (idx >= 0 && idx < figures.size()) {
        delete figures[idx];
        figures.erase(figures.begin() + idx);
    }

    for (auto f : figures) delete f;
}
