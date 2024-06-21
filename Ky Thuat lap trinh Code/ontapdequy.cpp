#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float Tong(int n){
    int sum=1;
    return sum+=(float)pow((n*(n+1)/2),2);
}

int main() {
    int n;
    do{
        printf("Nhap n: ");
        scanf("%d",&n);
    }while(n<0||n>1000);
    printf("Tong: %d ",Tong(n));

    
}
