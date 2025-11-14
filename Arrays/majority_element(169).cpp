class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int a = 0;
        int count = 0;
        for(int i=0;i<size;i++){
            if(count == 0){
                a = nums[i];
            }
            if(a==nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return a;
    }
};
