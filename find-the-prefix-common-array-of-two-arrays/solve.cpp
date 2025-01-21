#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        int n = A.size();
        vector<int> prefix;

        // A = [1,3,2,4]
        // B = [3,1,2,4]

        for (int i = 0; i < n; i++)
        {
            int bA[10000] = {0}, bB[10000] = {0};

            for (int j = 0; j <= i; j++)
            {
                bA[A[j]]++, bB[B[j]]++;
            }

            int cnt = 0;

            for (int j = 0; j < 10000; j++)
            {
                if (bA[j] == bB[j] && bA[j] != 0 && bB[j] != 0)
                {
                    cnt++;
                }
            }

            prefix.push_back(cnt);
        }

        return prefix;
    }
};

int main()
{

    vector<int> A = {1, 3, 2, 4};
    vector<int> B = {3, 1, 2, 4};

    Solution s;

    vector<int> res = s.findThePrefixCommonArray(A, B);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}