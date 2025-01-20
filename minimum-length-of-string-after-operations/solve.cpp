#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool check(int index, string s)
    {
        bool bool1 = false, bool2 = false;
        for (int i = 0; i < index; i++)
        {
            if (s[i] == s[index])
            {
                bool1 = true;
                break;
            }
        }
        for (int i = index + 1; i < s.length(); i++)
        {
            if (s[i] == s[index])
            {
                bool2 = true;
                break;
            }
        }

        return bool1 && bool2;
    }

    string removeLeftRight(int index, string s)
    {
        string res = "";

        int t = -1;
        for (int i = 0; i < index; i++)
        {
            if (s[i] == s[index])
            {
                t = i;
            }
        }
        for (int i = 0; i < index; i++)
        {
            if (i == t)
                continue;
            else
                res += s[i];
        }

        res += s[index];

        for (int i = index + 1; i < s.length(); i++)
        {
            if (s[i] == s[index])
            {
                t = i;
                break;
            }
        }
        for (int i = index + 1; i < s.length(); i++)
        {
            if (i == t)
                continue;
            else
                res += s[i];
        }

        return res;
    }

    int minimumLength(string s)
    {
        int index = 0;

        for (int i = 0; i < s.length(); i++)
        {
            while (check(i, s))
            {
                s = removeLeftRight(i, s);
            }
        }

        return s.length();
    }
};

int main()
{

    Solution s;

    string s1 = "abaacabd";

    cout << s.minimumLength(s1) << endl;

    return 0;
}