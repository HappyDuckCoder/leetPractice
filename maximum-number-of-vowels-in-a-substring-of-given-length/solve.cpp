#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    int maxVowels(string s, int k)
    {
        int len = s.length(), cnt = 0;
        for (int i = 0; i < k; i++)
            if (isVowel(s[i]))
                cnt++;

        int max = cnt;

        for (int i = k; i < len; i++)
        {
            if (isVowel(s[i]))
                cnt++;
            if (isVowel(s[i - k]))
                cnt--;
            if (cnt > max)
                max = cnt;
        }
        return max;
    }
};

int main()
{

    Solution s;
    string str = "abcde";
    int k = 3;
    cout << str << "\n";
    cout << k << "\n";
    cout << s.maxVowels(str, k) << "\n";

    return 0;
}