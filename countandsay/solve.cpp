#include <iostream> 
#include <string>
#include <vector>
#include <map>  

using namespace std;

class Solution {
public:

    string findRLE(string str) {
        string res = "";
        int count = 1;
        for (int i = 1; i < str.size(); i++) {
            if (str[i] == str[i - 1]) {
                count++;
            } else {
                res += to_string(count) + str[i - 1];
                count = 1;
            }
        }
        res += to_string(count) + str[str.size() - 1];
        return res;
    }

    string countAndSay(int n) {
        if (n == 1) return "1";
        return findRLE(countAndSay(n - 1));
    }
};

int main() {

    Solution s;
    cout << s.countAndSay(6);

    return 0;
}