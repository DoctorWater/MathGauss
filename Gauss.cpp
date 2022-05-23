#include "Gauss.h"
#include "function.h"
#include <vector>

using namespace std;
namespace lab {
    double Gauss(double a, double b, int n) {
        const double Xi[] = {0, -0.5773503, 0.5773503, -0.7745967, 0, 0.7745967, -0.8611363, -0.3399810, 0.3399810,
                             0.8611363 - 0.9061798, -0.5384693, 0, 0.5384693, 0.9061798, -0.9324700, -0.6612094,
                             -0.2386142, 0.2386142, 0.6612094, 0.9324700};      //Значения узлов при Xi [-1,1]
        const double Ci[] = {2, 1, 1, 0.5555556, 0.8888889, 0.5555556, 0.3478548, 0.6521451, 0.6521451, 0.3478548,
                             0.4786287, 0.2369269, 0.5688888, 0.2369269, 0.4786287, 0.1713245, 0.3607616, 0.4679140,
                             0.4679140, 0.3607616, 0.1713245};//Значения коэффициентов для 1-6 узлов
        double sub = (b - a) / 2;
        double sum = (a + b) / 2;
        int counter = 0;
        vector<double> realC;
        vector<double> realX;
        realC.resize(n);
        realX.resize(n);
        for (int i = 0; i < n; i++) {
            counter += i;
        }
        for (int i=0;i<n;i++){
            realC[i]=Ci[counter+i];
            realX[i]=Xi[counter+i];
        }
        double S = 0.0;
        for (int i = 0; i < n; i++) {
            S += realC[i] * function(sum + sub * realX[i]);
        }
        return sub * S;
    }
}
