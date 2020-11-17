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
		ll x, y;
		cin >> x >> y;

		if(x < y)
		{
			ll ans = 0;
			if(y & 1)
			{
				ans = (y*y)-x+1;
			}
			else
			{
				ans = ((y-1)*(y-1))+x;
			}
			cout << ans << endl;
		}
		else
		{
			ll ans = 0;
			if(x & 1)
			{
				ans = ((x-1)*(x-1))+y;
			}
			else
			{
				ans = (x*x)-y+1;
			}
			cout << ans << endl;
		}
	}
	return 0;
}
