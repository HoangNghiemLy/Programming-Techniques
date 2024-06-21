#include <stdio.h>
#include <math.h>
void Kitu(char c) {
	if (c=='u' || c=='e' || c=='o' || c=='a' || c=='i') printf ("%c la nguyen am", c);
	else printf ("%c ko phai la nguyen am", c); 
} 
void Tong (int x) {
	int sum=0;
	for (int i=1; i<=x; i++) {
		if (x%i==0) {
			sum+=i; 
		} 
	} 
	printf ("Tong uoc so: %d", sum); 
} 
void ChinhPhuong (int x) {
	int kc=sqrt(x);
	if (pow(kc, 2)==x) {
		printf ("%d la so chinh phuong", x); 
	} else {
		printf ("%d ko phai so chinh phuong", x); 
	} 
} 
int main() {
	int n;
	printf ("-----MENU-----\n");
	printf ("1-Kiem tra ki tu co phai nguyen am hay ko\n");
	printf ("2-Tinh tong cac uoc so cua n\n");
	printf ("3-Kiem tra 1 so nguyen co phai chinh phuong hay ko\n");
	printf ("Chon chuc nang: ");
	scanf ("%d", &n);
	if (n==1) {
		char c;
		printf ("Nhap ki tu: ");
		fflush(stdin); 
		scanf ("%c", &c);
		Kitu(c); 
	} else if (n==2) {
		int x;
		printf ("Nhap so nguyen: ");
		scanf ("%d", &x);
		Tong(x); 
	} else if (n==3) {
		int x;
		printf ("Nhap so nguyen: ");
		scanf ("%d", &x);
		ChinhPhuong(x); 
	} 
}
 
