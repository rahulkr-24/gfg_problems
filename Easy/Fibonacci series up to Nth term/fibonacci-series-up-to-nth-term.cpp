//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int MOD=1e9+7;
  void healper(int n,vector<int>&dp)
  {
      dp[0]=0;
      dp[1]=1;
      for(int i=2;i<=n;i++)
      {
          if(dp[i]==-1)
          dp[i]=(dp[i-1]+dp[i-2])%MOD;
      }
  }
    vector<int> Series(int n) {
        // Code here
        vector<int>dp(n+1,-1);
        healper(n,dp);
        return dp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends