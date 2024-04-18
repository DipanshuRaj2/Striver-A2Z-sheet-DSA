// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     string capitalizeTitle(string title) {
//         string ans = "";
//         bool newWord = true;
//         vector<string>words;
//         stringstream ss(title);
//         for(string ele : title){
//             if(ele == " "){
//                 words.push_back(ele);
//             }
//         }
//         for(string name : words) cout<< name <<" ";

//         for(char c: title){
//             if(newWord && isalpha(c)){
//                 ans.push_back((char)toupper(c));
//                 newWord = false;
//             }
//             else if(!newWord){
//                 ans.push_back((char)tolower(c));
//             }
//             if(c == ' '){
//                 newWord = true;
//             }
//         }
//         return ans;
//     }
// };
// int main()
// {
//     Solution sol;
//     string name = "capiTalIze tHe titLe";
//     cout<<sol.capitalizeTitle(name);

//    return 0;
// }



// type 2 question of string 
// #include<bits/stdc++.h>
// using namespace std;
// string capitalizeTitle(string title) {
//         stringstream iss(title);
//         string word;
//         string result;
        
//         while(iss>>word){
//             if(word.length()==1 || word.length()==2)
//             {
//                 transform(word.begin(),word.end(),word.begin(),::tolower);
//             }
//             else{
//                  word[0] = toupper(word[0]);
//                 transform(word.begin()+1,word.end(),word.begin()+1,::tolower);
//             }
        
//         if (!result.empty()) {
//                 result += " ";
//             }
//             result += word;
        
//         }
//     return result;

// }
// int main()
// { 
//     string name = "my name is dipanshu raj";
//     string ans = capitalizeTitle(name);
//     cout<<ans;
//    return 0;
// }