//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int q, temp, op;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> op >> temp;
        set<int>::iterator it = s.find(temp);
        if(op==1){
            s.insert(temp);
        }else if(op==2){
            if(it!=s.end()){
                s.erase(temp);
            }
        }else{
            if(it!=s.end()){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}