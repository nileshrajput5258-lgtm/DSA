class Solution {
public:
    bool backspaceCompare(string s, string t) {
     int i = 0;
     int j = 0;
     string S;
     string T;
     while(i < s.size()){
     if(s[i] == '#'){
        if(!S.empty()){
            S.pop_back();
            i++;
            }
            else{
                i++;
            }
     }
     else{
        S.push_back(s[i]);
        i++;
     }
     }
     while(j < t.size()){
        if(t[j] == '#'){
            if(!T.empty()){
            T.pop_back();
            j++;
            }
            else{
                j++;
            }
        }
        else{
            T.push_back(t[j]);
            j++;
        }
     }
     if(S == T){
        return true;
     }
     else{
        return false;
     }
    }
};