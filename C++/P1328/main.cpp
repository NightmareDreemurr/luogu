#include <bits/stdc++.h>
using namespace std;
int compare(const int x, const int y) {
    if (x == 0) {
        switch (y) {
            case 0:
                return 2;
            case 1:
                return 0;
            case 2:
                return 1;
            case 3:
                return 1;
            case 4:
                return 0;
        }
    } else if(x == 1) {
        switch (y) {
            case 0:
                return 1;
            case 1:
                return 2;
            case 2:
                return 0;
            case 3:
                return 1;
            case 4:
                return 0;
        }
    }else if(x == 2) {
        switch (y) {
            case 0:
                return 0;
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 0;
            case 4:
                return 1;
        }
    }else if(x == 3) {
        switch (y) {
            case 0:
                return 0;
            case 1:
                return 0;
            case 2:
                return 1;
            case 3:
                return 2;
            case 4:
                return 1;
        }
    }else if(x == 4) {
        switch (y) {
            case 0:
                return 1;
            case 1:
                return 1;
            case 2:
                return 0;
            case 3:
                return 0;
            case 4:
                return 2;
        }
    }
}

int main()
{
    int amount, a_length, b_length;
    cin >> amount >> a_length >> b_length;
    vector<int> a, b;
    for (int i = 0; i < a_length; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < b_length; i++) {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    int count = 0, a_score = 0, b_score = 0;
    while(count < amount) {
        int temp_result = compare(a[count % a_length], b[count % b_length]);
        if (temp_result == 0) {
            b_score++;
        } else if (temp_result == 1) {
            a_score++;
        }
        count++;
    }
    cout << a_score << " " << b_score << endl;
    return 0;
}
