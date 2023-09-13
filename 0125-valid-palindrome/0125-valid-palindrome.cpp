class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    vector<char> faar;
    vector<char> faarcpy;

    int st = 0;

    while (st < s.size())
    {

        if (isalpha(s[st]) || isdigit(s[st]))
        {
            faar.push_back(s[st]);
        }
        st++;
    }
    faarcpy = faar;

    reverse(faar.begin(), faar.end());
    if (faar == faarcpy)
    {
        return true;
    }else {
        return false;
    }
        
    }
};