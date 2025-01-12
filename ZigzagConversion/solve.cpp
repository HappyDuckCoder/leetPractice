#include <iostream> 
#include <vector>   
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        string res = "";
        vector<string> rows(numRows, "");

        int count = 0;
        bool check = true;

        for (int i = 0; i < s.size(); i++) {
            rows[count] += s[i]; 
            if (count == 0) check = true;  
            else if (count == numRows - 1) check = false;  
            count += check ? 1 : -1;
        }

        for (int i = 0; i < numRows; i++) {
            res += rows[i];
        }

        return res;
    }
};

int main() {
    string s = "PAYPALISHIRING";
    int numRows = 3;
    Solution sol;
    cout << sol.convert(s, numRows);

    return 0;
}