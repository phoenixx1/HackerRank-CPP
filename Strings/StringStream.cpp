//author @Nishant

#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	stringstream strs(str);
    char ch; int val;
    vector<int> ans;
    while(strs >> val) {
        ans.push_back(val);
        strs >> ch;
    }
    return ans;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

