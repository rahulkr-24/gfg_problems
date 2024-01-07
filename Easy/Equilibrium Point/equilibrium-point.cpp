//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
        long long pref[n];
        pref[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            pref[i]=pref[i-1]+arr[i];
        }
        long long lSum=0,rSum=pref[n-1];
        for(int i=0;i<n;i++)
        {   
            rSum-=arr[i];
            if(lSum==rSum)
            {
                return i+1;
            }
            lSum+=arr[i];
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends