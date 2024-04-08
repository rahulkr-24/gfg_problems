//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minPoints(int M, int N, vector<vector<int>> points) 
	{ 
	    // Your code goes here
	     if(M == 0) return 0; // if empty then return 0
        // DP with M+1 x N+1 dimension and all values initialized to INT_MAX
        vector<vector<int>>dp(M+1,vector<int>(N+1,INT_MAX));
        // Initializing the cell to the bottom and right of princess' cell with value 1.
        dp[M-1][N] = 1;
        dp[M][N-1] = 1;
        //Iterating over dp excluding the additional row and column we added.
        for(int i=M-1;i>=0;i--){
            for(int j=N-1;j>=0;j--){
                dp[i][j]= max(1,(min(dp[i+1][j],dp[i][j+1]) - points[i][j]));  // value is minimum health to land on next - health need to stay
            }
        }
        
        return dp[0][0];
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        vector<vector<int>> a(m, vector<int>(n));

        for(int i = 0; i < m; i++)
        	for(int j = 0; j < n; j++)
        		cin >> a[i][j];

        

	    Solution ob;
	    cout << ob.minPoints(m,n,a) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends