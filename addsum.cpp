#include <algorithm>
#inclued <iostream>
using namespace std;

int main()    {
	int n;
	cout << "Enter num 1 : ";
	cin >> n;
	cout << "Enter num 2 : ";
	int m;
	cin >> m;
	int res {0};
	res = n+m;
	cout << "Sum of " << n << " + " << m << " = " << res;
	return 0;
}
	