#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  if(a + b >= k) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }
  if(a + c >= k) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }
  if(b + c >= k) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }
  return 0;
}
