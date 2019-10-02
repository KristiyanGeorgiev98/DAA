#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int tapes[100000];
	long int m;
	int n, k, i;
	cin >> n >> m >> k;
	for (i = 0; i < n; i++)
	{
		cin>>tapes[i];
	}
	int blocks[100000];
	for (i = 0; i < n-1; i++)
	{
		blocks[i] = tapes[i + 1] - tapes[i];
	}
	sort(blocks, blocks + n-1);
	int finalRes = n;
	for (i = n; i > k; i--)
	{
		finalRes = finalRes + blocks[n-i] -1;
	}
	
	cout << finalRes<<endl;
}