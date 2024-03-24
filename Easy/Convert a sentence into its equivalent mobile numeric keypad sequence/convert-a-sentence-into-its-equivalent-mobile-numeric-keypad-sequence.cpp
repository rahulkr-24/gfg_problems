//{ Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}

// } Driver Code Ends


string printSequence(string S)
{
    //code here.
     unordered_map<char, string> mp;
    mp.insert(make_pair('A', "2"));
    mp.insert(make_pair('B', "22"));
    mp.insert(make_pair(' ', "0"));     
    mp.insert(make_pair('C', "222"));   
    mp.insert(make_pair('D', "3"));    
    mp.insert(make_pair('E', "33"));    
    mp.insert(make_pair('F', "333"));    
    mp.insert(make_pair('G', "4"));    
    mp.insert(make_pair('H', "44"));    
    mp.insert(make_pair('I', "444"));   
    mp.insert(make_pair('J', "5"));    
    mp.insert(make_pair('K', "55"));    
    mp.insert(make_pair('L', "555"));    
    mp.insert(make_pair('M', "6"));    
    mp.insert(make_pair('N', "66"));    
    mp.insert(make_pair('O', "666"));    
    mp.insert(make_pair('P', "7"));    
    mp.insert(make_pair('Q', "77"));    
    mp.insert(make_pair('R', "777"));    
    mp.insert(make_pair('S', "7777")); 
    mp.insert(make_pair('T', "8"));
    mp.insert(make_pair('U', "88"));    
    mp.insert(make_pair('V', "888"));
    mp.insert(make_pair('W', "9"));
    mp.insert(make_pair('X', "99"));
    mp.insert(make_pair('Y', "999"));
    mp.insert(make_pair('Z', "9999")); 
    
    string result = "";
    for (char c : S) {
        result += mp[c];
    }

    return result;
    
}