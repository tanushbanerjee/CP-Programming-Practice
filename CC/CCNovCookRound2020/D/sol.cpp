/*************************************************
Author:  Tanush Banerjee 
Email:  samihanbanerjee026@gmail.com
CodeForces Handle: samihanbanerjee026
CodeChef Handle: tanushbanerjee
AtCoder Handle: Tanush_Banerjee
CSES Handle: Tanush_Banerjee
 *****************Macros And Includes*************/
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i < n; ++i)
#define Fo(i, k, n) for(i=k; i<n; ++i)
#define rv(a) for(int i = 0; i < a.size(); ++i) {cin >> a[i];}
#define pb(x) push_back(x);
using ll = long long;
using l = long;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)
#define each(x, a) for(auto& x : a)
#define vt vector
#define all(c) (c).begin(), (c).end()
#define sz(x) (long long)(x).size()
/****************USEFUL FUNCTIONS**************/
template<typename... T>
void read(T&... args) {
	((cin >> args), ...);
}
template<typename... T>
void write(T... args) {
	((cout << args << " "), ...);
}
string to_string(char c) {
	return string(1, c);
}
string to_string(bool b) {
	return b?"true":"false";
}
string to_string(const char* s) {
	return string(s);
}
string to_string(string s) {
	return s;
}
template<typename... T>
void print(T... args) {
	((cout << args << "\n"), ...);
}
/**************************DRIVER CODE**************************/
void solve() {

}

int main() {
	fastio;
	solve();
	return 0;
}
