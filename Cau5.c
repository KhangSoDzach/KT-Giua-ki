#include <stdio.h>
#include <math.h>


int main(){
	int x,y;
	float sum;
	
	printf("nhap gia tri x va y:");
	scanf("%d %d",&x,&y);
	
	sum = (3* pow(x,3) * y - 1/2*pow(x,2) + 1/5*x*y)*6*x*pow(y,3);
	
	printf("%f",sum);
}
