#include <iostream>
#include <string>
using namespace std;

// 1108. Defanging an IP Address
// String Rotated by 2 Places

int main()
{
    string address = "1.1.1.1";
    string res = "";
    for (int a = 0; a < address.size(); a++)
    {
        if (address[a] == '.')
        {
            res += "[.]";
        }
        else
        {
            res += address[a];
        }
    }
    cout << res << endl;

    // Your code here
    if (s1.size() < 2)
    {
        return s1 == s2;
    }
    string t = s1;
    string t1 = s1.substr(0, 2);
    s1.erase(0, 2);
    s1 += t1;
    string t2 = t.substr(t.size() - 2, 2);
    t.pop_back();
    t.pop_back();
    t2 += t;
    return s1 == s2 || t2 == s2;
}

// 1832. Check if the Sentence Is Pangram

var checkIfPangram = function(sentence)
{
    let sentence_array = sentence.split("");
    let unique = new Set(sentence);

    let unique_array = [... unique];

    if (unique_array.length != = 26)
    {
        return false
    }
    else
    {

        return (unique_array.length)
    }
};

// Sort a String

let S = "edcab"
        // Output: "abcde"

function sort(s){
            // your code here

        let sort_string = s.split("").sort().join("").toString()

        console.log(sort_string)

}

console.log(sort(S))