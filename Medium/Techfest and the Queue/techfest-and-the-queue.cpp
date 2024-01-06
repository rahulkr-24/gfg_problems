//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int powerCounter(int num)
    {
        int cnt=0;
      for (int j = 2; j <= sqrt(num); j++)  
    {  
        while (num%j == 0)  
        {  
            cnt++;  
            num = num/j;  
        } 
         
    } 
    if(num!=1) {
            cnt++;
        }
        return cnt;
    }
	int sumOfPowers(int a, int b){
	    // Code here
	    int sumPow=0;
	 for(int i=a;i<=b;i++)
	    {
	     sumPow+=powerCounter(i);
	    }
	    return sumPow;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends