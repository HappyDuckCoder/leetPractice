#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

class Solution
{
public:
    string simplifyPath(string path)
    {
        vector<string> stack;
        stringstream ss(path);
        string token;

        // Tách các phần trong đường dẫn bằng dấu '/'
        while (getline(ss, token, '/'))
        {
            if (token == "" || token == ".")
                continue; // Bỏ qua phần tử rỗng hoặc "."
            if (token == "..")
            {
                if (!stack.empty())
                    stack.pop_back(); // Trở về thư mục trước đó
            }
            else
            {
                stack.push_back(token); // Thêm thư mục hợp lệ vào stack
            }
        }

        // Xây dựng đường dẫn kết quả
        string res = "/";
        for (int i = 0; i < stack.size(); i++)
        {
            res += stack[i];
            if (i < stack.size() - 1)
                res += "/"; // Thêm '/' giữa các thư mục
        }

        return res;
    }
};

int main()
{
    Solution s;
    cout << s.simplifyPath("/a/./b/../../c/");
    return 0;
}
