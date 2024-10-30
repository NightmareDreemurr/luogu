#include <bits/stdc++.h>

using namespace std;

struct process {
    double a;
    double b;
};


int main() {
    int n;
    cin >> n;
    set<int> lights_on;
    vector<process> processes;
    processes.reserve(n);
    for(int i = 0; i < n; i++) {
        cin >> processes[i].a;
        cin >> processes[i].b;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= processes[i].b; j++) {
            int light = floor(processes[i].a * j);
            if(lights_on.contains(light)) {
                lights_on.erase(light);
            } else {
                lights_on.insert(light);
            }
        }
    }
    for(int i : lights_on) {
        cout << i;
    };

    return 0;
}
