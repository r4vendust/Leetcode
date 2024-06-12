#include <iostream>
#include <map>

using namespace std;

int romanToInt(string str);

int main()
{
    string str = "MCMXCIV"; // M1000 + CM900 + XC90 + IV4
    cout << romanToInt(str);

    return 0;
}

int romanToInt(string s)
{
    map<char, int> roman;
    {
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
    };

    int add = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int j = i + 1;
            if (roman[s[i]] < roman[s[j]])
            {
                add += roman[s[j]] - roman[s[i]];
                i++;
            }
            else
            {
                 add += roman[s[i]];
            }
    }
    return add;
}
