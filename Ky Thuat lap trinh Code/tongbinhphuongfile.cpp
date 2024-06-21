#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhap(FILE *t,float a[]){
	
	for(int i=1;i<=10;i++){
		printf("so %d: ",i);
		scanf("%f",&a[i]);
		fprintf(t,"%f\n",a[i]);
	}
}
float doc(FILE *t,float a[]){
	float tong = 0;
	for(int i=1;i<=10;++i){
		fscanf(t,"%f\n",&a[i]);
		tong += a[i]*a[i];
	}
	return tong;
}
int main(){
	float a[100];
	FILE *t;
	t=fopen("T:\\input.txt","w");
	nhap(t,a);
	fclose(t);
	FILE *k = fopen("T:\\input.txt","r");
	float tt = doc(k,a);
	printf("\nTong binh phuong = %.2f\n",tt);
	
	FILE *g=fopen("T:\\input.txt","w");
	for(int i=1;i<=10;i++){
		fprintf(g,"%f\n",a[i]);
	}
	fprintf(g,"tong binh phuong %.2f ",tt);
	fclose(g);
	fclose(k);

}
