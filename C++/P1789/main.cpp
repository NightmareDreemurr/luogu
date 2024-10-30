#include <bits/stdc++.h>
using namespace std;
struct block {
    int x;
    int y;
};
int main() {
    int n, torch, glowstone;
    cin >> n >> torch >> glowstone;
    vector<vector<int>> map;
    map.resize(n);
    for (int i = 0; i < n; i++) {
        map[i].resize(n);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            map[i][j] = 1;
        }
    }
    vector<block> torches;
    vector<block> glowstones;
    torches.resize(torch);
    glowstones.resize(glowstone);
    if(torch > 0) {
        for(int i = 0; i < torch; i++) {
            int x,y;
            cin >> x >> y;
            torches[i].x = x-1;
            torches[i].y = y-1;
        }
    }
    if(glowstone > 0) {
        for(int i = 0; i < glowstone; i++) {
            int x,y;
            cin >> x >> y;
            glowstones[i].x = x-1;
            glowstones[i].y = y-1;
        }
    }
    for(auto torch : torches) {
        map[torch.x][torch.y] = 0;
        if(torch.x - 1 >= 0){
            map[torch.x-1][torch.y] = 0;
        }
        if(torch.x - 1 >= 0 && torch.y - 1 >= 0){
            map[torch.x-1][torch.y-1] = 0;
        }
        if(torch.y - 1 >= 0){
            map[torch.x][torch.y-1] = 0;
        }
        if(torch.x + 1 < n && torch.y - 1 >= 0){
            map[torch.x+1][torch.y-1] = 0;
        }
        if(torch.x + 1 < n){
            map[torch.x+1][torch.y] = 0;
        }
        if(torch.x + 1 < n && torch.y + 1 < n){
            map[torch.x+1][torch.y+1] = 0;
        }
        if(torch.y + 1 < n){
            map[torch.x][torch.y+1] = 0;
        }
        if(torch.x - 1 >= 0 && torch.y + 1 < n){
            map[torch.x-1][torch.y+1] = 0;
        }
        if(torch.x - 2 >= 0){
            map[torch.x-2][torch.y] = 0;
        }
        if(torch.y - 2 >= 0){
            map[torch.x][torch.y-2] = 0;
        }
        if(torch.x + 2 < n){
            map[torch.x+2][torch.y] = 0;
        }
        if(torch.y + 2 < n){
            map[torch.x][torch.y+2] = 0;
        }
    }
    for(auto glowstone : glowstones) {
        map[glowstone.x][glowstone.y] = 0;
        if(glowstone.x - 1 >= 0){
            map[glowstone.x-1][glowstone.y] = 0;
        }
        if(glowstone.x - 1 >= 0 && glowstone.y - 1 >= 0){
            map[glowstone.x-1][glowstone.y-1] = 0;
        }
        if(glowstone.y - 1 >= 0){
            map[glowstone.x][glowstone.y-1] = 0;
        }
        if(glowstone.x + 1 < n && glowstone.y - 1 >= 0){
            map[glowstone.x+1][glowstone.y-1] = 0;
        }
        if(glowstone.x + 1 < n){
            map[glowstone.x+1][glowstone.y] = 0;
        }
        if(glowstone.x + 1 < n && glowstone.y + 1 < n){
            map[glowstone.x+1][glowstone.y+1] = 0;
        }
        if(glowstone.y + 1 < n){
            map[glowstone.x][glowstone.y+1] = 0;
        }
        if(glowstone.x - 1 >= 0 && glowstone.y + 1 < n){
            map[glowstone.x-1][glowstone.y+1] = 0;
        }
        if(glowstone.x - 2 >= 0){
            map[glowstone.x-2][glowstone.y] = 0;
        }
        if(glowstone.x - 2 >= 0 && glowstone.y - 1 >= 0){
            map[glowstone.x-2][glowstone.y-1] = 0;
        }
        if(glowstone.x - 2 >= 0 && glowstone.y - 2 >= 0){
            map[glowstone.x-2][glowstone.y-2] = 0;
        }
        if(glowstone.x - 1 >= 0 && glowstone.y - 2 >= 0){
            map[glowstone.x-1][glowstone.y-2] = 0;
        }
        if(glowstone.y - 2 >= 0){
            map[glowstone.x][glowstone.y-2] = 0;
        }
        if(glowstone.x + 1 < n && glowstone.y - 2 >= 0){
            map[glowstone.x+1][glowstone.y-2] = 0;
        }
        if(glowstone.x + 2 < n && glowstone.y - 2 >= 0){
            map[glowstone.x+2][glowstone.y-2] = 0;
        }
        if(glowstone.x + 2 < n && glowstone.y - 1 >= 0){
            map[glowstone.x+2][glowstone.y-1] = 0;
        }
        if(glowstone.x + 2 < n){
            map[glowstone.x+2][glowstone.y] = 0;
        }
        if(glowstone.x + 2 < n && glowstone.y + 1 < n){
            map[glowstone.x+2][glowstone.y+1] = 0;
        }
        if(glowstone.x + 2 < n && glowstone.y + 2 < n){
            map[glowstone.x+2][glowstone.y+2] = 0;
        }
        if(glowstone.x + 1 < n && glowstone.y + 2 < n){
            map[glowstone.x+1][glowstone.y+2] = 0;
        }
        if(glowstone.y + 2 < n){
            map[glowstone.x][glowstone.y+2] = 0;
        }
        if(glowstone.x - 1 >= 0 && glowstone.y + 2 < n){
            map[glowstone.x-1][glowstone.y+2] = 0;
        }
        if(glowstone.x - 2 >= 0 && glowstone.y + 2 < n){
            map[glowstone.x-2][glowstone.y+2] = 0;
        }
        if(glowstone.x - 2 >= 0 && glowstone.y + 1 < n){
            map[glowstone.x-2][glowstone.y+1] = 0;
        }
    }
    auto count = 0;
    for(auto lines:map) {
        for(auto block_status : lines) {
            count += block_status;
        }
    }
    cout << count << endl;
    return 0;
}
