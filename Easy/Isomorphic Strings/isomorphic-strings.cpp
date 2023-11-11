//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
      
      {
          int n = str1.size();
        int m = str2.size();
    
        if (n != m) {
            return false;
        }
    
        vector<char> mp(128, '\0');
        vector<char> mp1(128, '\0');
    
        for (int i = 0; i < n; ++i) {
            if ((mp[str1[i]] && mp[str1[i]] != str2[i]) ||
                (mp1[str2[i]] && mp1[str2[i]] != str1[i])) {
                return false;
            }
    
            mp[str1[i]] = str2[i];
            mp1[str2[i]] = str1[i];
        }
    
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends