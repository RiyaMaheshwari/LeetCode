class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> str;
        for(int i=0; i<sentence.size(); i++)
        {
            str.insert(sentence[i]);
        }
        return str.size()>=26;
    }
};