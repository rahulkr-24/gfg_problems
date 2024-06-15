//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  
  bool checkPrime(int n)
  {
      if(n==2)
      return true;
      if(n%2==0)
      return false;
      
      for(int i=3;i<=sqrt(n);i+=2)
      {
          if(n%i==0)
          return false;
      }
      return true;
  }
    vector<int> getPrimes(int n) {
        // code       here
        
        vector<int>res;
        for(int i=2;i<=n/2;i++)
        {
            if(checkPrime(i) && checkPrime(n-i))
            {
                    res.push_back(i);
                    res.push_back(n-i);
                    return res;
            }
        }
        if(res.size()==0)
        return {-1,-1};

        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends