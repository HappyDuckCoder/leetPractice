#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    bool check(string t) {

        if (t.length() == 1) {
            return true;
        } else {
            if (t[0] == '0') {
                return false;
            }
        }

        long sum = 0;

        for (int i = 0; i < t.length(); i++) {
            sum = sum * 10 + t[i] - '0';
        }

        return (sum >= 0 && sum <= 255);
    }

    vector<string> restoreIpAddresses(string s) {
        
        vector<string> res;

        int n = s.length();

        for (int i = 1; i < n; i++) {

            string t1 = s.substr(0, i); 

            cout << "t1: " << t1 << endl;

            if(!check(t1)) {
                break;
            }

            for (int j = i + 1; j < n; j++) {

                string t2 = s.substr(i, j - i);

                cout << "t2: " << t2 << endl;

                if (!check(t2)) {
                    break;
                }

                for (int k = j + 1; k < n; k++) {

                    string t3 = s.substr(j, k - j); 

                    cout << "t3: " << t3 << endl;

                    string t4 = s.substr(k, n - k);

                    cout << "t4: " << t4 << endl;

                    if (check(t3) && check(t4)) {

                        string tmp = t1 + "." + t2 + "." + t3 + "." + t4;

                        cout << "tmp: " << tmp << endl;

                        res.push_back(tmp);
                    }

                }

            }
        }


        return res;
    }
};

int main() {

    string s = "101023";

    Solution sol;

    vector<string> res = sol.restoreIpAddresses(s);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }

    return 0;
}