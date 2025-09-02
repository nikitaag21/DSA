class Solution {
public:
    int maxDepth(string s) {
        int cD = 0;
        int maxDepth = 0;

        for(char c:s){
            if(c == '('){
                cD++;
            }
            if(cD>maxDepth){
                maxDepth = cD;
            }
            if(c == ')'){
                cD--;
            }
        }
        return maxDepth;
    }
};
