https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chon-truc-tiep-selection-sort
#include <iostream>

using namespace std;
void Selection_Sort(int a[], int n) {
	int min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		swap(a[min], a[i]);
	}
}
void swap(int &a ,int &b)
{
	int x = a;
	a = b;
	b = x;
}
void main()
{
	int a[5] = { 8, 4, 1, 6, 5 };
	Selection_Sort(a, 5);
	cout << "Mang sau khi sap xep:" << endl;
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	system("pause");
}
