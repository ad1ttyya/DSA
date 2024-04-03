#include <iostream>

using namespace std;
string lowercase ="";
void Lowercase(string s){
    for (int i=0; i<s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            lowercase.push_back(s[i]-'A' + 'a');
        }
        else if (s[i] >= 'a' && s[i] <= 'z'){
            lowercase.push_back(s[i]);
        }
    }
}


string reverseWords(string s) {
        int i = 0, j = 0;
        string ans = "";
        string temp = "";
        for (int p = 0; p < s.size(); p++) {
            while (s[i] == ' ') {
                i++;
            }
            j = i;
            while (s[j] != ' ') {
                temp += s[i];
                i++;
                j++;
            }
            cout<<temp;
            ans.insert(0, temp);
        }
        return ans;
    }

int main(){
    string s = "A man, a plan, a canal: Panama";
    // Lowercase(s);
    // cout<<endl<<lowercase;
    cout<<reverseWords(s);
    return 0;
}