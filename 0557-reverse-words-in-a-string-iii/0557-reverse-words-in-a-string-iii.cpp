class Solution {
public:
  void rev(char *arr, int start, int end)
  {

    while (start <= end)
    {

        swap(arr[start], arr[end]);
        start = start + 1;
        end = end - 1;
    }
 }







    string reverseWords(string s)
 {

    int start = 0;
    int end = s.size() - 1;

    for (int i = 0; i < s.size(); i++)
    {

        if (s.at(i) == ' ' || i == s.size() - 1)
        {
            end = i - 1;
            if (i == s.size() - 1)
            {
                end = i;
            }

            rev(&s[0], start, end);
            start = i + 1;
        }
    }
    cout << s;

    return s;
    }  
};