#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, best, max = 0;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    int k, d, a, ability;
    scanf("%d/%d/%d", &k, &d, &a);
    if(k - d >= 10) {
      ability = k * (k - d) + a;
    } else if(k >= d) {
      ability = (k - d + 1) * 3 + a;
    } else {
      ability = a * 2;
    }
    if(ability > max) {
      max = ability;
      best = i;
    }
  }
  cout << best;
  return 0;
}
