//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d);
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    return (((a>b?a:b)>c?(a>b?a:b):c)>d?((a>b?a:b)>c?(a>b?a:b):c):d);
}