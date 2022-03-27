#include <iostream>
 
using namespace std;

int main() {
	int a, b;
	cout << "Input numbers" << endl;
	cin >> a >> b ;

	int max;
	if (a > b) {
		max = a;
	}
	
	cout << "max =" << max << endl;
	return 0;
}
