//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        
        string a="",b="",c="",d="";
        int i=0;
          while(str[i]!='/')
          {
              a+=str[i];
              i++;
          }
          i++;
          while(str[i]!=',')
          {
              b+=str[i];
              i++;
          }
          i+=2;
          while(str[i]!='/')
          {
              c+=str[i];
              i++;
          }
          i++;
          while(i!=str.size())
          {
              d+=str[i];
              i++;
          }
        double a1 = stod(a);
        double a2 = stod(b);
        double b1 = stod(c);
        double b2 = stod(d);
        
        double r1 = a1/a2;
        double r2 = b1/b2;
        
        if(r1 == r2)
        {
            return "equal";
        }
        
        if(r1 > r2)
        {
            return a+"/"+b;
        }
        else
        {
            return c+"/"+d;
        }
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends