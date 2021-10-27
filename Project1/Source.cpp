#include <iostream>

using namespace std;

int main() {
	cout << "Enter a number: ";
	int n = 0;
	cin >> n;

	int min = 100000000;
	for (int i = 1; i <= n; i++) {
		int temp = 0;
		cin >> temp;
		if (min > temp * i) {
			min = temp * i;
		}
	}
	cout << '\n' << min;

	system("pause");
	return 0;
}