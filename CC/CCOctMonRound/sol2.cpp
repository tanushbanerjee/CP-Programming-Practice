// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	ios_base::sync_with_stdio(fale);
// 	cin.tie(NULL); 
   
//    	#ifndef ONLINE_JUDGE 
//    	freopen("input.txt", "r", stdin); 
//    	freopen("error.txt", "w", stderr); 
//    	freopen("output.txt", "w", stdout); 
//    	#endif

// 	int tt; 
// 	cin >> tt;
// 	while(tt--)
// 	{
// 		int n, k, x, y;
// 		cin >> n >> k >> x >> y;
		

// 		// int formula = x + k;

// 		// while(1)
// 		// {
// 		// 	// if(formula == y)
// 		// 	// {
// 		// 	// 	cout << "YES" << "\n";
// 		// 	// 	break;
// 		// 	// }
// 		// }

// 		// x = 5 y = 3

// 		if(x < y)
// 		{
// 			for(int i = x; i < n; i+=k)
// 			{
// 				if(x == y)
// 				{
// 					cout << "YES" << "\n";
// 				}

// 				cout << "NO" << "\n";
// 			}
// 		}

// 		else if (x == y)
// 		{
// 			cout << "YES" << "\n";
// 		}

// 		else if (x > y)
// 		{
// 			if(x == n)
// 			{
// 				x = k-1;

// 				for(int i = x; i < n; i+=k)
// 				{
// 					if(x == y)
// 					{
// 						cout << "YES" << "\n";
// 					}
// 					cout << "NO" << "\n";
// 				}
// 			}

// 			else
// 			{
// 				for(int i = x; i < n; i+=k)
// 				{
// 					if(x == y)
// 					{
// 						cout << "YES" << "\n";
// 					}

// 					else if(x == n)
// 					{
// 						x = k - 1;
// 						for(int i = x; i < n; i+=k)
// 						{
// 							if(x == y)
// 							{
// 								cout << "YES" << "\n";
// 							}
// 						}
// 					}
// 					cout << "NO" << "\n";
// 				}
// 			}
// 		}

// 		else if(x == n)
// 		{
// 			x = k-1;

// 			for(int i = x; i < n; i+=k)
// 			{
// 				if(x == y)
// 				{
// 					cout << "YES" << "\n";
// 				}
// 			}
// 		}
// 	}
// 	return 0;
// }

#include<bits/stdc++.h> 
using namespace std; 
void solve(); 
int main() 
{ 
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 

	int tt; 
	cin >> tt;
	while(tt--)
	{
		int n, k, x, y;
		cin >> n >> k >> x >> y;
			

			// int formula = x + k;

			// while(1)
			// {
			// 	// if(formula == y)
			// 	// {
			// 	// 	cout << "YES" << "\n";
			// 	// 	break;
			// 	// }
			// }

			// x = 5 y = 3

		if(x < y)
		{
			for(int i = x; i < n; i+=k)
			{
				if(x == y)
				{
					cout << "YES" << "\n";
				}

				cout << "NO" << "\n";
			}
		}

		else if (x == y)
		{
			cout << "YES" << "\n";
		}

		else if (x > y)
		{
			if(x == n)
			{
				x = k-1;

				for(int i = x; i < n; i+=k)
				{
					if(x == y)
					{
						cout << "YES" << "\n";
					}
					cout << "NO" << "\n";
				}
			}

			else
			{
				for(int i = x; i < n; i+=k)
				{
					if(x == y)
					{
						cout << "YES" << "\n";
					}

					else if(x == n)
					{
						x = k - 1;
						for(int i = x; i < n; i+=k)
						{
							if(x == y)
							{
								cout << "YES" << "\n";
							}
						}
					}
					cout << "NO" << "\n";
				}
				
			}
			else if(x == n)
			{
				x = k-1;

				for(int i = x; i < n; i+=k)
				{
					if(x == y)
					{
						cout << "YES" << "\n";
					}
				}
			}
		}
		return 0;
	}


cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
} 
