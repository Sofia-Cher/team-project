#include "chernichenko.h"

const double PI = 3.14159265358979;

// Перевод градусов в радианы: rad = deg * π / 180
double degToRad(double d) {
    return d * PI / 180.0;
}

// Перевод радиан в градусы: deg = rad * 180 / π
double radToDeg(double r) {
    return r * 180.0 / PI;
}
