#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        stringstream ss(s);
        string word;

        // Split the string into words
        while (ss >> word)
        {
            words.push_back(word);
        }

        // Reverse the order of words
        reverse(words.begin(), words.end());

        // Join the words into a single string
        string result;
        for (size_t i = 0; i < words.size(); ++i)
        {
            result += words[i];
            if (i < words.size() - 1)
            {
                result += " ";
            }
        }

        return result;
    }
};

int main()
{

    Solution s;
    cout << s.reverseWords("the sky is blue") << endl;

    return 0;
}