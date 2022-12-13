#include <stdio.h>
#include <math.h>
#define SIZE 2000
int main()
{
	int m,t,r;
	int thuong= 0;
	
	printf ("Nhap ma khach hang:");
	scanf("%d",&m);
	printf ("Diem thanh vien:");
	scanf ("%d",&t);
	
	if (t%10 != 0){
		printf ("Nhap du lieu kt sai");
		return 0;
	}
	
	if (m<=9999 || m >=100000000 ){
		printf ("Nhap sai");
		return 0;
	}
	while (m > 10){
		r = m % 10;
		m /= 10;
	}
	
	
	switch (r){
		case 0: case 1: case 2:
			thuong = t * 10/100;
			printf ("Dong \n");
			break;
		case 3: case 4: case 5:
			thuong = t * 12/100;
			printf ("Bac \n");
			break;
		case 6: case 7:
			thuong = t * 13/100;
			printf ("Vang \n");
			break;
		case 8: case 9:
			thuong = t * 16/100;
			printf ("Bach kim \n");
			break;
	}
	printf ("Diem thuong:%d \n",thuong);
	
	
	
	return 0;

}
