//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    int q, marks, op;
    string name;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> op;
        if(op==1){
            cin >> name >> marks;
            map<string,int>::iterator it = m.find(name);
            if(it!=m.end()){
                int temp = m[name]+marks;
                m.erase(name);
                m.insert(make_pair(name,temp));
            }else{
                m.insert(make_pair(name,marks));
            }
            
        }else{
            cin >> name;
            map<string,int>::iterator it = m.find(name);
            if(op==2){
                if(it!=m.end()){
                    m.erase(name);
                }
            }else{
                if(it!=m.end()){
                    cout << m[name] << endl;
                }else{
                    cout << 0 << endl;
                }
            }
        }
    }
    return 0;
}