//author @Nishant

#include<bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    *a = *a + *b;
    *b = abs(*a - 2 * *b);    
}

int main(){
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl << b;
    return 0;
}