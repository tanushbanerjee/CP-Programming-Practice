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
#define rv(i, n, a) for(i = 0; i < n; ++i) {cin >> a[i];}
#define max(i, j) (i < j) ? cout<<1:cout<<0;
#define pb(x) push_back(x);
using ll = long long;
using l = long;
#define fasto ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  solve
 *  Description: Will most probably solve the problem  
 * =====================================================================================
 */
void solve ()
{
	int n;
	int result1 = 0;
	int isequal = 0;
	int isthere1 = 0;
	int isthere = 0;
	cin >> n;

	vector<int> a(n);
	vector<int> b(n);
	int i;
	rv(i, n, a);
	
	for(int j = 0; j < n; ++j)
	{
		for(int i = 0; i < n; ++i)
		{
			if(a[j] != a[i])
			{
				continue;
			}
			else if(a[j] == a[i])
			{
				if(a[j] == 0)
				{
					continue;
				}
				b.pb(a[i]);
				for(int i=0; i < n; ++i)
				{
					cout << b[i] << " ";
				}
				isequal++;
			}
		}
	}

	if(isequal == n)
	{
		isthere = 1;
	}

	for(int i = 0; i < n; ++i)
	{
		result1 += b[i];
	}

	if(result1 != 0)
	{
		isthere1 = 1;
	}

	if((isthere == 1) && (isthere1 == 1))
	{
		cout << "YES" << endl;
		for(int i = 0; i < n; ++i)
			cout << b[i] << " ";
		cout << "\n";
		return;
	}
	cout << "NO" << "\n";

}		/* -----  end of function solve  ----- */

int main()
{
	fasto;
	ttl
	{
		solve();
	}
	return 0;
}
