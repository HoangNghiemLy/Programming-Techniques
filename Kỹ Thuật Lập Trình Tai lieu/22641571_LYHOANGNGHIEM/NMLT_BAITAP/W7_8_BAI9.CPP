#include<stdio.h>
#include<math.h>
int kttamgiac(float AB, float AC, float BC){
	if(AB+AC>BC && AB+BC>AC && BC+AC>AB){
		return 1; 
	} else {
		return 0; 
	} 
} 
void DTtamgiac (float AB, float AC, float BC){
	float p=(AB+AC+BC)/2;
	float s;
	if (kttamgiac(AB, AC, BC)==1){
		s=sqrt(p*(p-AB)*(p-AC)*(p-BC)); 
	} 
	printf("\nDien tich tam giac: %.2f",s); 
} 
int main(){
	float x1,y1,x2,y2,x3,y3;
	printf("Nhap toa do diem A: ");
	scanf("%f%f",&x1,&y1); 
	printf("Nhap toa do diem B: ");
	scanf("%f%f",&x2,&y2); 
	printf("Nhap toa do diem C: ");
	scanf("%f%f",&x3,&y3);
	float AB=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	float AC=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	float BC=sqrt(pow(x3-x2,2)+pow(y3-y2,2)); 
	if(kttamgiac(AB, AC, BC)==1){
		printf("Toa do tao thanh tam giac"); 
	} else{
		printf("Toa do khong tao thanh tam giac"); 
	} 
	DTtamgiac(AB, AC, BC);
} 
