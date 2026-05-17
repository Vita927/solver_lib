#include "solver.h"
#include <cmath>

std::pair<double, double> solve(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    double x1 = (-b + sqrt(d)) / (2 * a);
    double x2 = (-b - sqrt(d)) / (2 * a);
    return {x1, x2};
}
