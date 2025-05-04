#include "bits/stdcpp.h"

using namespace std;
int main(){
    string s1;
    cin >> s1;
    for(int i =0; i< s1.size()/2; i++){
        if(s1[i] != s1[s1.size()-i-1]){
            cout<<"Not a Palindrome"<<endl;
            return 0;
        }
    }
    cout<<"Palindrome"<<endl;
    
    return 0;
}