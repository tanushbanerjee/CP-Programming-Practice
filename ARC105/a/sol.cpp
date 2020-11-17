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
 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  solve
 *  Description:  
 * =====================================================================================
 */
void solve ()
{
	fasto;
	int a, b, c, d;

	cin >> a >> b >> c >> d;
	
	if(a == (b + c + d)) cout << "Yes";	
	else if(b == (a + c + d)) cout << "Yes";	
	else if(c == (a + b + d)) cout << "Yes";	
	else if(d == (b + c + a)) cout << "Yes";	
	else if((a + b) == (c + d)) cout << "Yes";	
	else if((a + c) == (b + d)) cout << "Yes";	
	else if((a + d) == (b + c)) cout << "Yes";
	else cout << "No";
}		/* -----  end of function solve  ----- */

int main()
{
	solve();
	return 0;
}
