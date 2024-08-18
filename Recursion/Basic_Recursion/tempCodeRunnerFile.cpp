string removeOfa(string &str, int idx, int n)
// {
//     // base case
//     if (idx == n)
//         return "";

//     string curr = "";

//     curr = curr +  str[idx];
//     if (str[idx] == 'a'){
//         return "" + removeOfa(str, idx+1, n);
//     }
//     else{
//         return curr + removeOfa(str, idx+1, n);
//     } 
// }