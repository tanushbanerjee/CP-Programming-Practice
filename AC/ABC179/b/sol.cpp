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
 
int main(){
    int n;
    cin >> n;
    int a[100][2];
    for (int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    for (int i=0; i<n-2; i++){
        if(a[i][0]==a[i][1] && a[i+1][0]==a[i+1][1] && a[i+2][0]==a[i+2][1]){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
