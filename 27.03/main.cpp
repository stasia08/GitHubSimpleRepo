#include <iostream>
 
using namespace std;

int main() {
	int a, b, c, d;
	cout << "Input numbers" << endl;
	cin >> a >> b >> c >> d;

	int max;
	if (a > b && a > c && a > d) {
		max = a;
	}
	
	 if (b > c && b > d) {
		max = b;

	}
	 else if (c > d) {
		 max = c;
	 }
	cout << "max =" << max << endl;
	return 0;
}