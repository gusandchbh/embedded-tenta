#include <stdio.h>

// Numerator == talet där uppe
// Denominator == talet där nere
double int(int a, int b);
double add(double a, double b, double c, double d);

int main() {
    add(1,2,1,4);
    return 0;
}

double add(double a, double b, double c, double d)
 {
     double num = ((a * d) + (b * c));
     double denom = (b * d);
    double x = gcd(num,denom);
    printf("%d",x);
    return 1;
 }


int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}
