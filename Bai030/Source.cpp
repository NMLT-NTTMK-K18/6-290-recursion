#include <iostream>
using namespace std;

int TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "An = " << TinhAn(n);
	return 0;
}

int TinhAn(int n)
{
	if (n == 1)
		return -2;
	return 5 * TinhAn(n - 1) + 12;
}