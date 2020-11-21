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
	int h, w;
	cin >> h >> w;
	int isthere = 0;
	vector<string> a(h);
	for(int i=0; i < h; ++i)
	{
		cin >> a[i];
	}
	for(int i = 0; i < h; ++i)
	{
		for(int j=0; j < w; ++j)
		{
			if(a[i][j] == '.')
			{
				if(i-1 >= 0 && a[i-1][j] == '.')
				{
					isthere++;
				}
				if(i+1 < h && a[i+1][j] == '.')
				{
					isthere++;
				}
				if(j-1 >=0 && a[i][j-1] == '.')
				{
					isthere++;
				}
				if(j+1 < w && a[i][j+1] == '.')
				{
					isthere++;
				}
			}
		}
	}
	cout << isthere / 2;
	return 0;
}
