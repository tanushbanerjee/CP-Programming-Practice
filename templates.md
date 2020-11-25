---
permalink: /templates
---

# These are my templates for CP:

This is my present template;

{% highlight cpp %}
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
#define vt vector

using ll = long long;
using l = long;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)
#define each(x, a) for(auto& x : a)
#define vt vector
#define all(c) (c).begin(), (c).end()
#define sz(x) (long long)(x).size()
#define ar array
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
template<class A> void read(vt<A>& v);
template<class A, size_t S> void read(ar<A, S>& a);
template<class T> void read(T& x) {
	cin >> x;
}
void read(double& d) {
	string t;
	read(t);
	d=stod(t);
}
void read(long double& d) {
	string t;
	read(t);
	d=stold(t);
}
template<class H, class... T> void read(H& h, T&... t) {
	read(h);
	read(t...);
}
template<class A> void read(vt<A>& x) {
	each(a, x)
		read(a);
}
template<class A, size_t S> void read(array<A, S>& x) {
	each(a, x)
		read(a);
}
/**************************DRIVER CODE**************************/
void solve() {
	
}

int main() {
	fastio;
	solve();
	return 0;
}

{% endhighlight %}

And this is my old template:

{% highlight cpp %}
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
	
	return 0;
}

{% endhighlight %}
