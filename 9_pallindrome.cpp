#include "bits/stdcpp.h"

using namespace std;
int main()
{
    string s1;
    cin >> s1;
    string s2;
    size_t i = s1.size();
    /*
    while (i--)
    {
        s2 += s1[i];
    }
    cout << s2 << endl;
    */
    // Another way to reverse a string
    while (i--)
    {
        s2.push_back(s1[i]);
    }
    cout << s2 << endl;
    if (s1 == s2)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}