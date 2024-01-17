//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
   void giveallpermutation(int i,set<vector<int>>&ans,vector<int> &arr){
        if(i>=arr.size()){
            return;
        }
        set<vector<int>>temp;
        giveallpermutation(i+1,temp,arr);
        for(auto it:temp){
            vector<int>v2;
            v2.push_back(arr[i]);
            for(int j =0;j<it.size();j++){
                v2.push_back(it[j]);
            }
            for(int j =0;j<(v2.size()-1);j++){
                ans.insert(v2);
                swap(v2[j],v2[j+1]);
            }
            ans.insert(v2);
        }
        if(temp.size()==0){
            vector<int>v2;
            v2.push_back(arr[i]);
            ans.insert(v2);
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        set<vector<int>>ans;
       giveallpermutation(0,ans,arr);
       vector<vector<int>>ans2;
       for(auto it:ans){
           ans2.push_back(it);
       }
       return ans2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends