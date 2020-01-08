//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    while(x<=y){
        if(x == 1){
        cout << "one" << endl;
        }else if(x == 2){
            cout << "two" << endl; 
        }else if(x == 3){
            cout << "three" << endl;
        }else if(x == 4){
            cout << "four" << endl;
        }else if(x == 5){
            cout << "five" << endl;
        }else if(x == 6){
            cout << "six" << endl;
        }else if(x == 7){
            cout << "seven" << endl;
        }else if(x == 8){
            cout << "eight" << endl;
        }else if(x == 9){
            cout << "nine" << endl;
        }else{
            if(x%2){
                cout << "odd" << endl;
            }else{
                cout << "even" << endl;
            }
        }
        x++;
    }
    return 0;
}