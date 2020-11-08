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
	ll n, x;
	cin >> n >> x;

	vector<int> a(n);

	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for(int i  =0; i < n; ++i)
	{
		for(int j = i+1; j < n; ++j)
		{
			for(int k = j+1; k < n; ++k)
			{
				for(int l = k+1; l < n; ++l)
				{
					if(a[i]+a[j]+a[k]+a[l] == x)
					{
						cout << i+1 << " " << j+1 << " " << k+1 << " " << l+1;
						return 0;
					}
				}
			}
		}
	}

	cout << "IMPOSSIBLE";
	return 0;
}
