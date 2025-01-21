#include <bits/stdc++.h>
using namespace std;

void sortConsonants(string inputStr)
{
    int length = inputStr.size();
    string consonants = "";

    for (int i = 0; i < length; i++) {
        char ch = inputStr[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            consonants += ch;
        }
    }

    if (!consonants.empty()) {
        sort(consonants.begin(), consonants.end());
    }

    int consonantPtr = 0;
    for (int i = 0; i < length; i++) {
        char ch = inputStr[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            inputStr[i] = consonants[consonantPtr++];
        }
    }

    cout << inputStr;
}

int main()
{
    string inputStr = "programming";
    sortConsonants(inputStr);
    return 0;
}
