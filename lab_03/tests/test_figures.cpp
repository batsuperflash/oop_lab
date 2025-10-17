#include <gtest/gtest.h>
#include "../Rectangle.h"
#include "../Trapezoid.h"
#include "../Rhombus.h"

// тест прямоугольника
TEST(RectangleTest, AreaAndCenter) {
    Rectangle r(4, 2);
    EXPECT_EQ(r.area(), 8);
    Point c = r.center();
    EXPECT_DOUBLE_EQ(c.x, 2);
    EXPECT_DOUBLE_EQ(c.y, 1);
}

// тест трапеции
TEST(TrapezoidTest, AreaAndCenter) {
    Trapezoid t(2, 4, 3);
    EXPECT_EQ(t.area(), 9);
    Point c = t.center();
    EXPECT_DOUBLE_EQ(c.x, 1);
    EXPECT_DOUBLE_EQ(c.y, 1.5);
}

// тест ромба
TEST(RhombusTest, AreaAndCenter) {
    Rhombus rh(4, 6);
    EXPECT_EQ(rh.area(), 12);
    Point c = rh.center();
    EXPECT_DOUBLE_EQ(c.x, 2);
    EXPECT_DOUBLE_EQ(c.y, 3);
}

// тест оператора ==
TEST(FigureEquality, Rectangle) {
    Rectangle r1(3,5), r2(3,5);
    EXPECT_TRUE(r1 == r2);
}

TEST(FigureEquality, Trapezoid) {
    Trapezoid t1(1,2,3), t2(1,2,3);
    EXPECT_TRUE(t1 == t2);
}

TEST(FigureEquality, Rhombus) {
    Rhombus rh1(5,7), rh2(5,7);
    EXPECT_TRUE(rh1 == rh2);
}
