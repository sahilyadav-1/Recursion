class Solution {
public:

    vector<int> diffWaysToCompute(string s) {
        vector<int> ans;
        for(int i = 0; i < s.length(); i++){
            
            if(s[i] == '+' || s[i] == '-' || s[i] == '*'){
                vector<int> ans1 = diffWaysToCompute(s.substr(0,i));
                vector<int> ans2 = diffWaysToCompute(s.substr(i+1));
            
        
                for(int j = 0; j < ans1.size(); j++){
                
                    for(int k = 0; k < ans2.size(); k++){
                
                        if(s[i] == '+')
                            ans.push_back(ans1[j]+ans2[k]);
                        if(s[i] == '-')
                            ans.push_back(ans1[j]-ans2[k]);
                        if(s[i] == '*')
                            ans.push_back(ans1[j]*ans2[k]);
                    }
                }        
            }
        }
        
        if(ans.size() == 0)
            ans.push_back(stoi(s));
        return ans;
    }
};
