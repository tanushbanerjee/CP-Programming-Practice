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
int cnt = 0;
bool chk[26];

int main()
{
	fastio;
	string ans = "";
	string s;
	cin >> s;
	
	for(char c : s)
	{
		if(!chk[c - 'A'])
		{
			chk[c - 'A'] = true;
			cnt++;
		}
		else
		{
			ans += c;
			chk[c - 'A'] = false;
			cnt--;
		}
	}
	if(cnt >= 2)
	{
		cout << "NO SOLUTION";
		return 0;
	}
	
	cout << ans;
	for(char c = 'A'; c <= 'Z'; c++)
	{
		if(chk[c -'A'])
		{
			cout << c;
		}
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}
