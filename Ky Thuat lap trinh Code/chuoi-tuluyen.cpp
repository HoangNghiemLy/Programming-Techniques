#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void InoutStr(char s[]);
void upper(char s[]); 
void lower(char s[]);
void proper(char s[]);
void lower(char s[])
char s[100]; 
int main(){
	InoutStr(s);
	upper(s);
	lower(s);
	proper(s);
	lower(s);
	 
} 
 
void InoutStr(char s[]){
	fflush(stdin); 
	printf("Nhap chuoi ban muon nhap: ");
	gets(s); 
	printf("Chuoi vua  nhap la: ");
	puts(s); 
} 
void upper(char s[]){
	int n=strlen(s);
	printf("Chuoi ki tu chuyen sang in hoa: ");
	for(int i=0;i<n;i++){
		s[i]=toupper(s[i]);
	}
	puts(s);
}
void lower(char s[]){
	int n=strlen(s);
	printf("Chuoi ki tu chuyen sang in thuong: ");
	for(int i=0;i<n;i++){
		s[i]=tolower(s[i]);
	}
	puts(s);
}
void proper(char s[]){
	int n=strlen(s);
	printf("Chuoi viet hoa chu cai dau: ");
	s[0]=toupper(s[0]);
	for(int i=0;i<n;i++){
		if(s[i]==' '){
			s[i+1]=toupper(s[i+1]);
		}else {
			s[i+1]=tolower(s[i+1]);
		}
	}
	puts(s);
}


