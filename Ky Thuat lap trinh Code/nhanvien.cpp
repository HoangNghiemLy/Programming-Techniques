
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define fio "nhanvien.txt"
#define fbin "nhanvien.dat"

typedef struct NV{
    char Ho[50], Ten[50];
    int tuoi;   // so luong
    double Luong;    // gia
} NhanVien;


void input(NhanVien nv[], int *n);
void output(NhanVien nv[], int n);

void writeBin(NhanVien nv[], int n);// Tao File
void readBin(NhanVien nv[], int *n);// Doc File


int main() {
    NhanVien nv[50];
    int n;

    int select;
    do {
        printf("\n Quan Ly Nhan Vien:\n-----------------\n");
        printf("1: input\n 2: read \n 3: exit\n");
        printf("Nhap vao 1 chuc nang: ");
        scanf("%d", &select);
        switch(select){
            case 1: {
                printf(" 1: INPUT\n");
                input(nv, &n);
                writeBin(nv,n);
                break;
            }
            case 2: {
                printf("2: Doc va Hien thi thong tin Nhan Vien \n");

                readBin(nv, &n);
                output(nv, n);
                break;
            }

            case 3: return 0;
            default : printf("Error select !"); break;
        }
    }
    while (select != 3);
    return 0;
}

void input(NhanVien nv[], int *n){
    int i;
    char s[50];
    printf("Nhap n");
    scanf("%d", n);

    for (i = 0; i < (*n); i++){
        printf("Nhap vao  Nha vien thu %d : ", i+1);
        printf("\n Nhap vao Ho Nhan Vien:");
        scanf("%s",&nv[i].Ho);
        printf("\n Nhap vao Ten Nhan Vien:");
        scanf("%s",&nv[i].Ten);
        printf("\n Nhap vao Tuoi Nhan Vien: ");
        scanf("%d", &nv[i].tuoi);
        printf("\n Nhap vao Luong Nhan Vien: ");
        scanf("%lf", &nv[i].Luong);

    }
}

void writeBin(NhanVien nv[], int n){
    FILE *f = fopen(fbin,"wb");;

    if(f==NULL)
        printf("Loi Mo File");
    else
        fwrite(nv,sizeof(NhanVien),n,f);

    fclose(f);
    printf("\n Nhap va Ghi File Binary Thanh Cong!n");
}



void output(NhanVien nv[], int n){
    int i;
    printf("%-10s %-10s %-10s %-10s\n", "Ho", "Ten", "Tuoi", "Luong");
    for (i = 0; i < n; i++)
        printf("%-10s %-10s %-10d %-10.2lf\n",
        nv[i].Ho, nv[i].Ten, nv[i].tuoi, nv[i].Luong);
}


void readBin(NhanVien nv[], int *n){
    FILE *f = fopen(fbin,"rb");
    fseek(f,0,SEEK_END); //Nhay ve cuoi file, di chuyen di 0 vi tri
    (*n) = (ftell(f)+1)/sizeof(NhanVien); //ftell(); tra ve vi tri hien tai cua con tro
    // SEEK_CUR: di chuyen bat dau tu vi tri hien tai cua con tro, chi dung trong fseek()
    fseek(f,0,SEEK_SET); //Nhay ve dau file, di chuyen di 0 vi tri
    fread(nv,sizeof(NhanVien),(*n),f);
    fclose(f);
}


