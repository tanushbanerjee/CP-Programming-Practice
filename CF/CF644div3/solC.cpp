/*******************************************************************************
	author: Tanush Banerjee
*******************************Macros And Includes******************************/
#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i < n; ++i)
#define Fo(i, k, n) for(i=k; i<n; ++i)
#define rv(i, n, a) for(int i = 0; i < n; ++i) {cin >> a[i];}
#define max(i, j) (i < j) ? cout<<j:cout<<i;
#define min(i, j) (i < j) ? cout << 
#define pb(x) push_back(x);
using ll = long long;
using l = long;

#define fasto ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl while(tt--)
 
/******************************Functions****************************************/
/**************************In-Template Functions********************************/
template <typename... T>
void read(T&... args)
{
	((cin >> args), ...);
}

template <typename... T>
void write(T&... args)
{
	((cout << args << " " ), ...);
}
/***************************Manual Functions************************************/

// To be added by me when coding

/***********Driver Code***************/

int main()
{
	fasto;
	//fasti;

	int tt;
	cin >> tt;
	while(tt--)
	{
		int isthere = 0;
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i= 0; i < n; ++i)
		{
			cin >> v[i];
		}
		if(n == 2)
		{
			if(v[0] > v[1])
			{
				if((v[0] % 2 == v[1] % 2) || (abs(v[0] - v[1]) == 1))
				{
					cout << "YES" << "\n";
				
				}
				else
				{
					cout << "NO" << "\n";
				}
			}
			else if(v[0] < v[1])
			{
				if((v[0] % 2 == v[1] % 2) || (abs(v[1] - v[0]) == 1))
				{
					cout << "YES" << "\n";
				}
				else
				{
					cout << "NO" << "\n";
				}

			}
		}
		else if(n > 2)
		{
			for(int i = 0; i < n; ++i)
			{
				for(int j = i + 1; j < n; ++j)
				{
					if(i > j)
					{
						if((v[i] % 2 == v[j] % 2) || (abs(v[i] - v[j]) == 1))
						{
							isthere = 1;
							break;
						}
					}
					else if(i < j)
					{
						if((v[j] % 2 == v[i] % 2) || (abs(v[j] - v[i]) == 1))
						{
							isthere = 1;
							break;
						}
					}
				}
			}
			if(isthere == 1)
			{
				cout << "YES" << "\n";
				
			}
			else if(isthere == 0)
			{
				cout << "NO" << "\n";
			}
		}
	}
	return 0;
}

