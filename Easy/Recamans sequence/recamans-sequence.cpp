//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    vector<int> recamanSequence(int n){
        // code here
         vector<int>ans;
        unordered_set<int>s;
       ans.push_back(0);
       s.insert(0);
       for(int i=1;i<n;i++)
       {
           int num=ans[i-1]-i;
           if(num<0||s.find(num)!=s.end())
           num=ans[i-1]+i;
           
           ans.push_back(num);
           s.insert(num);
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends