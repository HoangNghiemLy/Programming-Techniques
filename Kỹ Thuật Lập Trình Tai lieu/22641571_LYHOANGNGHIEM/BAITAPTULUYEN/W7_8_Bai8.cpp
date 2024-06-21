#include <stdio.h>
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
		printf ("Nhap so nguyen: ");
		scanf ("%d", &n); 
	} while (n<0); 
	MaxMin(n); 
} 
