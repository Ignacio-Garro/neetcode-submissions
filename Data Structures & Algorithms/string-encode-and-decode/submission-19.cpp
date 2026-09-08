class Solution {
public:

    string encode(vector<string>& strs) {
        string sol;
        for (string s:strs) {
            string prefix = to_string(s.size()) + "#";
            sol += prefix;
            sol += s;
        }

        return sol;
    }

    vector<string> decode(string s) {
        vector<string> sol;
        string result;
        string word;

        std::stringstream ss(s);
       
        while(std::getline(ss, result, '#')){

            word.resize(std::stoi(result));
            ss.read(&word[0],std::stoi(result));

        
            std:: cout << word << endl;

            sol.push_back(word);
        }


        return sol;
    }
};
