class Solution {
public:
    bool checkIfPangram(string sent) {
        vector <bool> alph(26 , 0);
        
        for(int i=0; i<sent.size(); i++){
            alph[sent[i]-'a']=1;
        }

       for (int i = 0; i < 26; i++) {
            if (alph[i]==0) return 0;
        }
        return 1;
    
    }
};





































