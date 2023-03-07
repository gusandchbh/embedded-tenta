#include <stdio.h>


double addFraction(int a, int b, int c, int d);
double subFraction(int a, int b, int c, int d);
double multFraction(int a, int b, int c, int d);


int main() {
    int arr[4] = {1,2,1,4};

    double result = addFraction(arr[0],arr[1],arr[2],arr[3]);
    printf("Approximated double: %.2f\n", result);
    double result2 = subFraction(1,2,1,4);
    printf("Approximated double: %.2f\n", result2);
    double result3 = multFraction(1,2,1,4);
    printf("Approximated double: %.2f\n", result3);

    return 0;
}

double subFraction(int a, int b, int c, int d){
    printf("SUBTRACTING! \n");
    double first = (double ) a / (double) b;
    double second = (double) c / (double) d;
    int nominator = a * d - b * c;
    int denominator = b * d;
    while (denominator / 2 > 0 && nominator / 2 > 0){
        denominator = denominator / 2;
        nominator = nominator / 2;
        if (denominator == d){
            break;
        }
    }

    printf("Exact value: %d/%d + %d/%d = %d / %d\n",a,b,c,d, nominator, denominator);
    return first - second;
}

double addFraction(int a, int b, int c, int d){
    printf("ADDING!\n");
        double first = (double ) a / (double) b;
        double second = (double) c / (double) d;
        int nominator = a * d + b * c;
        int denominator = b * d;
    while (denominator / 2 > 0 && nominator / 2 > 0){
        denominator = denominator / 2;
        nominator = nominator / 2;
        if (denominator == d){
            break;
        }
    }
    printf("Exact value: %d/%d + %d/%d = %d / %d\n",a,b,c,d, nominator, denominator);


        return first + second;
};

double multFraction(int a, int b, int c, int d){
    printf("MULTIPLYING!\n");
    double first = (double ) a / (double) b;
    double second = (double) c / (double) d;
    int nominator = a * c;
    int denominator = b * d;

    printf("Exact value: %d/%d + %d/%d = %d / %d\n",a,b,c,d, nominator, denominator);
    return first * second;
}