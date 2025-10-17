cmake_minimum_required(VERSION 3.10)
project(Lab03_OOP)

set(CMAKE_CXX_STANDARD 17)

# собираем основное приложение
add_executable(Lab03_OOP
    main.cpp
    Figure.cpp
    Rectangle.cpp
    Trapezoid.cpp
    Rhombus.cpp
)

# подключаем google test для тестов
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# собираем тесты
add_executable(tests
    tests/test_figures.cpp
    Rectangle.cpp
    Trapezoid.cpp
    Rhombus.cpp
)

target_link_libraries(tests GTest::GTest GTest::Main)
add_test(NAME AllTests COMMAND tests)
