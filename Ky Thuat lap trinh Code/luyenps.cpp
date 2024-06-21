#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
struct PHANSO
{
	int tu;
	int mau;
};
void InputPS( PHANSO &ps);
void OutputPS( PHANSO ps);
int gcd(int a,int b);
void RutgonPS (PHANSO &ps);
PHANSO TongPS (PHANSO ps1, PHANSO ps2);
PHANSO HieuPS (PHANSO ps1, PHANSO ps2);
PHANSO TichPS (PHANSO ps1, PHANSO ps2);
PHANSO ThuongPS (PHANSO ps1, PHANSO ps2);
void InputArrPS(PHANSO p[],int &n);
void OutputArrPS(PHANSO p[], int n);
void menu(){
	printf("Chuong trinh thao tac tren cau truc phan so: ");
	printf("\n1. Nhap phan so: ");
	printf("\n2. Xuat phan so: ");
	printf("\n3. Rut gon: ");
	printf("\n4. Tong hai phan so: ");
	printf("\n5. Hieu hai phan so: ");
	printf("\n6. Tich hai phan so: ");
	printf("\n7. Thuong hai phan so: ");
	printf("\n8. Xuat mang phan so: ");
}
void InputArrPS(PHANSO p[], int &n){
	printf("n= ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		InputPS(p[i]);
	}
}
void OutputArrPS(PHANSO p[], int n){
	for(int i=0;i<n;i++){
		OutputPS(p[i]);
		printf("\t");
	}
}




int main(){
	char chon; int n;
	PHANSO ps, ps1, ps2, p[MAX]; 
	menu();
	do{
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: InputPS(ps);  break;
			case 2: OutputPS(ps); break;
			case 3: RutgonPS(ps);
			        printf("Phan so sau khi rut gon: ");
			        OutputPS(ps); break; 
			case 4: printf("Nhap phan so 1: "); InputPS(ps1);
			        printf("Nhap phan so 2: "); InputPS(ps2);
			        ps = TongPS( ps1, ps2 );  
			        printf("Tong ps1+ps2 =  "); OutputPS(ps);  break;
			case 5: printf("Nhap phan so 1: "); InputPS(ps1);
			        printf("Nhap phan so 2: "); InputPS(ps2);
			        ps=HieuPS(ps1, ps2);
			        printf("Hieu hai phan so: ");  OutputPS(ps); break;
			case 6: printf("Nhap phan so 1: ");  InputPS(ps1);
			        printf("Nhap phan so 2: ");  InputPS(ps2);
			        ps=TichPS(ps1,ps2);
			        printf("Tich hai phan so: ");  OutputPS(ps); break;
			case 7: printf("Nhap phan so 1: ");   InputPS(ps1);
			        printf("Nhap phan so 2: ");   InputPS(ps2);
			        ps=ThuongPS(ps1,ps2);
			        printf("Thuong hai phan so: ");   OutputPS(ps);  break;
			case 8: InputArrPS(p,n);
			        OutputArrPS(p,n);   break;
		}
	}while(chon!=0);
}
void InputPS (PHANSO &ps){
	do{
		printf("Nhap phan so duoi dang t/m voi mau so duong: ");
		scanf("%d/%d",&ps.tu,&ps.mau);
	}while(ps.mau<=0);
}
void OutputPS (PHANSO ps){
	printf("%d/%d",ps.tu,ps.mau);
}
int gcd(int a,int b){
	if (a<b)   return gcd(b,a);
	if(a%b==0)  return b;
	return gcd(b,a%b);
} 
void RutgonPS (PHANSO &ps){
	int d=gcd(abs(ps.tu),ps.mau);
	if(d>1){
		ps.tu/=d;
		ps.mau/=d;
	}
}
PHANSO TongPS(PHANSO ps1, PHANSO ps2 ){
	PHANSO ps;
	ps.tu=ps1.tu*ps2.mau+ps2.tu*ps1.mau;
	ps.mau=ps1.mau*ps2.mau;
	RutgonPS(ps);
	return ps;
}
PHANSO HieuPS(PHANSO ps1,PHANSO ps2){
	PHANSO ps;
	ps.tu=ps1.tu*ps2.mau-ps2.tu*ps1.mau;
	ps.mau=ps1.mau*ps2.mau;
	RutgonPS(ps);
	return ps;
}
PHANSO TichPS(PHANSO ps1,PHANSO ps2){
	PHANSO ps;
	ps.tu=ps1.tu*ps2.tu;
	ps.mau=ps1.mau*ps2.mau;
	RutgonPS(ps);
	return ps;
}
PHANSO ThuongPS(PHANSO ps1,PHANSO ps2){
	PHANSO ps;
	ps.tu=ps1.tu*ps2.mau;
	ps.mau=ps1.mau*ps2.tu;
	if(ps.mau<0){
		ps.tu*=-1;
		ps.mau*=-1;
	}
	RutgonPS(ps);
	return ps;
}
