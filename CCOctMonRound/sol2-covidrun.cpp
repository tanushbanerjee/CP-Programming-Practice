#include <bits/stdc++.h>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL); 
	int tt;
	scanf("%d", &tt);
	int n = 0, k = 0, x = 0, y = 0;
	while(tt--)
	{
		int isThere = 0;
		scanf("%d %d %d %d", &n, &k, &x, &y);
		if(x == y)
		{
			isThere = 1;
		}
		if ((x < y) || (x > y))
		{
			for(int i = x; i < n; i+=k)
			{
				if (i == y)
				{
					isThere = 1;

					break;
				}
				if (i == n - 1)
				{
					i = k - 1;
				}
			}
		}
		switch(isThere)
		{
			case 1:
				printf("YES\n");
				break;
			case 0:
				printf("NO\n");
				break;
		}
	}
	std::cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs\n";
	return 0;
}
