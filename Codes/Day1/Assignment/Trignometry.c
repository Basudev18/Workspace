#include<stdio.h>
#include"Trigo.h"

int main()
{       
	float p,b,h;
	printf("Enter perpendicular Base Hypotenuse: \n");
	scanf("%f \n %f \n %f",&p,&b,&h);
        printf("\nSINE of the traingle:%f \n",sine(p,h));
        printf("COS of the traingle:%f \n",cosine(b,h));
        printf("TAN of the traingle:%f \n",tangent(p,b));
}
