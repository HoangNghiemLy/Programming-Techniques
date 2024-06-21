#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#define MAX 100

// cau a:
struct SINHVIEN{
	char Hoten[20];
	char MaSV[9];
	float TK,GK,CK,TH,DTB;
};

// cau b : nhap 1
void Nhap1(SINHVIEN &sv)
{
	printf("\nHo ten sinh vien la : ");
	fflush(stdin);
	gets(sv.Hoten);
	printf("Ma sinh vien la : ");
	scanf("%s",&sv.MaSV);
	printf("Diem thuong ky la : ");
	scanf("%f", &sv.TK);
	printf("Diem giua ky la : ");
	scanf("%f", &sv.GK);
	printf("Diem cuoi ky la : ");
	scanf("%f", &sv.CK);
	printf("Diem thuc hanh la : ");
	scanf("%f", &sv.TH);
	// cau c
	sv.DTB = ((2 * sv.TK + 3 * sv.GK + 5 * sv.CK) / 10.0f * 2 + sv.TH) / 3.0f;
	printf("Diem trung binh la : %.2f\n", sv.DTB);
}

// cau nhap nhieu sinh vien
void NhapDS(SINHVIEN A[],int &n)
{
	printf("\nNhap so luong sinh vien : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nNhap sinh vien thu %d : ",i+1);
		Nhap1(A[i]);
	}
	
}

void Xuat1(SINHVIEN sv)
{
	printf("%-30s | %-8s |  %4.1f  | %4.1f  | %4.1f  | %4.1f  |  %5.2f |",
		sv.Hoten,sv.MaSV,sv.TK,sv.GK,sv.CK,sv.TH,sv.DTB);

}

void Xuat2( SINHVIEN sv)
{ 
	printf("\n Ma sinh vien: %s", sv.MaSV);
    printf ("\n Ho ten : "); puts (sv.Hoten);
	printf(" Diem thuong ky: %.1f", sv.TK);
	printf("\n Diem giua ky: %.1f", sv.GK);
	printf("\n Diem cuoi ky: %.1f", sv.CK);
	printf("\n Diem thuc hanh: %.1f", sv.TH);
	printf("\n Diem trung binh: %.2f\n", sv.DTB);
}

void XuatDS(SINHVIEN A[], int n)
{
	printf("\n---DANH SACH SINH VIEN---\n");
	printf("\n| STT |            Ho ten             |   MaSV   |   TK   |   GK  |   CK  |   TH  |   DTB  |");
	
	for(int i=0; i<n; i++)
	{
		printf ("\n| %3d |",i+1);
		Xuat1(A[i]);
	}
}

void XuatDS4(SINHVIEN A[],int n)
{
	int d=0;
	printf("\n---DANH SACH SINH VIEN CO DTB <4 ---\n");
	printf("\n| STT |            Ho ten             |   MaSV   |  TK |  GK |  CK |  TH |  DTB  |");
	
	for(int i=0; i<n; i++)
		if(A[i].DTB<4.0)
		{	d++;
			printf ("\n| %3d |",d);
			Xuat1(A[i]);
		}	
}

int Search(SINHVIEN A[],int n,char M[])
{	int i=0;
	while(i<n && strcmp(A[i].MaSV,M)) i++;
	if(i<n)	return i;
	return -1;
}

void Sort(SINHVIEN A[],int n)
{
	int i,j; 
	SINHVIEN t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(A[i].DTB<A[j].DTB)
		{
			t=A[i];
			A[i]=A[j];
			A[j]=t;
		}
	}
}

void Menu ()
{
	printf ("\nChuong trinh quan ly sinh vien");
	printf("\n1. Nhap danh sach sinh vien ");
	printf("\n2. Xuat danh sach sinh vien co DTB <4 ");
	printf("\n3. Tim thong tin sinh vien theo masv ");
	printf("\n4. Sap xep DSSV giam dan theo DTB ");
	
		
}
int main()
{
	int n, k, chon;
	char M[9];
	SINHVIEN A[MAX];
	do
	{	Menu();
		printf("\nChon chuc nang, chon 0 de thoat : ");
		scanf ("%d", &chon);
		switch (chon)
		{
			case 1 : NhapDS (A,n); XuatDS (A,n); 
			break;
			case 2 : XuatDS4 (A,n); break;
			
			case 3 : printf ("Nhap MaSV can tim : "); 
					 fflush(stdin); gets(M);
					 k=Search(A,n,M); 
					 if (k != -1) Xuat2 (A[k]);
					 else printf ("Khong co "); break;
			case 4 : Sort (A,n); XuatDS (A,n); break;		 
		}
	}while (chon !=0);
}
