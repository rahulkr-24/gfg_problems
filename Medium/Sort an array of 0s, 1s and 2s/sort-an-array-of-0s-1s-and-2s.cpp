//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int st=0,temp=0,end=n-1;
        while(temp<=end)
        {
            if(a[temp]==0)
            {
                swap(a[st],a[temp]);
                st++;
                temp++;
            }
            else if (a[temp]==2)
            {
                swap(a[temp],a[end]);
                end--;
            }
            else temp++;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends