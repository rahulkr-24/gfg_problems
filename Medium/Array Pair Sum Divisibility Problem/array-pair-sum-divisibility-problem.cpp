//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int size=nums.size();
        if(size%2==1)
        return false;
        else
        {
          unordered_map<int,int> ump ;
            for(int i=0;i<nums.size();i++){
                ump[nums[i]%k]++ ;
                nums[i]%=k ;
            }
            for(int i=0;i<nums.size();i++){
                if(ump[nums[i]] != 0){
                    ump[(nums[i])%k]-- ;
                    ump[(k-nums[i])%k]-- ;
                }
            }
            for(auto x : ump){
                // cout<<x.first<<" "<<x.second<<"\n";
                if(x.second != 0)
                    return false ;
            }
            return true ;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends