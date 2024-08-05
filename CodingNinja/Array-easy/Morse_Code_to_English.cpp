#include <bits/stdc++.h>
using namespace std; 
string morseToEnglish(string &morsecode) 
{
    string ans = "";
   vector<string>str={".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....",
                   "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", 
                   "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
                    "-.--", "--..", "-----", ".----", "..---", "...--", 
                    "....-", ".....", "-....", "--...", "---..", "----." };
    vector<string>original={"a","b","c","d","e","f","g","h","i","j","k","l","m","n",
                            "o","p","q","r","s","t","u","v","w","x","y","z","0","1","2",
                            "3","4","5","6","7","8","9"};

    stringstream ss(morsecode);
    string ele;
    while(ss >> ele) {
        for(int j = 0; j<str.size(); j++){
            if(ele == str[j]){
                ans = ans + original[j];
                break;
            }
        }
    }
    return ans;
}

int main(){
 string ans = "-.-. --- -.. .. -. --.";
    string res = "";

    cout<<"morseToEnglish: "<<morseToEnglish(ans);
}