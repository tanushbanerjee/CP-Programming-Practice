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
#define pb(x) push_back(x);
using ll = long long;
using l = long;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)
 
int n;
vector<int> p;
int main()
{
	fastio;
	ll n, total=0, ans=INT_MAX;
	cin >> n;
	ll arr[n];
	for(ll i = 0; i < n; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	for(ll i = 0; i < 1<<n; i++) {
		ll s = 0;
		for(ll j = 0; j < n; j++) {
			if(i & 1<<j) s += arr[j];
		}
		ll curr = abs((total-s)-s);
		ans = min(ans, curr);
	}
	cout << ans;
	return 0;
}
