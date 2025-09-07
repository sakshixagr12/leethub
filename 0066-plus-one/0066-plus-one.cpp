class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        // int i =0;
        // int j =digits.size()-1;
        // int last=digits[j];
        // last=last+1;
        
        // return digits;
        int n=digits.size();
        // if(digits[n-1]==9){
        //     digits[n-1]=1;
        //     digits.push_back(0);
        // }else{

        // digits.back()+=1;
        // }
        // return digits;
//         int num=0;
//         for(int i =0;i<n;i++){
//             num=num*10+digits[i];
//         }
//         digits.clear();
//         num+=1;
//         int m;
//         while(num!=0){
//             m=num%10;
//             digits.push_back(m);
//             num/=10;

//         }
//         reverse(digits.begin(),digits.end());
        
// return digits;
for(int i =n-1;i>=0;i--){
    if(digits[i]<9){
        digits[i]++;
        return digits;
    }
    digits[i]=0;
}
digits.insert(digits.begin(),1);
return digits;

    }
};