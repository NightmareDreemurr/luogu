#include <bits/stdc++.h>
using namespace std;

void move_cow(int &cow_direction, int &cow_posx, int &cow_posy, vector<string> &map) {
    int temp_posx = cow_posx;
    int temp_posy = cow_posy;
    switch (cow_direction) {
        case 0:
            temp_posx--;
            break;
        case 1:
            temp_posy++;
            break;
        case 2:
            temp_posx++;
            break;
        case 3:
            temp_posy--;
            break;
    }
    if (temp_posx == -1 || temp_posy == -1 || temp_posx == 10 || temp_posy == 10 || map[temp_posx][temp_posy] == '*') {
        cow_direction = (cow_direction + 1) % 4;
        return;
    }
    cow_posx = temp_posx;
    cow_posy = temp_posy;
}

void move_farmer(int &farmer_direction, int &farmer_posx, int &farmer_posy, vector<string> &map) {
    int temp_posx = farmer_posx;
    int temp_posy = farmer_posy;
    switch (farmer_direction) {
        case 0:
            temp_posx--;
            break;
        case 1:
            temp_posy++;
            break;
        case 2:
            temp_posx++;
            break;
        case 3:
            temp_posy--;
            break;
    }
    if (temp_posx == -1 || temp_posy == -1 || temp_posx == 10 || temp_posy == 10 || map[temp_posx][temp_posy] == '*') {
        farmer_direction = (farmer_direction + 1) % 4;
        return;
    }
    farmer_posx = temp_posx;
    farmer_posy = temp_posy;
}

int main() {
    int cow_direction = 0, farmer_direction = 0, cow_posx, cow_posy, farmer_posx, farmer_posy;
    vector<string> map(10);
    for (int posx = 0; posx < 10; posx++) {
        getline(cin, map[posx]);
    }

    for (int posx = 0; posx < 10; posx++) {
        for (int posy = 0; posy < 10; posy++) {
            if (map[posx][posy] == 'C') {
                cow_posx = posx;
                cow_posy = posy;
                map[posx][posy] = '.';
            }
        }
    }

    for (int posx = 0; posx < 10; posx++) {
        for (int posy = 0; posy < 10; posy++) {
            if (map[posx][posy] == 'F') {
                farmer_posx = posx;
                farmer_posy = posy;
                map[posx][posy] = '.';
            }
        }
    }

    int count = 0;
    while (count <= 10000) {
        count++;
        move_cow(cow_direction, cow_posx, cow_posy, map);
        move_farmer(farmer_direction, farmer_posx, farmer_posy, map);

        if (cow_posx == farmer_posx && cow_posy == farmer_posy) {
            cout << count << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}
