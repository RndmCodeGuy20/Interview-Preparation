/**
 * Created by SHANTANU on 03-10-2023.
 * Topic - 
*/
#include <stdio.h>

typedef int INTEGER;

int main() {
    int i = 10;
    const INTEGER i2 = 20;
//    i2 = 10;
//    bool b = true;
    float f = 3;
    double d = 3.333;
    char c = 's';
    INTEGER auto a = 20.010;

    void *v = (void *) 10;

    printf("%d %f %lf %c %d %d", i, f, d, c, a, v);

    return 0;
}