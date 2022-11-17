#include <stdio.h>


int main(){
	int m,h;
	int sum = 0;
	printf ("Nhap so gio lam viec:  ");
	scanf ("%d",&h);
	printf("Nhap so tien duoc tra cho moi h: ");
	scanf("%d",&m);
	
	
	if (h<= 40){
		sum = m * h;
		printf ("So tien duoc tra: %d",sum);
	}
	else if ( h<=45 ){
		sum = (m * 40) + (m * (h-40) )*1.8;
		printf ("%d",sum);
	}
	else if (h <= 50){
		sum = (m * 40) + (m *1.8)*5 + ((m * 2.5) * (h-45));
		printf ("%d",sum);
	}
	else {
		sum = (m * 40) + (m * 1.8)*5 + (m * 2.5)*5 * ((m * 2.6) * (h - 50));
		printf ("%d", sum);
	}
	
	return 0;
}
