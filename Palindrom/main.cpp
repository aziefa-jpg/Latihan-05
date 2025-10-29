#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str) 
{
	string reversedStr = str;
	reverse(reversedStr.begin(), reversedStr.end());
	return str == reversedStr;
}

int main() 
{
	string str;
	cout << "Masukkan sebuah kata: ";
	getline(cin, str);
	
	if (isPalindrome(str)) 
	{
		cout << "\"" << str << "\" is palindrome." << endl;
	} 
	else 
	{
		cout << "\"" << str << "\" is not palindrome." << endl;
	}
	
	return 0;
}