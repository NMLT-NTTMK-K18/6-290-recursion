#include <iostream>
#include <iomanip>
using namespace std;

void XuatBo2(float, float);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap cac phan tu cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	cout << "Cac bo 2 so co so dau <= so sau: " << endl;
	LietKe(a, n);
	return 0;
}

void XuatBo2(float x, float y)
{
	cout << setw(10) << setprecision(3);
	cout << "(" << x << "," << y << ")" << endl;
}

void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] <= a[n - 1])
			XuatBo2(a[i], a[n - 1]);
		if (a[n - 1] <= a[i])
			XuatBo2(a[n - 1], a[i]);
	}
	LietKe(a, n - 1);
}