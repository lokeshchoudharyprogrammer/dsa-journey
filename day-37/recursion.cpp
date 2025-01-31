//  solve some problem using recursion

#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);
    cout << n << " ";
}

void printEvenNumber(int n)
{
    if (n == 0)
        return;
    printEvenNumber(n - 1);
    if (n % 2 == 0)
        cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print(n);
    cout << endl;
    printEvenNumber(n);
    return 0;
}