#include <iostream>
#include <string>  
using namespace std;

int main() 
{
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    char s[] = "hello_how_are_you";
    string str = "hello";  
    string s3 = str + "how";  

    str.push_back('h');  // push_back takes a character, not a string
    str.pop_back();  // Removes the last character

    cout << arr << endl;  // Output the character array
    cout << s << endl;  // Output the C-string

    // To get the size of the array 'arr', you need to calculate it
    cout << "Size of arr: " << sizeof(arr)/sizeof(arr[0]) << endl;

    cout << str << endl;  // Output the string

    string s1;  // Declare a string variable
    getline(cin, s1);  // Read a line from the input into s1
    cout << s1 << endl;  // Output the string

    return 0;  // Indicate that the program ended successfully
}