/*VIET CHUONG TRINH THUC HIEN GHI VAO FILE DATA.INP MOT SO NGUYEN NHAP TU BAN PHIM, SAU DO DOC SO NGUYEN VUA NHAP TRONG FILE DATA.INP VA IN LEN MAN HINH*/

#include <stdio.h>
#include <conio.h>

int main()
{ int n,docfile;
 //Ghi vao file DATA.INP mot so nguyen nhap tu ban phim
    FILE *f;                    //De lam viec voi file,can khai báo bien con tro FILE (phai viet hoa)          
    f=fopen("DATA.INP","wt");      //Mo file bang lenh fopen(), trong do tham so “wt” cho phep ghi file
    printf("Nhap n: ");
    scanf("%d",&n);
    fprintf(f,"%d",n);             //fprintf() ghi vào file, ban hinh dung thay vi hien tren man hinh bang printf() thi hien len file bang fprintf()
    fclose(f);                     //fclode() de dong file
    printf("Ghi vao file thanh cong, mo file de xem ket qua !!! \n \n");
 //Doc file DATA.INP va in ket qua ra man hinh
    f=fopen("DATA.INP","rt");      //Mo file bang lenh fopen(), trong do tham so “rt” cho phep doc file
    fscanf(f,"%d",&docfile);             //fscanf() doc file, thay vi nhap noi dung tu ban phim voi scanf() thi doc tu file bang fscanf() va gan gia tri doc vao bien docfile bang dau &
    fclose(f);                     
    printf("Ket qua doc file: ");
          printf("%3d",docfile);
getch();
} 
