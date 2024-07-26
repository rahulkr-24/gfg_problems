//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        int size = 0;
        
        vector<bool> chc(26,false);
        
        for(auto i: str){
            if(i == ' '){
                continue;
            }
            chc[i-'a'] = true;
            size++;
        }
        
        if(size < 26) return false;
        
        for(bool c:chc){
            if(c == false){
                k--;
            }
        }
        
        return k >=0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends