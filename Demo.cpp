#include<iostream>
using namespace std;

bool isSNT(int n) {
	int uoc = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			uoc++;
	}
	if (uoc == 2)
		return true;
	else
		return false;
}


int main() {
	int choice;
	do {
		cout << "1. Co phai SNT? \n"
			<< "2. Co phai nam nhuan? \n"
			<< "0. Thoat \n";
		cout << "Ban chon: ";
		cin >> choice;

		switch (choice) {
		case 1:
			int n;
			cout << "Nhap 1 so nguyen duong: ";
			cin >> n;
			if (isSNT(n))
				cout << "Day la SNT\n";
			else
				cout << "Day ko phai la SNT\n";
			break;
		default:
			break;
		}
	} while (choice != 0);
	system("pause");
	return 0;
}