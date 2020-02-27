//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n, q, check;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> q;
    vector<int>::iterator itr;
    for(int i=0; i<q; i++){
        cin >> check;
        itr = lower_bound(arr.begin(), arr.end(), check);
        if(arr.begin() != arr.end() && check>=*arr.begin() && check == *itr){ 
            // check if itr has not reach to end of vector, also the element to be searched is 
            // greater than first element and finally itr pointing to the query
            cout << "Yes " << itr - arr.begin() + 1 << endl;
        }else{
            cout << "No " << itr - arr.begin() + 1 << endl;
        }
    }
    return 0;
}