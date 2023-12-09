//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
 bool isprime(int n){
        if(n <= 1) return false;
        for(int i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }

    int sumofdigits(int n){
        int sum = 0;
        while(n > 0){
            sum += (n%10);
            n /= 10;
        }
        return sum;
    }
    
    
    int sumofprimefactor(int n){
        int sum = 0;

        for(int i = 3; i <= sqrt(n); i += 2){
            while(n % i == 0){
                n /= i;
                sum += sumofdigits(i);
            }
        }
        
    
        while(n % 2 == 0){
            n /= 2;
            sum += 2;
        }
        
        if(n > 2){
            sum += sumofdigits(n);
        }
        return sum;
        
    }
    int smithNum(int n) {
        // code here
        if(isprime(n))
        return 0;
        return (sumofprimefactor(n)==sumofdigits(n));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends