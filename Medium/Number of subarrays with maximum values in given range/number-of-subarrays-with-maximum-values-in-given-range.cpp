//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        long ans = 0, l = 0, r = 0, check = 0, ll = 0;
        for (int i=0;i<n;i++){
            if (a[i]>R) 
            {check = 0;
            l = i+1;}
            else if (a[i]>=L) 
            {check = 1;
            ll = i;
            }
            if (check)
            ans += ll-l+1;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends