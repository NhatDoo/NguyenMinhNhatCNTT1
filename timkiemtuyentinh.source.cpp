//https://youtu.be/r6XD86awquI//
#include <iostream>
using namespace std;
#define max 100
int timkiemtuantu(int a[], int x)
{
	int i;
	for (i = 0; i < max ; i++) 
	{
		if (a[i] == x)
		{
			return 1;       
		}
	}
	return 0;     
}
int main()
{
	int a[]{ 1,2,3,4,5,6,7,8 };
	int x = 1;  
	if (timkiemtuantu(a, x))
	{
		cout << " ton tai " << x << " trong mang";
	}
	else
	{
		cout << " khong ton tai " << x << " trong mang";
	}
	return 0;
}
