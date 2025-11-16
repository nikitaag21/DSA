class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalB = numBottles;
        int empty = numBottles;
        while(empty>= numExchange){
            int nB = empty/numExchange;
            totalB += nB;
            empty = empty %numExchange + nB;
        }
        return totalB;
    }
};
