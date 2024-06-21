#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
typedef struct phanso{
	int tu;
	int mau;
};
void input(phanso &s);
void output (phanso &s);
int ucln(int a,int b);
void toigian(phanso &s);
int main(){
	phanso s;
	input(s);
	output(s);
	printf("\nuoc chung lon nhat: %d",ucln(s.tu,s.mau));
	toigian(s);
	output(s);
}
void input(phanso &s){
	printf("Nhap tu so: ");
	scanf("%d",&s.tu);
	do{
		printf("Nhap mau so: ");
		scanf("%d",&s.mau);
	}while(s.mau==0);
}
void output(phanso &s){
	printf("\nPhan so vua nhap la: %d/%d",s.tu,s.mau);
}
int ucln(int a,int b){
	int h;
	for(int i=1;i<=b;i++){
		if(a%i==0&&b%i==0){
			h=i;
		}
	}
	return h;
}
void toigian(phanso &s){
	if(s.mau<0){
		s.mau *= -1;
		s.tu *= -1;
	}
	s.mau/=ucln(s.tu,s.mau);
	s.tu/=ucln(s.tu,s.mau);
}
