//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
         long left = 1;
        long right = n - 2;
        long leftMax = arr[0];
        long rightMax = arr[n - 1];
        long trappedWater = 0;

        while (left <= right) {
            if (leftMax >= rightMax) {
                if (arr[right] <= rightMax) {
                    trappedWater += rightMax - arr[right];
                    right--;
                } else {
                    rightMax = arr[right];
                    right -= 1;
                }
            } else {
                if (arr[left] <= leftMax) {
                    trappedWater += leftMax - arr[left];
                    left++;
                } else {
                    leftMax = arr[left];
                    left += 1;
                }
            }
        }
        return trappedWater;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends