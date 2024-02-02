//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int num = 0;
        int flag = (s[0]=='-');
        for(int i = 0 + flag;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                int d = s[i]-'0';
                num = num * 10 + d;
            }
            else return -1;
        }
        if(flag) num = -num;
        return num;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends