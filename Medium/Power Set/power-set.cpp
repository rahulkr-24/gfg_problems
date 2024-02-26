//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		 void Solve(string s,string p,int index,vector<string> &res){
          if(index==s.length()){
               res.push_back(p);
               return ;
          }
          Solve(s,p,index+1,res);
          Solve(s,p+s[index],index+1,res);
         
      }
        vector<string> AllPossibleStrings(string s){
          
            vector<string> ans;
            for(int i=0;i<s.length();i++){
                string p;
                p.append(1,s[i]);
            Solve(s,p,i+1,ans);
            
            }
            
            sort(ans.begin(),ans.end());
            return ans;
        }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends