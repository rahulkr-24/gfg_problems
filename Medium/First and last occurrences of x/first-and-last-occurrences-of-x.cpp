//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here/
        int start=0,end=n-1,mid=start+(-start+end)/2,ans1=-1,ans2=-1;
        vector<int>result;
        while(start <=end)
        {
            
            if(arr[mid]==x)
            {
                ans1=mid;
                end=mid-1;
            }
            else if(arr[mid]>x)
            {
                end=mid-1;
            }
            else
            start=mid+1;
            
            mid=start+(end-start)/2;
        }
        result.push_back(ans1);
        start=0,end=n-1;
        while(start <=end)
        {
            
            if(arr[mid]==x)
            {
                ans2=mid;
                start=mid+1;
            }
            else if(arr[mid]>x)
            {
                end=mid-1;
            }
            else
            start=mid+1;
            
            mid=start+(end-start)/2;
        }
        result.push_back(ans2);
        return result;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends