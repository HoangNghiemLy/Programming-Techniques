#include<stdio.h>
#include<stdlib.h>
void nhapMang(int a[], int n){
	for (int i = 0;i<n;i++){
		a[i] = rand() % 100;
	}
}
void xuatMang(int A[],int n){
	
	for (int i =0;i<n;i++){
		printf(" %d ",A[i]);
	}
	printf("\n");
}
void InterChangeSort(int a[],int n){
	int x,tam;
	for (int i = 0;i<n-1;i++){
		for(int j =i+1;j<n;j++){
			if(a[i]>a[j]){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
void SelectionSort(int a[],int n){
	for(int i = 0;i<n-1;i++){
		int minIndex = i;
		for(int j =i+1;j<n;j++){
			if(a[j]<a[minIndex]){
				minIndex=j;
			}
		}
		int temp = a[i];
		a[i]=a[minIndex];
		a[minIndex] =temp;
	}
}
void InsertionSort(int a[],int n){
	for (int i =1;i<n;i++){
		int key = a[i];
		int j = i -1;
		while(j>=0 && a[j] > key){
			a[j+1] = a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}
void bubbleSort(int a[],int n){
	int temp;
	for(int i =0;i<n;i++){
		for (int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
int findPivot(int a[],int L,int R){
	return a[R];
}
int partition(int a[],int low, int high){
	int pivot = a[high];
	int i = low - 1;
	for ( int j = low;j<=high -1;j++){
		if (a[j]<= pivot){
			i++;
			int temp = a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	int temp = a[i+1];
	a[i+1]=a[high];
	a[high]=temp;
	return i+1;
}
void quickSort(int a[],int low,int high){
	if(low < high){
		int pi = partition(a,low,high);
	
		quickSort(a,low,pi-1);
		quickSort(a,pi+1,high);
	}
}
void menu(){
	int choice ,n;
	printf("Nhap kich thuoc mang: ");
	scanf("%d",&n);
	int a[n];
	do{
		printf("\nMenu\n");
		printf("1. Nhap mang ngau nhien \n");
        printf("2. Xuat mang\n");
        printf("3. Interchange Sort\n");
        printf("4. Selection Sort\n");
        printf("5. Insertion Sort\n");
        printf("6. Bubble Sort\n");
        printf("7. Quick Sort\n");
        printf("8. Thoat\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice){
        	case 1:
        		
        		nhapMang(a,n);
        		break;
        	case 2:
        		printf("Mang sau khi nhap la: ");
        		xuatMang(a,n);
        		break;
        	case 3:
        		InterChangeSort(a,n);
        		printf("Mang sau khi sap xep Interchange Sort: ");
        		xuatMang(a,n);
        		break;
        	case 4: 
        		SelectionSort(a,n);
        		printf("Mang sau khi sap xep Selection Sort: ");
        		xuatMang(a,n);
        		break;
        	case 5:
        		InsertionSort(a,n);
        		printf("Mang sau khi sap xep Insertion Sort: ");
        		xuatMang(a,n);
        		break;
        	case 6:
        		bubbleSort(a,n);
        		printf("Mang sau khi sap xep Bubble Sort: ");
        		xuatMang(a,n);
        		break;
        	case 7:
        		quickSort(a,0,n-1);
        		printf("Mang sau khi sap xep Quick Sort: ");
        		xuatMang(a,n);
        		break;
        	case 8:
        		printf("GoodBye!!!");
        		break;
        	default:
        		printf("\nLua chon khong hop le. Vui long nhap lai..\n");
		}
	}while(choice != 8);
}
int main(){
	menu();
	return 0;
}