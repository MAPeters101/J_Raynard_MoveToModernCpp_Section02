#include <iostream>

using namespace std;

int func(int y) {			// y will be a copy of the callers's variable x
	cout << "address of y is " << &y << endl;
	return y				// Copy y into the function's return value
}

int main() {

}