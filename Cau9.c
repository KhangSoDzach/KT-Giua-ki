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
int sht(int n){
	int i;
	int sum = 0;
	for (i=1;i<n;i++){
		if (n % i == 0)
			sum += i;
	}
	if (sum == n){
		printf ("%d la so hoan thien",n);
	}
	else 
		printf ("%d ko phai la so hoan thien",n);
	return sum;
	
}
int sdx(int n){
	int i;
	int res = 0;
	while (n > 0){
		res = res *10 + n%10;
		n /= 10;
	}
	return res;
}
int ktsdx(int n)
{
	int kt = 0;
	if (sdx(n)==n)
		kt = 1;
	return kt;
}

void insdx(int n){
	int kt = ktsdx(n);
	if (kt == 1)
		printf ("%d la so doi xung\n",n);
	else 
		printf ("%d ko la so doi xung \n",n);
}
int snt(int n)
{
	int i,k,x;
	int d = 0;
	while (n < 2)
		printf ("day ko phai la so nguyen to");
		return 0;

	
	for (i=1;i<n;i++){
		if (n % i == 0 ){
			d++;
			x = n;
		}
	}
	if (d == 2)
		printf ("%d la so nguyen to: ",n);
	else {
		for (k=n;k<1000000;k--){
			if (k = x)
				printf ("%d la so nguyen to:",k);
		}
	}
}
int as(int n)
{
	int i,r,t;
	int sum =0;
	int init = n;
	while (n < 0){
		r = n % 10;
		t = pow(r,3);
		sum += t;
		n /= 10;
	}
	if (sum == init)
		printf ("%d la so Armsrong\n",n);
	else 
		printf ("%d ko phai la so armstrong: \n",n);
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

	printf ("So dao nguoc cua %d la: %d\n", n,res(n));
	printf ("\n",sht(n));
	printf (" \n");insdx(n);
	printf ("\n",as(n));
	return 0;
}
