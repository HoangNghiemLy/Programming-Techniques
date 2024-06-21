 #include<stdio.h> 
 int main(){
 	printf("***SO SANH HAI SO NHAP TU BAN PHIM***");
	 int a,b;
	 printf("\nNhap hai so a va b = ");
	 scanf("%d%d",&a,&b);
	 if (a>b){
	 	printf("%d lon hon %d",a,b); 
	 } else if(a==b){
	 	printf("%d bang %d",a,b); 
	 } else {
	 	printf("%d nho hon %d ",a,b); 
	 } 
 } 
