#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
typedef struct point{
	int x;
	int y;
};
void nhaptoado1diem(point &p1);
void nhaptoadonhieudiem(point p1[],int n);
float s(point a,point b, point c);
float d(point a,point b);
float s1(point a[],int n);
int main(){
	int n;
	point a,b,c;
	point p1[100];
	printf("Nhap so luong toa do: ");
	scanf("%d",&n);
	nhaptoadonhieudiem(p1,n);
	printf("Dien tich da giac: %f",s1(p1,n));
    
    
}
void nhaptoado1diem(point &p1){
	printf("\nNhap toa do diem x: ");
	scanf("%d",&p1.x);
	printf("\nNhap toa do diem y: ");
	scanf("%d",&p1.y);
}
void nhaptoadonhieudiem(point p1[],int n){
	for (int i=0;i<n;i++){
		printf("\nNhap toa do diem: %d",i+1);
		nhaptoado1diem(p1[i]);
	}
	
}
float d(point a,point b){
	 float ab=sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
	 return ab;
}
float s(point a,point b, point c){
	
	float p1=d(a,b);
	float p2=d(a,c);
	float p3=d(b,c);
	float p=(p1+p2+p3)/2;
	float s=sqrt(p*(p-p1)*(p-p2)*(p-p3));
	return s;
}
float s1(point a[],int n){
	float sum=0;
	for(int i=1;i<n-1;++i){
		sum+=s(a[0],a[i],a[i+1]);
	}
	return sum;
}
