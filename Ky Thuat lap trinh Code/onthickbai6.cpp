#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,dem=0;
	printf("Nhap so luong phan tu mang : ");
	scanf("%d",&n);
	int a = (int)malloc(n*sizeof(int));
	for(int i=0;i<n;i++) scanf("%d",a+i);
	for(int i=0;i<n;i++) if(a[i]%2==0) ++dem;
	realloc(a,(n+dem)*sizeof(int));
	for(int i=0;i<n-1;i++){
		if(a[i+1]%2==0){
			for(int j = n;j>i+1;j--){
				a[j] = a[j-1];
			}
			++n;
			a[i+1] = 0;
			++i;
		}
	}
	printf("Phan tu sau khi xu ly: ");
	for(int i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
	free(a);
}