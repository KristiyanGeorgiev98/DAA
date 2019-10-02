#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int myXOR(int x, int y)
{
	
		return (x | y) & (~x | ~y);
	
}
int main()
{
	int Q;
	set<int>numbers;
	cin >> Q;
	int firstNum;
	int secondNum;
	set<int>::iterator it;
	int diff = 0;
	int finalni[100000];
	numbers.insert(0);
	for (int i = 1; i <= Q; ++i)
	{

		cin >> firstNum;
		numbers.insert(firstNum);
		if (numbers.upper_bound(firstNum) != numbers.end())
		{
			secondNum = *numbers.upper_bound(firstNum);

		}
		else {
			secondNum = *numbers.lower_bound(firstNum);
		}
		if (diff < myXOR(firstNum, secondNum))
		{

		}
		else diff= myXOR(firstNum, secondNum);
		finalni[i] = diff;
	}
	for (size_t i = 1; i <= Q; i++)
	{
		cout << finalni[i] << endl;
	}
	/*numbers.insert(7);
	cout << *numbers.lower_bound(0)<<endl;
	cout << myXOR(7, *numbers.lower_bound(0));
	*/
	system("pause");
}