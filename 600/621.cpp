#include<iostream>
using namespace std;

void resolver() {
  int n;
  cin >> n;
  if (n % 2 == 0) { cout << n + 1 << "\n"; }
  else { cout << n - 1 << "\n"; }
}


int main() {
  
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    resolver();
  }
  return 0;
}