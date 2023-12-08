//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    long sum=0;
    bool checkPrime()
    {
        if(sum<0)
        return false;
        for(int i=2;i<=sqrt(sum);i++)
        {
            if(sum%i==0)
            return false;
        }
        return true;
    }
    int minNumber(int arr[],int N)
    {
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        long temp=sum;
        while(!checkPrime())
        {
            sum++;
        }
        return (int) sum-temp;
        
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends