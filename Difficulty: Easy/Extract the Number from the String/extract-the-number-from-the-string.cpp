//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool f(string s){
      for(auto x:s){
          if(x<'0' or x>='9'){
              return false;
          }
      }
      return true;
  }
    long long ExtractNumber(string sentence) {

        // code here
        stringstream ss(sentence);
        long long ans=-1;
        string word;
        long long mx=-1;
        while(ss>>word){
            if(f(word)){
                ans=stoll(word);
                mx=max(mx,ans);
            }
        }
        return  mx;
        
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends