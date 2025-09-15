class Solution {
public:
    int maxFreqSum(string s) {
        int vf=0,vc=0;

        unordered_map<char,int>freq;
         //unordered_map<char,int>freq2;

    //     for(char c : s){
    //         if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    //             freq1[c]++;
    //         }
    //         else{
    //             freq2[c]++;
    //         }
    //     }
    //     int 
    for(char c :s){
        freq[c]++;
    }

    for(auto i : freq){
        if(i.first=='a'||i.first=='e'||i.first=='i'||i.first=='o'||i.first=='u'){
            vf=max(vf,i.second);
        }else{
            vc=max(vc,i.second);
        }
    }

    return vf+vc;
        
 }
};