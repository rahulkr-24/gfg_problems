//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    // Space Optimized Code
    int Space_Opti(int N, int K, int val[], int wt[])
    {
        vector<int> curr(K+1, 0), next(K+1, 0);
        
        for(int ind=N-1;ind>=0;ind--) {
            for(int W=0;W<=K;W++) {
                int skip = 0 + next[W];
                int take = 0;
                if(wt[ind] <= W) {
                    take = val[ind] + curr[W-wt[ind]];
                }
                
                curr[W] = max(skip, take);
            }
            next = curr;
        }
        return curr[K];
    }

    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        return Space_Opti(N, W, val, wt);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends