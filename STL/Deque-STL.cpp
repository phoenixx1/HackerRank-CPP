//author @Nishant

#include <iostream>
#include <deque>
#include<algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
    deque<int> q;
    for(int i=0; i<n; i++){
        int x = arr[i];
        q.push_back(x);
        while(q.size() > k)
            q.pop_front();
        if(q.size() == k){
            int max = *max_element(q.begin(), q.end());
            cout << max << " ";
        }
    }
    cout << endl;

//     std::deque<int> Qi(k); 
  
//     /* Process first k (or first window) elements of array */
//     int i; 
//     for (i = 0; i < k; ++i) { 
//         // For every element, the previous smaller elements are useless so 
//         // remove them from Qi 
//         while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
//             Qi.pop_back(); // Remove from rear 
  
//         // Add new element at rear of queue 
//         Qi.push_back(i); 
//     } 
  
//     // Process rest of the elements, i.e., from arr[k] to arr[n-1] 
//     for (; i < n; ++i) { 
//         // The element at the front of the queue is the largest element of 
//         // previous window, so print it 
//         cout << arr[Qi.front()] << " "; 
  
//         // Remove the elements which are out of this window 
//         while ((!Qi.empty()) && Qi.front() <= i - k) 
//             Qi.pop_front(); // Remove from front of queue 
  
//         // Remove all elements smaller than the currently 
//         // being added element (remove useless elements) 
//         while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
//             Qi.pop_back(); 
  
//         // Add current element at the rear of Qi 
//         Qi.push_back(i); 
//     } 
  
//     // Print the maximum element of last window 
//     cout << arr[Qi.front()]; 
//
}

int main(){
    int t;
    cin >> t;
    while (t > 0){
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}