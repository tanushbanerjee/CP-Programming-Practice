
// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 
  
/* Function prints union of arr1[] and arr2[] 
   m is the number of elements in arr1[] 
   n is the number of elements in arr2[] */
void printUnion(vector<long long> arr1, vector<long long> arr2, long long m, long long n) 
{ 
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            cout << arr1[i++] << " "; 
  
        else if (arr2[j] < arr1[i]) 
            cout << arr2[j++] << " "; 
  
        else { 
            cout << arr2[j++] << " "; 
            i++; 
        } 
    } 
  
    /* Print remaining elements of the larger array */
    while (i < m) 
        cout << arr1[i++] << " "; 
  
    while (j < n) 
        cout << arr2[j++] << " "; 
} 
  
/* Driver program to test above function */
int main() 
{
	long long tt;
	cin >> tt;
	while(tt--)
	{
		long long n, m;
		cin >> n >> m;
		vector<long long> arr1, arr2;

		for(int i = 0; i < n; ++i)
		{
			cin >> arr1[i];
		}
		for(int i = 0; i < m; ++i)
		{
			cin >> arr2[i];
		}
		
		
  
    	// Function calling 
    	printUnion(arr1, arr2, m, n); 
	}
  
    return 0; 
} 
