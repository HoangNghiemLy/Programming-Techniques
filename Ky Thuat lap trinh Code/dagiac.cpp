#include <stdio.h>
#include <math.h>

struct Point
{
	int x;
	int y;
};

float D (Point A , Point B)
{
	return sqrt (pow(A.x - B.x, 2)+pow(A.y - B.y, 2));	
}

float Stg (Point A , Point B , Point C)
{
	float a = D(B,C) , b = D(A,C), c =  D(A,B);
	float p = (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c)); 
}

float Sdg (Point A[], int n)
{
	float S = 0;
	for (int i = 1 ; i<n-1 ; i++)
		S += Stg (A[0], A[i], A[i+1]);
	return S;	
}

void Input (Point A[], int &n)
{
	printf ("n = ");
	scanf ("%d", &n);
	for (int i = 0 ; i < n ; i++ )
	{	printf ("Point %d :\n",i);
		printf ("\tA[%d].x = ",i); scanf ("%d",&A[i].x);
		printf ("\tA[%d].y = ",i); scanf ("%d",&A[i].y);
	}
}

int main()
{
	Point A[100]; int n;
	Input (A,n);
	printf ("S = %.2f\n",Sdg(A,n));
	return 0;
}
