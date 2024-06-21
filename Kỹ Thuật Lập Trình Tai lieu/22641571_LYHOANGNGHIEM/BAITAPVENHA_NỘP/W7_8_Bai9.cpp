#include <stdio.h>
#include <math.h> 
int checktamgiac (float AB, float AC, float BC) {
	if (AB+AC>BC && AB+BC>AC && AC+BC>AB) {
		return 1; 
	} else {
		return 0; 
	} 
} 
void Stamgiac (float AB, float AC, float BC) {
	float p=(AB+AC+BC)/2; 
	float s; 
	if (checktamgiac(AB, AC, BC)==1) {
		s=sqrt(p*(p-AB)*(p-AC)*(p-BC)); 
	}
	printf ("\nS tam giac= %.2f", s); 
} 
int main() {
	float x1, y1, x2, y2, x3, y3;
	printf ("Nhap toa do diem A: ");
	scanf ("%f%f", &x1, &y1); 
	printf ("Nhap toa do diem B: ");
	scanf ("%f%f", &x2, &y2); 
	printf ("Nhap toa do diem C: ");
	scanf ("%f%f", &x3, &y3); 
	float AB=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2)); 
	float AC=sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));
	float BC=sqrt(pow(x3-x1, 2)+pow(y3-y2, 2));
	if (checktamgiac(AB, AC, BC)==1) {
		printf ("Tao thanh dc tam giac"); 
	} else {
		printf ("Ko tao dc thanh tam giac"); 
	} 
	Stamgiac(AB, AC, BC); 
}	 
