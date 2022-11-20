#include <stdio.h>
#include <math.h>


int main(){
	int huyen,side1,side2,chieucao;
	float h;
	float chuvi,dientich;
	printf ("Nhap vao do dai 3 canh tam giac(canhhuyen,canhben,canhday): ");
	scanf("%d %d %d",&huyen,&side1,side2);
	if (side1 + side2 < huyen){
		printf("sai dieu kien");
	}
	chuvi= side1 + side2 + huyen;
	
	if (side1 == side2 == huyen){
		printf ("Day la tam giac deu: ");
		dientich = pow(side1,2)*(sqrt(3)/4);
	}
	else if (pow(side1,2) + pow(side2,2) == pow(huyen,3)){
		printf ("Day la tam giac vuong");
		dientich = 1/2*(side1*side2);
	}
	else if(side1 == side2){
		printf ("day la tam giac can");
		dientich = 1/2*(chieucao * huyen);
	}
	else {
		printf ("Day la tam giac thuong");
		dientich = 1/2 *(side1 * chieucao);
	}
	
	
	printf("chu vi tam giac la: %d",chuvi);
	printf("dien tich tam giac la:%d",dientich);
	return 0;
}
