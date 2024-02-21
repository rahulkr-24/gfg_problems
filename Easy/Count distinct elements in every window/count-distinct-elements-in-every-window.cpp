//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        
        unordered_map<int,int>mp;
        int count=0;
        vector<int>ans;
        for(int i=0;i<k;i++){
            mp[a[i]]++;
            if(mp[a[i]]==1)count++;
        }
        ans.push_back(count);
        
        for(int i=1;i<=n-k;i++){
            mp[a[i-1]]--;
            mp[a[i+k-1]]++;
            count=0;
            if(mp[a[i-1]]==0)mp.erase(a[i-1]);
            ans.push_back(mp.size());
        }
        return ans;
    }
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends