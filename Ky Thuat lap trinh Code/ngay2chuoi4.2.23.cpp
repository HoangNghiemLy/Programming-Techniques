#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
void Input(char s[]);
void Upper(char s[]);
void lower(char s[]);
void proper(char s[]);
void thuongDT(char s[]);
void DelSpace(char s[]);
void Standard(char s[]);
void menu(){
	printf("\n---CHUONG TRINH CHUOI KI TU---\n");
	printf("\n1. Nhap xuat chuoi ki tu ");
	printf("\n2. Viet in hoa chuoi ki tu ");
	printf("\n3. Viet thuong chuoi ki tu ");
	printf("\n4. Doi ki tu dau tien sang chu hoa ");
	printf("\n5. Doi ki tu dau tien sang chu thuong ");
	printf("\n6. Xoa tat ca khoang trang trong chuoi ");
	printf("\n7. Xoa khoang trang thua ");
}
int main(){
	int chon;
	char s[1000];
	menu();
	do{
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: Input(s);    break;
			case 2: Upper(s);    break;
			case 3: lower(s);    break;
			case 4: proper(s);   break;
			case 5: thuongDT(s); break;
			case 6: DelSpace(s); break;
			case 7: Standard(s); break;
		}
	}while(chon!=0);
	
	
	
}
void Input(char s[]){
	fflush(stdin);
	printf("Nhap chuoi: ");
	gets(s);
	printf("Chuoi vua nhap la: ");
	puts(s);
}
void Upper(char s[]){
	int i;
	printf("Chu sau khi viet hoa: ");
	for(i=0;i<strlen(s);i++){
		s[i]=toupper(s[i]);
	}
	puts(s);
}
void lower(char s[]){
	printf("Chuoi sau khi viet thuong: ");
	for(int i=0;i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
	puts(s);
}
void proper(char s[]){
	int len;
	printf("Chuoi sau khi viet hoa chu cai dau: ");
	s[0]=toupper(s[0]);
	len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]==' '){
			s[i+1]=toupper(s[i+1]);
		}
		else{
			s[i+1]=tolower(s[i+1]);
		}
	}
	puts(s);
}
void thuongDT(char s[]){
	int len;
	printf("Chuoi sau khi viet thuong chu cai dau: ");
	s[0]=tolower(s[0]);
	for(int i=0;i<len;i++){
		if(s[i]==' '){
			s[i+1]=tolower(s[i+1]);
		}
		else{
			s[i+1]=toupper(s[i+1]);
		}
	}
	puts(s);
}
void DelSpace(char s[]){
	int j, i;
	for(i=0,j=0;i<strlen(s);i++){
		if(s[i]==' ')  continue;
		s[j]=s[i];
		j++;
	}
	s[j]='\0';
	printf("Chuoi sau khi xoa tat ca khoang trang: ");
	puts(s);
	
}
void Standard(char s[]){
	int i=0,j=strlen(s);
	while(s[i]==' ')  i++;
	while(s[j-1]==' ') j--;
	s[j]='\0';
	for(j=0;i<strlen(s);i++){
		if((s[i]==' ')&&(s[i+1]==' '))  continue;
		s[j]=s[i];
		j++;
	}
	s[j]='\0';
	printf("Chuoi sau khi xoa khoang trang thua: ");
	puts(s);
}