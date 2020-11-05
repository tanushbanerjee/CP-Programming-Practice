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
 
void solve(ll m, ll n, vector<vector<ll>> a)
{
	ll i, k = 0, l = 0;

	while(k < m && l < n)
	{
		for(i = l; i < n; ++i)
		{
			cout << a[k][i] << " ";
		}
		k++;

		for(i = k; i < m; ++i)
		{
			cout << a[i][n-1] << " ";
		}

		if(k < m)
		{
			for(i = n - 1; i >= l; --i)
			{
				cout << a[m-1][i] << " ";
			}
			m--;
		}
		if(l < n)
		{
			for(i = m - 1; i >= k; --i)
			{
				cout << a[i][l] << " ";
			}
			l++;
		}
	}
}

int main()
{
	fastio;
	int tt;
	cin >> tt;
	while(tt--)
	{
		ll n, m;
		cin >> n >> m;
		vector<vector<ll>> a;

		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < m; ++j)
			{
				cin >> a[i][j];
			}
		}
		
		solve(n, m, a);
	}
	return 0;
}
