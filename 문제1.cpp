#include <iostream>

using namespace std;

int avg = 0;
int hap = 0;
int arr[5];

int main() {
	int i = 0;
	for (i;i < 5;i++) {
		cin >> arr[i];
		hap += arr[i];
		avg = hap / 5;
	}
	cout << "합 : " << hap << endl;
	cout << "평균 : " << avg;
	return 0;
}