/*******************************************************************************
Author:  Tanush Banerjee 
Email:  samihanbanerjee026@gmail.com
CodeForces Username: samihanbanerjee026
CodeChef Username: TanushBanerjee
AtCoder Username: Tanush_Banerjee
 *******************************Macros And Includes******************************/
#include <bits/stdc++.h>
using namespace std;
 
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i < n; ++i)
#define Fo(i, k, n) for(i=k; i<n; ++i)
#define rv(n, a) for(int i = 0; i < n; ++i) {cin >> a[i];}
#define max(i, j) (i < j) ? cout<<1:cout<<0;
#define pb(x) push_back(x);
using ll = long long;
using l = long;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)
 
 
int main()
{
	fastio;
	ll n;
	cin >> n;
	vector<ll> a(n);
	rv(n, a);
	ll manhat = 0;
	for(ll i = 0; i < n; ++i)
	{
		manhat+=abs(a[i]);
	}
	long double euclid = 0;
	for(ll i = 0;i < n; ++i)
	{
		euclid += abs(a[i] * a[i]);
	}
	ll max = a[0];
 
	for(ll i = 1; i < n; ++i)
	{
		if(abs(a[i]) > abs(max))
		{
			max = abs(a[i]);
		}
	}
	cout.precision(15);	
	cout << abs(manhat) << "\n";
	cout << fixed << sqrt(euclid) << "\n";
	cout << abs(max) << "\n";
	return 0;
}