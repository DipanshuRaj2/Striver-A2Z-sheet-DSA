// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);

//     bool newWord = true;
//     for (char c : input) {
//         if (newWord && isalpha(c)) {
//             cout << (char)toupper(c);
//             newWord = false;
//         } 
//         if(!newWord){
//             cout << (char)tolower(c);
//         }
//         if (c == ' ') {
//             newWord = true;
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
string sentence(string &name){
    string ans;
    bool newWord = true;
    for(char c : name){
        if(newWord && isalpha(c)){
            ans.push_back((char)toupper(c));
            newWord = false;
        }
        else if(!newWord){
            ans.push_back((char)tolower(c));
        }
        if(c == ' '){
            newWord = true;
        }
    }
    return ans;
}
int main()
{
    string input;
    getline(cin, input);
    cout<<sentence(input);
   return 0;
}