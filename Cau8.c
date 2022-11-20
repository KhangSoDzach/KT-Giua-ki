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
	int sum;
	int i;
	for (i=1;i<=n;i++){
		sum +=i;
	}
	return sum;
}
float s3(int n){
	int i;
	float sum = 0;
	for (i=1;i<=n;i++){
		sum += 1/i;
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
	printf ("s1 =%f \n", s1(n));
	printf ("s2 =%d \n",s2(n));
	printf ("s3 = %f \n",s3(n));
	return 0;
}
