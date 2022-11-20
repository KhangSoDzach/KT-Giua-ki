#include <stdio.h>
#include <math.h>
float s1(int n){
	int i;
	float sum = 0;
	for (i=1;i<=n;i++){
		sum += (i + 1) / sqrt(i);
	}
	return sum;
}
int s2(int n){
	float sum;
	int i;
	for (i=1;i<=n;i++){
		sum +=i;
	}
	return sum;
}
float s3(int n){
	float i;
	float sum = 0;
	for (i=1;i<=n;i++){
		sum += 1/i;
	}
	return sum;
}
int s4(int n){
	int i;
	int sum = 1;
	for (i=1;i<=n;i++){
		sum *=i;
	}
	return sum;
}
float s5(int n){
	float i;
	float sum = 0;
	for (i=1;i<=n;i++){
		sum += pow(-1,i)/i;
	}
	return sum;
}

int main(){
	int n;
do{

	printf("Nhap vao gia tri n(n > 0):");
	scanf("%d",&n);
	if (n <= 0){
		printf("nhap lai gia tri n:\n");
	}
}	
	
while (n <= 0);
	printf ("s1 = %f \n", s1(n));
	printf ("s2 = %d \n",s2(n));
	printf ("s3 = %f \n",s3(n));
	printf ("s4 = %d \n",s4(n));
	printf ("s5 = %f \n",s5(n));
	return 0;
}
