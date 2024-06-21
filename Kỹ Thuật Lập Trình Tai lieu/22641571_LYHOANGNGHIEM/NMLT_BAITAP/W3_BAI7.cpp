#include<stdio.h>
int main()
{
	char kt;
	printf("Nhap mot ki tu bat ky; ");  scanf("%c",&kt);
	if(kt=='u' || kt=='U'|| kt=='o'|| kt=='O'|| kt=='a' ||kt=='A'|| kt=='e'||kt=='E' || kt=='I'|| kt=='i'){
		printf("day la nguyen am");
	}else{
		printf("phu am");
	}
}
