/********************************************************************************
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
		int n;
		cin >> n;
		int i, nz = 0, no = 0, nt = 0;
		vector<int> a(n);
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		for(i = 0; i < n; ++i)
		{
			switch(a[i])
			{
				case 0:
					nz++;
					break;
				case 1:
					no++;
					break;
				case 2:
					nt++;
					break;
			}
		}
		i = 0;
		while(nz > 0)
		{
			a[i++] = 0;
			nz--;
		}
		while(no > 0)
		{
			a[i++] = 1;
			no--;
		}
		while(nt > 0)
		{
			a[i++] = 2;
			nt--;
		}
		for(int m = 0; m < n; ++m)
		{
			cout << a[m] << " ";
		}
		cout << endl;
	}
	return 0;
}

