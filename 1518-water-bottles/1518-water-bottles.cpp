class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles;
        int n,remainder;
        while(numBottles >= numExchange)
{
     n=numBottles/numExchange;
     remainder=numBottles%numExchange;
     count+=n;
     numBottles=n+remainder;
}
 return count;
        
    }
};