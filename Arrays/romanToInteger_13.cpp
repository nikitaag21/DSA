class Solution {
public:
    int romanToInt(string s) {
        string romanSymbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int ans = 0;
        int i = 0;
            while(!s.empty() && i<13){
            int len = romanSymbols[i].length();
            if(s.substr(0,len)== romanSymbols[i]){
                ans += values[i];
                s = s.substr(len);
            }else{
                i++;
            }
        }
        return ans;
    }
};
