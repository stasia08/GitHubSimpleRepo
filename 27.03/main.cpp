#include <iostream>
 
using namespace std;

int main() {
	int a, b, c;
	cout << "Input numbers" << endl;
	cin >> a >> b >> c;

	int max;
	if (a > b && a > c) {
		max = a;
	}
	else if (b > c) {
		max = b;

	}
	cout << "max =" << max << endl;
	return 0;
}