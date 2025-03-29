#include <bits/stdc++.h>
#include <cstdlib> // for a abs()
using namespace std;

int main() {

//  A. Summation https://codeforces.com/group/phCe831sWG/contest/488701/problem/A
  // int n;
  // cin >> n;
  // int arr[n]; // Using array instead of vector
  // for (int i = 0; i < n; ++i) {
  //     cin >> arr[i];
  // }
  // long long total = 0;
  // for (int i = 0; i < n; ++i) {
  //     total += abs(arr[i]);
  // }
  // cout << total << endl;

//  B. How Much Does Daytona Cost? https://codeforces.com/group/phCe831sWG/contest/488701/problem/B
  // int t;
  // cin >> t;
  // while (t--) {
  //     int n, k;
  //     cin >> n >> k;
  //     int a[n];
  //     bool found = false;
  //     for (int i = 0; i < n; ++i) {
  //         cin >> a[i];
  //         if (a[i] == k) {
  //             found = true;
  //         }
  //     }
  //     if (found) 
  //         cout << "YES" << endl;
  //     else 
  //         cout << "NO" << endl;
  // }


// C. Good Kid https://codeforces.com/group/phCe831sWG/contest/488701/problem/C
  // int t;
  // cin >> t;
  // while (t--) {
  //   int n; cin >> n;
  //   int a[n];
  //   int minn = 0;
  //   for (int i = 0; i < n; ++i) {
  //       cin >> a[i];
  //       if(a[i] < a[minn])
  //           minn = i;
  //   }
  //   a[minn]++;
  //   long long max_product = 1;
  //   for (int i = 0; i < n; ++i) max_product *= a[i];
  //   cout << max_product << endl;
  // }


//  D. Reversing https://codeforces.com/group/phCe831sWG/contest/488701/problem/D
  // int N;
  // cin >> N;
  // int A[N];
  // for (int i = 0; i < N; ++i) {
  //     cin >> A[i];
  // }
  // for (int i = N - 1; i >= 0; --i) {
  //     cout << A[i] << " ";
  // }

//  E. Positions in array https://codeforces.com/group/phCe831sWG/contest/488701/problem/E

  // int N;
  // cin >> N;
  // int A[N];
  // for (int i = 0; i < N; ++i) {
  //     cin >> A[i];
  // }
  // for (int i = 0; i < N; ++i) {
  //     if (A[i] <= 10) {
  //         cout << "A[" << i << "] = " << A[i] << endl;
  //     }
  // }

//  F. Lowest Number https://codeforces.com/group/phCe831sWG/contest/488701/problem/F

  // int N;
  // cin >> N;
  // int A[N];
  // for (int i = 0; i < N; ++i) {
  //     cin >> A[i];
  // }
  // int min_val = A[0];
  // int min_pos = 0;
  // for (int i = 1; i < N; ++i) {
  //     if (A[i] < min_val) {
  //         min_val = A[i];
  //         min_pos = i;
  //     }
  // }
  // cout << min_val << " " << min_pos + 1 << endl;

//  G. Palindrome Array https://codeforces.com/group/phCe831sWG/contest/488701/problem/G
  // int N;
  // cin >> N;
  // int A[N];
  // for (int i = 0; i < N; ++i) {
  //     cin >> A[i];
  // }
  // bool isPalindrome = true;
  // for (int i = 0; i < N / 2; ++i) {
  //     if (A[i] != A[N - 1 - i]) {
  //         isPalindrome = false;
  //         break;
  //     }
  // }
  // cout << (isPalindrome ? "YES" : "NO") << endl;

//  H. Plus or Minus https://codeforces.com/group/phCe831sWG/contest/488701/problem/H

  // int t;
  //   cin >> t;
  //   while (t--) {
  //       int a, b, c;
  //       cin >> a >> b >> c;
  //       if (a + b == c) {
  //           cout << "+" << endl;
  //       } 
  //       else {
  //           cout << "-" << endl;
  //       }
  //   }

//  I. To My Critics https://codeforces.com/group/phCe831sWG/contest/488701/problem/I
  
  // int t;cin >> t;
  // while (t--) {
  //     int a, b, c;
  //     cin >> a >> b >> c;
  //     if (a + b >= 10 || a + c >= 10 || b + c >= 10)  cout << "YES" << endl;
  //     else cout << "NO" << endl;
  // }

//  J. Matrix  https://codeforces.com/group/phCe831sWG/contest/488701/problem/J

  // int N;
  // cin >> N;
  // int matrix[N][N];
  // for (int i = 0; i < N; ++i) {
  //     for (int j = 0; j < N; ++j) {
  //         cin >> matrix[i][j];
  //     }
  // }
  // int primary_sum = 0, secondary_sum = 0;
  // for (int i = 0; i < N; ++i) {
  //     primary_sum += matrix[i][i];
  //     secondary_sum += matrix[i][N - 1 - i];
  // }
  // int difference = abs(primary_sum - secondary_sum);
  // cout << difference << endl;

//  K. Medium Number  https://codeforces.com/group/phCe831sWG/contest/488701/problem/K

  // int t;
  // cin >> t;
  // while (t--) {
  //   int a, b, c;
  //   cin >> a >> b >> c;
  //   int sum = a + b + c;
  //   int min_val = min(a, min(b, c));
  //   int max_val = max(a, max(b, c));
  //   int medium = sum - min_val - max_val;
  //   cout << medium << endl;
  // }
}