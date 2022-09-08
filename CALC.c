#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    double delta;
    start:
    printf("*****************\nax^2 + bx + c = 0\n*****************\ncoefficient a = ");
    scanf("%d", &a);
    switch(a){
    case 0:
        printf("\n*****************\nFirst Degree Equations, solve it yourself\n");
        goto start;
        break;
    default:

    printf("\ncoefficient b = ");
    scanf("%d", &b);
    printf("\ncoefficient c = ");
    scanf("%d", &c);
    delta= (b * b) - (4 * a * c);
    printf("DELTA = %1.2f \n", delta);
    int x1 = (- b + sqrt(delta)) / (2 * a);
    int x2 = (- b - sqrt(delta)) / (2 * a);
    int y1 = (- b ) / (2 * a);
    if (delta > 0){
    printf("X1 = %d \nX2 = %d", &x1, &x2);
    } else if(delta = 0){
    printf("X1 = &d" , y1);
    } else {
    printf("THERE ARE NO REAL ROOTS!!!");
    goto start;
    };
    return 0;
    }
}
