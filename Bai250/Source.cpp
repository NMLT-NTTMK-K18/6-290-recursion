#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
float TongDong(float[][100], int, int, int);
float TongLonNhat(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	Nhap(a, m, n);
	cout << TongLonNhat(a, m, n);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

float TongDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	return TongDong(a, m, n - 1, d) + a[d][n - 1];
}

float TongLonNhat(float a[][100], int m, int n)
{
	if (m == 1)
		return TongDong(a, m, n, 0);
	float lc = TongLonNhat(a, m - 1, n);
	if (TongDong(a, m, n, m - 1) > lc)
		lc = TongDong(a, m, n, m - 1);
	return lc;
}