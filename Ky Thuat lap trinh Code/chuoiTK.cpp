#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
char s[1000];
menu(){
	printf("\n---CHUONG TRINH CHUOI KI TU---\n");
	printf("\n1. Nhap xuat chuoi ki tu ");
	printf("\n2. Viet hoa chuoi ki tu ");
	printf("\n3. Viet thuong chuoi ki tu ");
	printf("\n4. Viet hoa chu cai dau tien trong chuoi ");
	printf("\n5. Xoa khoang trang thua ");
	printf("\n6. Xoa tat ca cac khoang trang ");
	printf("\n7. Tu dai nhat trong chuoi ");
}
void InOutStr(char s[]);
void Upper(char s[]);
void Lower(char s[]);
void proper(char s[]);
void Standard(char s[]);
void DelSpace(char s[]);
void Maxword(char s[]);
int main(){
	int chon;
	char s[1000];
	menu();
	do{
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: InOutStr(s);  break;
			case 2: Upper(s);     break;
			case 3: Lower(s);     break;
			case 4: proper(s);    break;
			case 5: Standard(s);  break;
			case 6: DelSpace(s);  break;
			case 7: Maxword(s);   break;
		}
	}while (chon!=0);

}
void InOutStr(char s[]){
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
	printf("Chuoi sau khi viet hoa: ");
	for(int i=0;i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
	puts(s);
}
void proper(char s[]){
	int len;
	printf("Chuoi ki tu dau chuyen sang in hoa: ");
	s[0]=toupper(s[0]);
	len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]==' '){
			s[i+1]=toupper(s[i+1]);
		}else{
			s[i+1]=tolower(s[i+1]);
		}
	}puts(s);
}
void Standard (char s[]){
	int i=0,j=strlen(s);
	while(s[i]==' ')  i++;
	while(s[j-1]==' ')  j--;
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
void DelSpace(char s[]){
	int i,j;
	s[j]='\0';
	for(i=0,j=0;i<strlen(s);i++){
		if(s[i]==' ')  continue;
		s[j]=s[i];
		j++;
	}
	s[j]='\0';
	printf("Chuoi sau khi xoa tat ca khoang trang: ");
	puts(s);
}
void Maxword(char s[]){
	int i,l=0,imax=0,lmax=0;
	for(i=0;i<strlen(s);i++){
		//i = 11
		if(s[i+1]==' ' || s[i+1] == '\0')
		{
			if(l>lmax)
			{
				lmax=i+1;//6
				imax=i+1-l;//0
			}
			l=0;
		}
		else l++;//6
	}
	printf("Tu dai nhat la: ");
	for(i=imax;i<lmax;i++) printf("%c",s[i]);
	printf("\nCo %d ky tu",lmax-imax);
}