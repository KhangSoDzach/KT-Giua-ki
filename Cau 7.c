#include <stdio.h>
#include <math.h>


int main(){
	int c,m;
	
	
	
	printf ("Ten san pham/Don gia\n");
	printf("1) Pepsi 6000\n");
	printf("2) Tra xanh 7000\n");
	printf("3) Sting 8000\n");
	printf("4) Sua tuoi  6000\n");
	printf("5) nuoc suoi  4000\n");
	printf ("Chon loai nuoc ngot(1 -> 5):");
	scanf("%d",&c);
	printf ("Cho tien vao:");
	scanf("%d",&m);
	
	
	switch (c){
		case 1:
			if (m >= 6000){
				printf("pepsi");
			}
			else{
				printf ("Ko du tien");
			}
			break;
		case 2:
			if (m >= 7000){
				printf("Tra xanh");
			}
			else{
				printf ("Ko du tien");
			}
			break;
			
			
		case 3:
			if (m >= 8000){
				printf("Sting");
			}
			else{
				printf ("Ko du tien");
			}
			break;
		case 4:
			if (m >= 6000){
				printf("Sua tuoi");
			}
			else{
				printf ("Ko du tien");
			}
			break;
		case 5:
			if (m >= 4000){
				printf("Nuoc suoi");
			}
			else{
				printf ("Ko du tien");
			}
			break;
		default:
				printf ("Ko co trong day: ");
			break;
	}
	
	return 0;
}
