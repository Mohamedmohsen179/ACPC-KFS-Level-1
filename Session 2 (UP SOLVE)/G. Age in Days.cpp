#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int years = n / 365;
  n %= 365;
  int months = n / 30;
  int days = n % 30;
  
  cout << years << " years\n";
  cout << months << " months\n";
  cout << days << " days\n";
  
  return 0;
}