class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<int,int>s1;
        unordered_map<int,int>s2;
        for(int i=0;i<s.length();i++){
            s1[s[i]]++;
            s2[t[i]]++;

        }
        for(auto& it:s1){
            if(it.second!=s2[it.first]){
                return false;
            }
        }
        return true;
    }
};
