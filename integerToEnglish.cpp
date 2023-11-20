class Solution {
public:
    
    string oneToNineteen[19] ={"One","Two","Three","Four","Five","Six","Seven",
                               "Eight","Nine","Ten","Eleven","Twelve","Thirteen",
                               "Fourteen","Fifteen","Sixteen","Seventeen",
                               "Eighteen","Nineteen"};
    
    string tenner[8] = {"Twenty","Thirty","Forty","Fifty","Sixty",
                        "Seventy","Eighty","Ninety"};
    
    string integerToEnglish(int num){
        
        if(num >= 1000000000)
            return integerToEnglish(num/1000000000) + " Billion" + integerToEnglish(num%1000000000);
        
        if(num >= 1000000)
            return integerToEnglish(num/1000000) + " Million" + integerToEnglish(num%1000000);
    
        if(num >= 1000 )
            return integerToEnglish(num/1000) + " Thousand" + integerToEnglish(num%1000);
        
        if(num >= 100)
            return integerToEnglish(num/100) + " Hundred" + integerToEnglish(num%100);
        
        if(num > 20)
            return " " + tenner[num/10 -2] + integerToEnglish(num%10);
        if(num > 0)
            return " " + oneToNineteen[num - 1];
        
        return "";
    }
    
    string numberToWords(int num) {
        
        if(num == 0)
            return "Zero";
        string ans = integerToEnglish(num);
        
        string result = ans.substr(1,ans.length()-1);
        
        return result;
    }
};
