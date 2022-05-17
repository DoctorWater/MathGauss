#include <cmath>
namespace lab {
    double function(double x) {
        return log(x+sqrt(pow(x,2)+1))/x; //Здесь лежит сама вычисляемая функция, в нее подается x.
    }
}