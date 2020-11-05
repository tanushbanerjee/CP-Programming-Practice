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
		ll n;
		ll sum = 0;
		bool isthere = 0;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		
		unordered_map<int, bool> sumMap;
		
		for(int i = 0; i < n; ++i)
		{
			sum += a[i];

			if(sum == 0 || sumMap[sum])
			{
				isthere = 1;
			}
			sumMap[sum] = true;
		}
		if(isthere)
		{
			cout << "Yes" << "\n";
		}
		else
		{
			cout << "No" << "\n";
		}
	}
	return 0;
}
