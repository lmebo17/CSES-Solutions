#include <bits/stdc++.h>
using namespace std;
 
#define all(x) (x).begin(),(x).end()
 
void log(bool flag){
    cout << (flag ? "YES" : "NO") << endl;
}

void solve() {
    string str; cin >> str;
    int arr[26];
    for(int i = 0; i < 26; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < str.size(); i++){
        arr[str[i] - 'A']++;
    }

    int odds = 0;
    for(int i = 0; i < 26; i++){
        odds += arr[i] % 2;
    }

    if(odds > 1){
        cout << "NO SOLUTION" << endl;
        return;
    }

    string result = "";

    for(int i = 0; i < 26; i++){
        if(!arr[i]) continue;
        char ch = (char)('A' + i); 
        string tmp = "";
        for(int j = 0; j < arr[i]; j++){
            tmp += ch;
        }
        if(arr[i] % 2){
            result = result.substr(0, result.size()/2) + tmp + result.substr(result.size()/2);
        } else if(arr[i]){
            result = tmp.substr(0, tmp.size()/2) + result + tmp.substr(tmp.size()/2);
        }
        
    }

    cout << result << endl;

}
 
int main() {
    int t; t = 1;
    while (t--) {
        solve();
    }
}
