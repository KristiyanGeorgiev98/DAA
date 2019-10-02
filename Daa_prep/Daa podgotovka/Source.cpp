#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

bool compareInterval(char i1, char i2)
{
	if (i1 >= 'a'&& i1 <= 'z' && i2 >= 'A'&& i2 <= 'Z')
	{
		return (i1 > i2);
		
	}
	else return (i1 < i2);
}
int main()
{
	string input;
	cin >> input;
	long n = input.length();
	sort(input.begin(), input.end(),compareInterval);
	cout << input<<endl;
	system("pause");
}