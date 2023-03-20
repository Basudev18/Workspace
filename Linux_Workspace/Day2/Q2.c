#include<stdio.h>
int w;
int h;

int a;
int p;

int main()
{
	h=7;
	w=5;
	p= 2*(h+w);
	printf("The Perimeter of the Rectangle is:%d inches\n",p);
	a=h*w;
	printf("The area of the rectangle: %d square inches\n",a);
	return 0;
}
