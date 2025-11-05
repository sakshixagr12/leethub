class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    vector<string>ans;
    //bool isvalid=true;
        
    unordered_set<char> row1 ={'q','w','e','r','t','y','u','i','o','p'};
    unordered_set<char> row2={'a','s','d','f','g','h','j','k','l'};
    unordered_set<char> row3={'z','x','c','v','b','n','m'};
    unordered_set<char>*rLetter;
    for(int i =0;i<words.size();i++)
    {
        bool isvalid=true;
        string letters=words[i];
        if(row1.count(tolower(letters[0]))){
            rLetter=&row1;
        }else if (row2.count(tolower(letters[0]))){
            rLetter=&row2;

        }else{
            rLetter=&row3;
        }

       
        for(int j=1;j<letters.size();j++){
            if (!rLetter->count(tolower(letters[j])))
            {
                isvalid=false;
                break;
            }
        }
        if(isvalid==true)
        ans.push_back(words[i]);
    }
    return ans;
        
    }
};