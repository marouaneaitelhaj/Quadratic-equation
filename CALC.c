#include <math.h>
#include <stdio.h>

int main()
{
	int choice;
	int a, b, c;
	int x1;
	int x2;
	int y1;
	int back;
	int type;
	float d, f;
	double delta;
			start:
				printf("\n***********************\n1- Addition\n2- Subtraction\n3- multiplication\n4- Division\n5- Quadratic equation\n6- Sin - Cos - Tan\n***********************\n");
			scanf("%d", &choice);
			switch (choice)
			{
				//QUADRATIC EQUATION
				case 5:
					eqe:
						printf("\n*****************\nax^2 + bx + c = 0\n*****************\ncoefficient a = ");
					scanf("%d", &a);
					switch (a)
					{
						case 0:
							printf("\n*****************\nFirst Degree Equations, solve it yourself\n");
							goto eqe;
							break;
						default:

							printf("\ncoefficient b = ");
							scanf("%d", &b);
							printf("\ncoefficient c = ");
							scanf("%d", &c);
							delta = b *b - 4 *a * c;
							printf("DELTA = %1.2f \n", delta);
							if (delta > 0)
							{
								x1 = (-b + sqrt(delta)) / (2 *a);
								x2 = (-b - sqrt(delta)) / (2 *a);
								printf("X1 = %d \nX2 = %d", x1, x2);
							}
							else if (delta = 0)
							{
								y1 = (-b) / (2 *a);
								printf("X1 = &d", y1);
							}
							else
							{
								printf("THERE ARE NO REAL ROOTS!!!\n");
							}
					};
					printf("\n0- BACK\n1-AGAIN");
					scanf("%d", &back);
					switch (back)
					{
						case 0:
							goto start;
							break;
						case 1:
							goto eqe;
							break;
					};
					break;
					//ADDITION
				case 1:
					add:
						printf("Enter first nmber: ");
					scanf("%d", &a);
					printf("Enter secend nmber: ");
					scanf("%d", &b);
					c = a + b;
					printf("\nThe result is %d\n", c);
					printf("\n0- BACK\n1-AGAIN\n");
					scanf("%d", &back);
					switch (back)
					{
						case 0:
							goto start;
							break;
						case 1:
							goto add;
							break;
					};
					//SUBTRACTION
				case 2:
					sub:
						printf("Enter first nmber: ");
					scanf("%d", &a);
					printf("Enter secend nmber: ");
					scanf("%d", &b);
					c = a - b;
					printf("\nThe result is %d\n", c);
					printf("\n0- BACK\n1-AGAIN\n");
					scanf("%d", &back);
					switch (back)
					{
						case 0:
							goto start;
							break;
						case 1:
							goto sub;
							break;
					};
					//MULTIPLICATION
				case 3:
					mul:
						printf("Enter first nmber: ");
					scanf("%d", &a);
					printf("Enter secend nmber: ");
					scanf("%d", &b);
					c = a * b;
					printf("\nThe result is %d\n", c);
					printf("\n0- BACK\n1-AGAIN\n");
					scanf("%d", &back);
					switch (back)
					{
						case 0:
							goto start;
							break;
						case 1:
							goto mul;
							break;
					};
					//DIVISION
				case 4:
					div:
						printf("Enter first nmber: ");
					scanf("%d", &a);
					printf("Enter secend nmber: ");
					scanf("%d", &b);
					c = a / b;
					printf("\nThe result is %d\n", c);
					printf("\n0- BACK\n1-AGAIN\n");
					scanf("%d", &back);
					switch (back)
					{
						case 0:
							goto start;
							break;
						case 1:
							goto div;
							break;
					};
					case 6:
                            printf("\n1- SIN \n2- COS\n3- TAN\n");
    scanf("%d", &type);
    switch(type){
    case 1:
        printf("\nEnter The number: \n");
        scanf("%f", &d);
        f = sin(d);
        printf("\nThe result is: %f\n", f);
    break;
    case 2:
        printf("\nEnter The number: \n");
        scanf("%f", &d);
        f = cos(d);
        printf("\nThe result is: %f\n", f);
    break;
    case 3:
        printf("\nEnter The number: \n");
        scanf("%f", &d);
        f = tan(d);
        printf("\nThe result is: %f\n", f);
    break;
                            };
                            break;
			}
	return 0;
}
