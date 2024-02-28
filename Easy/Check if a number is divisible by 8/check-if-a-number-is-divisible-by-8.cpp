//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int n=s.length();
        string st="";
        if(n<3)
        {
            int temp=stoi(s);
            if(temp%8==0)
            return 1;
            return -1;
        }
        for(int i=n-3;i<n;i++)
        {
            st+=s[i];
        }
        int temp=stoi(st);
        if(temp%8==0)
        return 1;
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends