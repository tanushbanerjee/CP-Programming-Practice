#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for (int i = 0; i < int(n); i++)

int solve(int a, int b) {
    int side = min(max(a * 2, b), max(a, b * 2));
    return side * side;
}

int main()
{
    int t;
    cin >> t;
    fo(tt, t) {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
}

