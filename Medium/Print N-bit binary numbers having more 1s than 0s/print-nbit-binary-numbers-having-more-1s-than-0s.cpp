//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
     void getAns(vector<string> &ans,int ct1,int ct0,string s,int n){
        if(s.size()==n){
            ans.push_back(s);
            return;
        }
        if(ct1>ct0){
            getAns(ans,ct1,ct0+1,s+'0',n);
        }
        getAns(ans,ct1+1,ct0,s+'1',n);
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	      vector<string> ans;
    getAns(ans,0,0,"",n);
    sort(ans.rbegin(),ans.rend());
    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends