#include <stdio.h>
#include <math.h>


int main(){
	float x0, y0, r;
	float xa,ya;
	float d = 0;
	printf("Nhap toa do (x,y) cua O: ");
	scanf ("%f %f",&x0,&y0);
	printf ("Nhap ban kinh duong tron: ");
	scanf("%f",&r);
	printf ("Nhap toa do cua A (x,y); ");
	scanf("%f %f",&xa,&ya);
	
	d = sqrt( pow( (xa - x0), 2) + pow( (ya - y0), 2) );
	
	if (d > r){
		printf ("Diem a nam ngoai vong tron");
	}
	else if (d = r){
		printf ("Diem a nam tren vong tron");
	}
	else {
		printf ("Diem a nam trong vong tron");
	}

	
	return 0;
}
