//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int N){
        // code here 
        long currSum=0;
        int count=0;
        long res=INT_MIN;
        for(int i=0;i<K;i++)
        {
            currSum+=arr[i];
            res=max(res,currSum);
        }
        
        for(int i=K;i<N;i++)
        {
            currSum=currSum+arr[i]-arr[i-K];
            res=max(res,currSum);
        }        
        return res;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends