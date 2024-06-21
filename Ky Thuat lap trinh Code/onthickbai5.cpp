#include <stdio.h>
struct thisinh{
	char vung;
	float toan;
	float ly;
	float hoa;
};
int main(){
	struct thisinh a;
	printf("Nhap vung: ");
	scanf("%c",&a.vung);
	printf("Toan: ");
	scanf("%f",&a.toan);
	printf("Ly: ");
	scanf("%f",&a.ly);
	printf("Hoa: ");
	scanf("%f",&a.hoa);
	float diemTong=a.toan+a.ly+a.hoa;
	if(a.vung == 'A'){
		diemTong += 1.0;
	}else if(a.vung == 'B'){
		diemTong += 0.5;
	}
	if(diemTong>=26.0){
		printf("\nYES");
	}else{
		printf("\nNO");
	}
}

