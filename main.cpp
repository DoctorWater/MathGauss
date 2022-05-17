#include <iostream>
#include <conio.h>
#include <math.h>
#include "Gauss.h"
const int n = 5;
const int N = 100;

using namespace std;
int main()
{
    double a;
    double b;
    cin >> a >> b;
    double s = 0.0;
    for(int i = 0; i < N; ++i)
    {
        s += lab::Gauss(a+i*(b-a)/N, a+(i+1)*(b-a)/N, n); //для увеличения точности разбиваем интервал на отрезки и прогоняем Гаусс для каждого из них.
    }
    cout << "I = " << s << endl;

    return 0;
}