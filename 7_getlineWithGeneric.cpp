#include "bits/stdcpp.h"

using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character left in the buffer after reading t
    string s;
    while(t--){

        getline(cin, s);
        cout << s << endl;
    }
    return 0;
}