//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:


int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int i=0;
        int res=0;
        int k=str.length()-1;
        while(i<k){
           int f= mp[str[i]];
           int g=mp[str[i+1]];
            if(f<g){
                res-=f;
            }
            else{
            res+=f;
            }
            i++;
        }
        return res+mp[str[k]];
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends