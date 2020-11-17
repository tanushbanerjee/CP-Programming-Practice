#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;

	while(tt--)
	{
		int n;
		cin >> n;
		vector<int> sa(n);

		for(int i = 0; i < n; ++i)
		{
			cin >> sa[i];
		}
		
		sort(sa.begin(), sa.end());

		int result = sa[n - 1] - sa[0];
		for(int i = 0; i < n; ++i)
		{
			for(int j = i+1; j < n; ++j)
			{
				result = min(result, sa[j] - sa[i]);
			}
		}
		cout << result << "\n";

	}
	return 0;
}
