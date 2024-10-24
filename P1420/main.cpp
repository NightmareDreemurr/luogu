#include <bits/stdc++.h>
using namespace std;


int main()
{
    int length;
    cin >> length;
    vector<int> arr(length);
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }
    int last = -1;
    int temp_count = 1;
    int final_count = 0;
    for(int i : arr) {
        if (i - last == 1) {
            temp_count++;
            last = i;
        } else {
            if (temp_count > final_count) {
                final_count = temp_count;
            }
            temp_count = 1;
            last = i;
        }
    }
    if (temp_count > final_count) {
        final_count = temp_count;
    }

    cout << final_count;
    return 0;
}
