//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int min_operations(vector<int>& nums) {
        // Code here
        vector<int> lis;
            for(int i = 0; i < nums.size(); i++){
                nums[i] -= i;
                int pos = upper_bound(lis.begin(), lis.end(), nums[i]) - lis.begin();
                if(pos == lis.size()) lis.push_back(nums[i]);
                else lis[pos] = nums[i];
            }
            return nums.size() - lis.size();
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution ob;
        int ans = ob.min_operations(nums);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends