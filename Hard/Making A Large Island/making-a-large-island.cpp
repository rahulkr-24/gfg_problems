//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    vector<pair<int, int>> dir = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
    
    // stores {idx, cnt} of each component
    unordered_map<int, int> mp;
    
    // as we already have 0,1 in the grid so start index from 2
    int ans=0, idx=2;
    
    void dfs(int i, int j, vector<vector<int>>& grid)
    {
        // marking each 1 in connected component with idx;
        grid[i][j] = idx;
        
        // storing area of curr component
        mp[idx]++;
        
        for(int k=0; k<4; k++)
        {
            int nR = i+dir[k].first;
            int nC = j+dir[k].second;
            
            if(nR>=0 && nR<grid.size() && nC>=0 && nC<grid[0].size())
            {
                if(grid[nR][nC]==1)
                {
                    dfs(nR, nC, grid);
                }
            }
        }
    }
public:
    int largestIsland(vector<vector<int>>& grid) 
    {
        // Your code goes here.
    
     int n=grid.size(), m=grid[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i, j, grid);
                    
                    // to handle the case when there are no zeroes
                    ans = max(ans, mp[idx]);
                
                    // we have to change index for next connected component
                    idx++;
                }
            }
        }
        
        
        // 4
        queue<pair<int, int>> q;
        
        // pushing all 0 entries
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==0)
                    q.push({i, j});
                
            }
        }
        
        
        while(!q.empty())
        {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            
            // insert idx of compo in set so that if 0 is connected to same
            // idx compo in more than one direction then we make sure that
            // we cal compo area only once
            unordered_set<int> vis;
            
            int currArea=0;
            for(int k=0; k<4; k++)
            {
                int nR = i+dir[k].first;
                int nC = j+dir[k].second;
                
                if(nR>=0 && nR<n && nC>=0 && nC<m)
                {
                    if(!vis.count(grid[nR][nC]) && grid[nR][nC]!=0)
                    {
                        vis.insert(grid[nR][nC]);
                        
                        // cal area of all componets
                        currArea += mp[grid[nR][nC]];
                    }
                }
            }
            
            // as we are flipping curr 0 to 1
            ans = max(ans, currArea+1);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>grid[i][j];
        Solution ob;
        cout<<ob.largestIsland(grid)<<endl;
    }
    return 0;
}

// } Driver Code Ends