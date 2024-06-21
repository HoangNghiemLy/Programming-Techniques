#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
void Input (char s[]);
void Upper(char s[]);
void Lower(char s[]);
void proper(char s[]);
void xuong(char s[]);
int main(){
	char s[1000];
	Input(s);
	Upper(s);
	Lower(s);
	proper(s);
	xuong(s);
}
void Input(char s[]){
	fflush(stdin);
	printf("Nhap chuoi: ");
	gets(s);
	printf("Chuoi vua nhap la: ");
	puts(s);
	
}
void Upper(char s[]){
	printf("Chuoi sau khi viet hoa: ");
	for(int i=0;i<strlen(s);i++){
		s[i]=toupper(s[i]);
	}
	puts(s);
}
void Lower(char s[]){
	printf("Chuoi sau khi viet thuong: ");
	for(int i=0;i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
	puts(s);
}
void proper(char s[]){
	int i,len;
	printf("Chuoi sau khi viet hoa chu cai dau: ");
	s[0]=toupper(s[0]);
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]==' ')
			s[i+1]=toupper(s[i+1]);
		
		else
			s[i+1]=tolower(s[i+1]);
		
	}
puts(s);
}
void xuong(char s[]){
	int i,len;
	printf("Chuoi sau khi viet thuong chu cai dau: ");
	s[0]=tolower(s[0]);
	for(i=0;i<len;i++){
		if(s[i]==' ')
		   s[i+1]=tolower(s[i+1]);
		else 
		    s[i+1]=toupper(s[i+1]);
	}
	puts(s);
}