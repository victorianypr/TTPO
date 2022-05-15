#include<iostream>
#include<cmath>
#include<cassert>
using namespace std;
void sumdiag() {
	int n, k;
	cout << "vvedite razmer: ";
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < n; i++) {
			a[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; i < n; i++) {
			k += a[i][j];
		}
	}
	cout << "summ el-tov: " << k;
}

int main() {
	sumdiag();
	return 0;
}