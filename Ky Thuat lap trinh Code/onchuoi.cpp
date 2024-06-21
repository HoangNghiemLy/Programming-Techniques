#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
void InOutStr(char s[]);
void upper(char s[]);
void lower(char s[]);
void proper(char s[]);
void Standard(char s[]);
void DelSpace(char s[]);
void MaxWord(char s[]);
void DaoNguocStr(char s[],char s1[]);
menu(){
	printf("\n---CHUONG TRINH CHUOI KI TU---\n");
	printf("\n1. Nhap xuat chuoi ");
	printf("\n2. Chuoi viet hoa ");
	printf("\n3. Chuoi viet thuong ");
	printf("\n4. Chuoi viet hoa chu cai dau ");
	printf("\n5. Chuoi xoa khoang trang thua ");
	printf("\n6. Xoa tat ca cac khoang trang ");
	printf("\n7. Tu dai nhat trong chuoi ");
	printf("\n8. Chuoi dao nguoc ");
	
}
int main(){
	int chon,n;
	char s[1000];
	char s1[80];
	menu();
	do{
		printf("\nChon chuc nang, chon 0 de thoat: ");
		scanf("%d",&chon);
		switch(chon){
			case 1: InOutStr(s); break;
			case 2: upper(s);    break;
			case 3: lower(s);    break;
			case 4: proper(s);   break;
			case 5: Standard(s); break;
			case 6: DelSpace(s); break;
			case 7: MaxWord(s); break;
			case 8: DaoNguocStr(s,s1); break;
		}
	}while(chon !=0);
	
	
	
	
	
}
void InOutStr(char s[]){
	fflush(stdin);
	printf("Nhap chuoi: ");
	gets(s);
	printf("Chuoi vua nhap la: ");
	puts(s);
}
void upper(char s[]){
	printf("Chuoi viet hoa: ");
	for(int i=0;i<strlen(s);i++){
		s[i]=toupper(s[i]);
	}
	puts(s);
}
void lower(char s[]){
	printf("Chuoi viet thuong: ");
	for(int i=0;i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
	puts(s);
}
void proper(char s[]){
	int i,len;
	len=strlen(s);
	s[0]=toupper(s[0]);
	printf("Chuoi viet hoa chu cai dau: ");
	for(i=0;i<len;i++){
		if(s[i]==' '){
			s[i+1]=toupper(s[i+1]);
		}else{
			s[i+1]=tolower(s[i+1]);
		}
	}
	puts(s);
}
void Standard(char s[]){
	int i=0,j=strlen(s);
	while(s[i]==' ') i++;
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
void DelSpace(char s[]){
	int i,j;
	for(i=0, j=0;i<strlen(s);i++){
		if(s[i]==' ')   continue;
		s[j]=s[i];
		j++;
	}
	s[j]='\0';
	printf("Chuoi sau khi xoa tat ca khoang trang: ");
	puts(s);
}
void MaxWord (char s[]){
	int i,imax=0,l=0,lmax=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]==' '){
			if(l>lmax)  {lmax=l;imax=i-lmax; l=0;
			} 
		}else l++;
	}
	printf("Tu dai nhat la: ");
	for(i=imax;i<imax+lmax;i++){
		printf("%c",s[i]);
	}
	printf("\nCo chieu dai la %d ki tu",lmax);
}
void DaoNguocStr(char s[],char s1[]){
	int length=0;
	int i=0;
	while(s[length]!='\0'){
		length++;
	}
	printf("\nChuoi ban dau: ");
	printf("%s",s);
	printf("\nChuoi theo chieu dao nguoc: ");
	for(i=--length;i>=0;i--){
		printf("%c",s[i]);
	}
	i=0;
	printf("\nLuu giu chuoi nay trong chuoi dao nguoc: ");
	while(length>=0){
		s1[length]=s[i];
		length--;
		i++;
	}
	s[i]='\0';
	printf("%s\n",s1);
}



