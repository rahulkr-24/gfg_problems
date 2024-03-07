//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    unordered_map<char,int>mp;
	    for(int i=0;i<s.length();i++)
	    {
	        mp[s[i]-'0']++;
	    }
	    set <int>st;
	    for(auto it:mp)
	    {
	        st.insert(it.second);
	    }
	     if(st.size()>2)return 0;
      
      if(st.size()==1)return 1;
      
      
      if(st.size()==2){
          int c=0;
          int maxi=-1;
          for (auto x:mp){
              maxi=max(maxi,x.second);
          }
          for (auto x:mp){
             if(x.second==maxi){
                 c++;
             }
          }
          
          vector<int>k;
          
          for (auto x:st){
              k.push_back(x);
          }
          
          
          
          if(c>1)return 0;
          
          
          
          if(c==1 && abs(k[0]-k[1])>1 )return 0;
          return 1;
      }
          
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends