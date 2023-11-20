class Solution {
public:
    
    bool solve(string &s, string &p, int i, int j,vector<vector<int>>&dp){
        if( i == s.length() && j == p.length())
            return true;
        
        if( i == s.length() ){
            for(int index = j; index < p.length(); index++){
                if(p[index] != '*')
                    return false;
            }
            return true;
        }
        
        if( j == p.length())
            return false;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        bool ans = false;
        
        if(p[j] == '?'){
            if(solve(s,p,i+1,j+1,dp)){
                ans = true;
            }    
        }
        
        else if(p[j] == '*'){
            if(solve(s,p,i,j+1,dp))
                ans = true;
            if(solve(s,p,i+1,j+1,dp))
                ans = true;
            if(solve(s,p,i+1,j,dp))
                ans = true;
        }
        
        else{
            if(s[i]==p[j] && solve(s,p,i+1,j+1,dp))
                ans = true;
        }
        dp[i][j] = ans;
        return ans;
    }
    
    bool isMatch(string s, string p) {
        int x = s.size(), y = p.size();
        vector<vector<int>> dp(x,vector<int> (y,-1));
        return solve(s,p,0,0,dp);
    }
};
