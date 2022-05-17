#include "Gauss.h"
#include "function.h"

namespace lab {
    double Gauss(double a, double b, int n) {
        const double Xi[] = {-0.9061798, -0.5384693, 0, 0.5384693, 0.9061798};      //Значения узлов при Xi [-1,1]
        const double Ci[] = {0.4786287, 0.2369269, 0.5688888, 0.2369269, 0.4786287};//Значения коэффициентов для 5 узлов

        double sub = (b - a) / 2;
        double sum = (a + b) / 2;
        double S = 0.0;
        for (int i = 0; i < n; i++) {
            S += Ci[i] * function(sum + sub * Xi[i]);
        }
        return sub * S;
    }
}
