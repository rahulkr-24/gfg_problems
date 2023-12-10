//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> res;
    void solve (int N,vector <int> &coinArray)
    {
        if(N==0)
        return;
        else
        {
            int coinSelected=0;
            for(int i=0;i< 10;i++)
            {
                if(coinArray[i]<=N)
                {
                    coinSelected=coinArray[i];
                }
            }
            int num=N/coinSelected;
            for(int i=0;i<num;i++)
            {
                res.push_back(coinSelected);
            }
            solve(N%coinSelected,coinArray);
        }
        
    }
    vector<int> minPartition(int N)
    {
        // code here
        vector <int> coinArray={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        
        solve (N,coinArray);
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends