class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i = 0;

        while(true){
            char curr_chr = 0;
            for(auto str:strs){
                if(i>=str.size()){
                    curr_chr = 0;
                    break;
                }

                if(curr_chr == 0){
                    curr_chr = str[i];
                }else if(curr_chr != str[i]){
                    curr_chr = 0;
                    break;
                }
            }
            if(curr_chr == 0 ){
                break;
            }
            ans.push_back(curr_chr);
            i++;
        }
        return ans;
    }
};
