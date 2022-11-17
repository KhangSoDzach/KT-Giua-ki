#include <stdio.h>


int main(){
	float d;
	int sum = 0;
	printf ("Nhap so duong di(Km): ");
	scanf ("%f", &d);
	
	if (d <= 1){
		sum = d *18000;
		printf ("%d",sum);
	}
	else if (d <= 10){
		sum = 18000 + (d - 1)*8000;
		printf ("%d",sum);
	}
	else if (d <= 30){
		sum = 18000 + 8000*9 + (d - 10)*6000;
		printf ("%d",sum);
	}
	else {
		sum = 18000 + 8000* 9 + 6000 *20 + (d - 30) * 4000 ;
		printf ("%d",sum);
	}
	
	return 0;
}
