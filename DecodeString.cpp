class Solution {
public:
    
    string decodedString(string& s, int& i){
        string ans;
        
        while(i < s.length() && s[i] != ']'){
            
            if(isdigit(s[i])){
                int k = 0;
                while(i < s.length() && isdigit(s[i])){
                    k = k*10 + s[i++] - '0';
                }
                i++;
                
                string str = decodedString(s,i);
                
                while(k--)
                ans += str;
                
                i++;
            }
            else{
                ans += s[i++];
            }
        }
        return ans;
    }
    
    string decodeString(string s) {
        int i = 0;
        return decodedString(s,i);
    }
};
