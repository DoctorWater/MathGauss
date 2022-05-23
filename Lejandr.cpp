
#include "Lejandr.h"
namespace lab {
    double Legandr(double n, double x) {
        if (n > 1) {
            double p=Legandr(n - 1, x);
            double p2=Legandr(n - 2, x);
            return ((2*n+1)/(n+1)*x*p-n/(n+1)*p2);
        }
        else{
            return 0;
        }
    }
}
