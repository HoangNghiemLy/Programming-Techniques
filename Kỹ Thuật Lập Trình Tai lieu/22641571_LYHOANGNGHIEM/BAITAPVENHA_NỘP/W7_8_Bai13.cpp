#include <stdio.h>
#include <math.h>
void fibo (int x) {
	long long f, f0=0, f1=1;
	for (int i=2; i<=x; i++) {
		f=f1+f0;
		f0=f1;
		f1=f; 
		printf ("%d ", f); 
	} 
} 
int NgayThangNam (int d, int m, int y) {
	int maxd=31;
	if (d<1 || d>31 || m<1 || m>12) return 0;
	if (m==4 || m==6 || m==9 || m==11) maxd=30;
	else if (m==2) {
		if (y%400==0 || y%4==0 && y%100!=0) maxd=29;
	} else {
		maxd=28;
	}
	return d<=maxd;
}
int main() {
	int n;
	do {
		printf ("-----MENU-----\n");
		printf ("1-Fibonacci sequence\n");
		printf ("2-Check a date\n");
		printf ("3-Quit\n");
		printf ("Chon chuc nang: ");
		scanf ("%d", &n);
		if (n==1) {
			int x;
			printf ("Nhap so nguyen: ");
			scanf ("%d", &x);
			fibo(x); 
		} else if (n==2) {
			int d, m, y;
			printf ("Nhap ngay thang nam: ");
			scanf ("%d%d%d", &d, &m, &y); 
			if (NgayThangNam(d, m, y)) {
				printf ("Ngay thang nam hop le"); 
			} else {
				printf ("Ngay thang nam ko hop le"); 
			} 
		} 
	} while (n<1 || n>3); 
} 
