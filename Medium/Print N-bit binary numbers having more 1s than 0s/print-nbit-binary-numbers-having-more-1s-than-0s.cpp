//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void buildString(vector<string>&s,int cnt1, int cnt0,int n,string temp)
    {
        // cout<<temp;
        if(temp.size()==n){
        s.push_back(temp);
        return;    
        }
        if(cnt1 >cnt0)
        {
            buildString(s,cnt1,cnt0+1,n,temp+'0');
        }
        buildString(s,cnt1+1,cnt0,n,temp+'1');
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string>s;
	   string temp="";
	    buildString(s,0,0,n,temp);
	    sort(s.rbegin(),s.rend());
	    
	    return s;
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