class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal;
        int cnt=0;
        // while(ans>0){
        //     if(ans%2!=0) cnt++;
        //     ans>>1;
        // }
        for(int i =0; i<31; i++){
            if(ans&(1<<i)) cnt++;
        }
        return cnt;
    }
};