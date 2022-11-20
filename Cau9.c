#include <stdio.h>
#include <math.h>

int res(int n){
	int i;
	int sum =0;
	for (i=1;i<=n;i++){
		sum = sum * 10 + n % 10;
		n /= 10;
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
	printf ("So dao nguoc cua %d la: %d", n,res(n));
	return 0;
}
