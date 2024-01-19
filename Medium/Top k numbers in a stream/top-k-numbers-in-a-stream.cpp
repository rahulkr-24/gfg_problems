//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

 bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    
    return a.second > b.second;
}

class Solution {
  public:
    vector<vector<int>> kTop(vector<int>& arr, int n, int k) {
        vector<vector<int>> res;
        vector<pair<int, int>> topK;
        map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) continue;
            mp[arr[i]]++;
            
            if(topK.size() == 0) topK.push_back({arr[i], mp[arr[i]]});
            else {
                auto it = topK.begin();
                for(; it != topK.end(); it++) {
                    if(it->first == arr[i]) break;
                }
                
                if(topK.size() < k) {
                    if(it == topK.end()) topK.push_back({arr[i], mp[arr[i]]});
                    else it->second = mp[arr[i]];
                }
                else if(topK.size() == k) {
                    if(it == topK.end()) {
                        pair<int, int> a = topK[k-1];
                        pair<int, int> b = {arr[i], mp[arr[i]]};
                
                        if(comp(b, a)) {
                            topK[k-1] = b;
                        }
                    }
                    else it->second = mp[arr[i]];
                }
            }
            
            sort(topK.begin(), topK.end(), comp);
            
            vector<int> temp;
            for(auto it : topK) {
                temp.push_back(it.first);
            }
            
            res.push_back(temp);
        }
        
        return res;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> a(N);
        Array::input(a,N);
        
        Solution obj;
        vector<vector<int>> res = obj.kTop(a, N, K);
        
        for(auto it:res)
            Array::print(it);
        
    }
}

// } Driver Code Ends