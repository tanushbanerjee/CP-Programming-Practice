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
	int n;
	int isthere = 0;
	cin >> n;
	
	vector<int> a(n);
	for(int i =0; i <n; ++i)
	{
		cin >> a[i];
	}

	for(int i = 1; i < n-1; ++i)
	{
		if((a[i-1] < a[i]) && (a[i] < a[i+1]))
		{
			isthere++;
		}
		else if((a[i-1] > a[i]) && (a[i] > a[i+1]))
		{
			isthere++;
		}
	}
	cout << isthere;
	return 0;
}
