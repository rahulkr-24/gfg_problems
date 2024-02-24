//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // Complete this function
    long long int count(long long int n)
    {
    	// Your code here
    	long long ans=0, fiv=n/5;
    	for(long i=0;i<=fiv;i++) {
    	    long val = n- 5*i;
    	    if(val%3 == 0) {
    	        ans++;
    	        ans+= i/2;
    	    }
    	}
    	return ans;	
    	
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends