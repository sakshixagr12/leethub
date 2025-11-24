class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int n = cardPoints.size();
        int maxsum=0;
        for(int  i =0 ;i<k;i++){
            lsum+=cardPoints[i];
            
        }
        maxsum= lsum;
        int ridx=n-1;
        for(int j = k-1 ; j >= 0 ;j--){
            lsum-= cardPoints[j];
            rsum+=cardPoints[ridx];
            ridx--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};