/*******************************************************************************
Author:  Tanush Banerjee 
Email:  samihanbanerjee026@gmail.com
CodeForces Username: samihanbanerjee026
CodeChef Username: tanushbanerjee
 *******************************Macros And Includes******************************/
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i < n; ++i)
#define Fo(i, k, n) for(i=k; i<n; ++i)
#define rv(i, n, a) for(int i = 0; i < n; ++i) {cin >> a[i];}
#define max(i, j) (i < j) ? cout<<1:cout<<0;
#define pb(x) push_back(x);
using ll = long long;
using l = long;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)
 

int main()
{
	fastio;
	int tt;
	cin >> tt;
	while(tt--)
	{
		ll n, s;
		bool isthere = 0;
		cin >> n >> s;
		vector<int> a(n);

		for(int i = 0;i < n; ++i)
		{
			cin >> a[i];
		}
		for(ll mask = 0; mask < (1 << n); ++mask)
		{
			ll sum_of_subset = 0;

			for(int i = 0; i < n; ++i)
			{
				if(mask < (1 << i))
				{
					sum_of_subset += a[i];
				}
			}
			if(sum_of_subset == s)
			{
				isthere = 1;
			}
		}
		if(isthere)
		{
			puts("YES");
		}
		else
		{
			puts("NO");
		}
	}
	return 0;
}
