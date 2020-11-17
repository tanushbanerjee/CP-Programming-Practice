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
#define fasto ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)
 

int main()
{
	fasto;
	int n;
	int isthere = 0;
	cin >> n;
	string mn = to_string(n);

	for(int i = 0; i < 3; ++i)
	{
		if(mn[i] == '7')
		{
			isthere = 1;
			break;
		}
	}
	if(isthere == 1)
	{
		cout << "Yes";
	}
	else{
		cout << "No";
	}
	return 0;
}


