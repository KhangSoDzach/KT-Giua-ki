#include <stdio.h>
#include <math.h>


int main(){
	int x;
	float sum = 0;
	
	printf("Nhap gia tri x:");
	scanf("%f",&x);
	
	if (x < 0){
		sum = sin(x)*cos(5*x);
		printf ("F(x) = %f",sum);
	}
	else if (x = 0){
		sum = pow (5,x);
		printf ("F(x) = %f",sum);
	}
	else if (x < 5.0){
		sum = exp(x);
		printf ("F(x) = %f",sum);
	}
	else  {
		sum = (pow(5.0,x))/(x+5.0);
		printf ("F(x) = %f",sum);
	}
	
	return 0;
}
