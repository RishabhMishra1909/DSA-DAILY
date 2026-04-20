class Solution {
public:

    // ENCODE
    string encode(vector<string>& s) {
        string res = "";

        for(string str : s){
            res += to_string(str.size()) + "#" + str;
        }

        return res;
    }

    // DECODE
    vector<string> decode(string& s) {
        vector<string> res;
        int i = 0;

        while(i < s.size()){
            int j = i;

            // find '#'
            while(s[j] != '#'){
                j++;
            }

            // length of string
            int len = stoi(s.substr(i, j - i));

            // extract string
            string word = s.substr(j + 1, len);
            res.push_back(word);

            // move pointer
            i = j + 1 + len;
        }

        return res;
    }
};