#include <iostream>

using namespace std;

int main() 
{
	int n, i;
	cout << "Masukkan bilangan: ";
	cin >> n;
	
	if (n >= 2) 
	{
		for (i = 2; i < n; ++i)
			if (n % i == 0)
				break;

		if (i == n)
			cout << n << "  is prime number" << endl;
		else
			cout << n << "  is not prime number" << endl;
	}
	
	return 0;
}
