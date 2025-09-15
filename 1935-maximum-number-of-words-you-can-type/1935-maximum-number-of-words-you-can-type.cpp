class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        //int count=0;
        // int n = text.size();
        // fofr(int i=0;i<n;i++){
            //int i=0;

        // istringstream iss(text);
        // string word;
        // while(iss>>word){
        //     // while(i<word.size()){
        //     //     while(j<br\)
        //     // }
        //     // if (word[i]==brokenLetter[j])
        //     for(char c: brokenLetters){
        //         if(text.find(c)==string::npos){
        //             count=0;
        //         }else{
        //             count++;
        //         }
        //     }

        int count=0;
        istringstream iss(text);
        string word;

        while(iss>>word){
            bool ok=false;
            for(char c : brokenLetters){
                if(word.find(c)!=string::npos){
                    ok=true;
                    break;
                }
            }

            if(!ok){
                count++;

            }
        }
        return count;


            
        }

        
//return count;
        
    
};