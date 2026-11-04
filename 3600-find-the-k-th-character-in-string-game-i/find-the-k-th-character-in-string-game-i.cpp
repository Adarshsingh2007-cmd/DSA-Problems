class Solution {
public:
    char kthCharacter(int k) {
       string word = "a";
       while(word.size()<k)
       {
        string newword = "";
        for(int i=0;i<word.size();i++)
        {  char ch = word[i];
            newword = newword + ((ch == 'z')? 'a' : char(ch + 1));
        }
        word+=newword;
       } 
       return word[k-1];
    }
};