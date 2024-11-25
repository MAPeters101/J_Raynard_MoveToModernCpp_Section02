#include <iostream>

using namespace std;

int func(int y) {			// y will be a copy of the callers's variable x
	cout << "address of y is " << &y << endl;
	return y;				// Copy y into the function's return value
}

void func2(int *y) {			// y will be a pointer to the callers's variable x
	cout << "address of y is " << y << endl;
	*y = 1;				
}


int main() {
	int x = 2;
	cout << "Address of x is " << &x << endl;
	int z = func(x);		// z will be a copy of func's return value
	cout << "address of z is " << &z << endl;
	cout << "After calling func(), z = " << z << endl;

	cout << endl << endl;

	x = 2;
	cout << "Address of x is " << &x << endl;
	func2(&x);		// x will now have the value 1
	cout << "After calling func2(), x = " << x << endl;


}