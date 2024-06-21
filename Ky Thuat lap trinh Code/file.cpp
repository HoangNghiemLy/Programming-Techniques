#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void nhapfile(FILE *t,float a[]){
	for(int i=1;i<=10;i++){
		printf("So %d: ",i);
		scanf("%f",&a[i]);
		fprintf(t,"%f\n",a[i]);
	}
}
float docfile(FILE *t, float a[]){
	float tong=0;
	for(int i=1;i<=10;i++){
		fscanf(t,"%f\n",&a[i]);
		tong += a[i]*a[i];
	}
	return tong;
}
int main(){
	FILE *t;
	float a[100];
	t=fopen("E:\\tongbinhphuong.txt","w");
	nhapfile(t,a);
	fclose(t);
	FILE *k=fopen("E:\\tongbinhphuong.txt","r");
	float tt=docfile(k,a);
	printf("\nTong binh phuong=%.2f ",tt);
	FILE *g=fopen("E:\\tongbinhphuong.txt","w");
	for (int i=1;i<=10;i++){
		fprintf(g,"%f\n",a[i]);
	}
	fprintf(g,"Tong binh phuong:%.2f ",tt);
	fclose(g);
	fclose(k);
}
