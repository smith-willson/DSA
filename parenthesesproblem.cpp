#include <iostream>
#include <stack>
#include <string>
using namespace std;

class solution
{
public:
    bool isvalid(string str)
    {
        stack<char> st;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                st.push(str[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }

                if ((st.top() == '(' && str[i] == ')') ||
                    (st.top() == '{' && str[i] == '}') ||
                    (st.top() == '[' && str[i] == ']'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main()
{
    solution obj;

    string str;
    cout << "Enter brackets: ";
    cin >> str;

    if (obj.isvalid(str))
    {
        cout << "Valid brackets!" << endl;
    }
    else
    {
        cout << "Invalid brackets!" << endl;
    }

    return 0;
}
