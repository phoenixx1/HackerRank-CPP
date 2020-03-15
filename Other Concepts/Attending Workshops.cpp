//author @Nishant

#include <bits/stdc++.h>

using namespace std;

struct Available_Workshops{
    vector<pair<int, int>> x;
};

Available_Workshops *initialize(int *start_time, int*duration, int n){
    auto temp = new Available_Workshops;
    temp->x.resize(n);
    for(int i=0; i<n; i++){
        temp->x[i] = {start_time[i] + duration[i], duration[i]};
    }
    return temp;
} 

int CalculateMaxWorkshops(Available_Workshops *values){
    sort(values->x.begin(), values->x.end());
    int currMax = 0, count = 0;
    for(int i=0; i<values->x.size(); i++){
        if(values->x.at(i).first - values->x.at(i).second >= currMax){
            count++;
            currMax = values->x.at(i).first;
        }
    }
    return count;
}

int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
