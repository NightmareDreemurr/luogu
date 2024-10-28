#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int ticket_number;
    cin >> ticket_number;
    vector<int> award = {0,0,0,0,0,0,0};

    set<int> winning_numbers;
    for(int i = 0; i < 7; i++) {
        int temp;
        cin >> temp;
        winning_numbers.insert(temp);
    }


    vector<set<int>> temp_ticket;
    temp_ticket.resize(ticket_number);

    for(int i = 0; i < ticket_number; i++) {
        for(int j = 0; j < 7; j++) {
            int temp;
            cin >> temp;
            temp_ticket[i].insert(temp);
        }
    }
    for(int i = 0; i < ticket_number; i++) {
        int rating = 0;
        for(int temp : temp_ticket[i]) {
            if(winning_numbers.count(temp)) {
                rating ++;
            }
        }
        if(rating != 0) {
            award[7-rating] += 1;
        }
    }
    for(int i : award) {
        cout << i << " ";
    }
    return 0;
}
