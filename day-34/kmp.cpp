#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;




int main()
{
    String s = "abab"
    vector<int> lps(s.size(), 0);
    int pre = 0, suf = 1;
    while (suf < s.size())
    {

        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
    return lps[s.siez() - 1];
}