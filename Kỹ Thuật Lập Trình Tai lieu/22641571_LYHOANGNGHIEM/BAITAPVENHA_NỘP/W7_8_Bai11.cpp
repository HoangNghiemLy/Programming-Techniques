#include <stdio.h>
#include <math.h> 
int SNT (int x) {
	for (int i=2; i<=sqrt(x); i++) {
		if (x%i!=0) {
			return 1; 
		} else {
			return 0; 
		} 
	} 
} 
void MaxMin (int n) {
	int max=0, min=9;
	while (n>0) {
		int temp=n%10;
		if (temp>max) max=temp;
		if (temp<min) min=temp;
		n=n/10;  
	} 
	printf ("So lon nhat cua n: %d\n", max);
	printf ("So be nhat cua n: %d", min); 
} 
int main() {
	int n;
	do {
		printf ("-----MENU-----\n");
		printf ("1- So nguyen to\n");
		printf ("2- In chu so min, max\n");
		printf ("3- Thoat\n");
		printf ("Chon chuc nang: ");
		scanf ("%d", &n); 
		if (n==1) {
			int x;
			printf ("Nhap so nguyen: ");
			scanf ("%d", &x);
			if (SNT(x)==1) {
				printf ("%d la SNT", x); 
			} else {
				printf ("%d ko phai la SNT", x); 
			} 
		} else if (n==2) {
			int x;
			printf ("Nhap so nguyen (n>9): ");
			scanf ("%d", &x);
			MaxMin(x); 
		} 
	} while (n<1 || n>3); 
} 
