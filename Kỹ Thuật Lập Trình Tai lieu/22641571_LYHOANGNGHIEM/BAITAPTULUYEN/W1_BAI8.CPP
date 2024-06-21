#include<stdio.h>
int main()
{
	printf("***CHUONG TRINH TINH TIEN LAI GUI TIET KIEM***");
    float laisuat , sotienlai ;
	int sotiengui, sothanggui, tongtien ; 
	printf("\nNhap lai suat: ");
	scanf("%f",&laisuat ); 
	printf("\nNhap so tien gui: "); 
	scanf("%i",&sotiengui); 
	printf("\nNhap so thang gui: ");
	scanf("%i",&sothanggui ); 
	sotienlai = (sotiengui * sothanggui)*(laisuat/100/12);
	printf("\nSo tien lai = %f\n",sotienlai);
	tongtien = sotiengui + sotienlai;
	printf("\nTong tien = %i", tongtien); 
	 
 } 
