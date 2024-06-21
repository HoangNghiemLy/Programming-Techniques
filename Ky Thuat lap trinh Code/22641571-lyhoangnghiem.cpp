#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void InOutStr(char s[]);
void upper (char s[]);
void lower (char s[]);
void proper (char s[]);
void standard (char s[]);
void delSpace (char s[]);
void MaxWord (char s[]);
void Printnk (char s[],int n,int k);
void Menu(){
	printf("Chuong trinh thao tac du lieu chuoi");
	printf("\n1.Nhap xuat chuoi ki tu");
	printf("\n2.Doi chuoi ky tu dau sang chu in hoa");
	printf("\n3.Doi chuoi ky tu sang chu in thuong");
	printf("\n4.Xoa khoang trang dau chuoi, cuoi chuoi va giua 2 tu trong S chi con 1 khoang trang");
	printf("\n5.Xoa tat ca cac khoang trang S");
	printf("\n6.Dem xem chuoi co bao nhieu tu");
	printf("\n7.Tim tu dai nhat trong chuoi");
	printf("\n8.Trich n ky tu dau tien/cuoi cung/bat dau tai vi tri pos trong chuoi");	
}
char s[100];

int main(){
	int chon,n,k;
	InOutStr(s);
//	lower(s);
//	upper(s);
//	proper(s);
//	//standard(s);
//	delSpace(s);
	MaxWord(s);
	
}
void InOutStr(char s[]){
    fflush(stdin);
	printf("Nhap chuoi: ");
	gets(s);
	printf("Chuoi ki tu vua nhap: ");
	puts(s);
}
void upper (char s[]){
	printf("Chuoi ki tu chuyen sang in hoa: ");
	for (int i=0;i<strlen(s);i++){
		s[i]=toupper (s[i]);
	}
	puts(s);
}
void lower (char s[]){
	printf("Chuoi ki tu chuyen sang in thuong: ");
	for(int i=0;i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
	puts(s);
}
void proper(char s[]){
	int i,len;
	printf("Chuoi ki tu dau moi chuyen sang in hoa: ");
	s[0]=toupper(s[0]);
	len=strlen(s);
	for (i=0;i<len;i++){
		if(s[i]==' '){
			s[i+1]=toupper(s[i+1]);
		}else{
			s[i+1]=tolower(s[i+1]);
		}
	}
puts(s);
}
void standard(char s[]){
	int i=0, j=strlen(s);
	while(s[i]==' ') i++;
	while(s[j-1]==' ') j--;
	s[j]='\0';
	for(j=0;i<strlen(s);i++){
		if((s[i]==' ')&&(s[i+1]==' ')){
			s[i]=s[j];
			j++;
		}
	}
	s[j]='\0';
	printf("Chuoi sau khi xoa khoang trang thua: ");
	puts(s);
}
void MaxWord(char s[]){
	char a[100][100];
	int n=0;
	char *t = strtok (s, ",");
	while(t!=NULL){
		strcpy(a[n],t);
		++n;
		t=strtok(NULL, ",");
	}
	printf("So tu trong chuoi la: %d\n",n);
	for(int i=0;i<n;++i){
		printf("%s\n",a[i]);
	}
}







void delSpace (char s[]){
	int n=strlen(s);
	for(int i=0;i<n;i++){
		if(s[i]==' '){
			for(int j=i;j<n;j++){
				s[j]=s[j+1];
			}
			--n;
			--i;
		}
	}
	printf("Chuoi ki tu sau khi xoa tat ca cac khoang trang: %s",s);
}
