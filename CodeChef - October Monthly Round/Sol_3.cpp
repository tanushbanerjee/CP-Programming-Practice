#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> perms(vector<int> a, int n)
{
	vector<int> test;
	
	vector<vector<int>> result;
	int j = n -1;
	while(j--)
	{
		vector<int> b;
		for(int i = 0; i < n; ++i)
		{
			b[i] = a[j];
		}
		result.push_back(b);

	}
	int m, p = 0;
	
	while(p < n)
	{
		for(int i = p; i < n; ++i)
		{
			int temp = a[i];
			a[i] = a[m];
			a[m] = temp;
			m++;
		}	
		result.push_back(a);
	}
	
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;	
	return result;

}

int main()
{
	int tt;
	cin >> tt;
	cout << "\n";
	while(tt--)
	{
		int n;
		cin >> n;
		vector<int> a;
		int m = n;
		int p = 1;
		for(int i = 0; i < m; ++i)
		{	a.push_back((m - (m - p)));
			p++;
		}

		perms(a, n);

		cout << endl;

	}
	return 0;
}
