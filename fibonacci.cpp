#include <bits/stdc++.c>
using namespace std;
int main()
{ int n;
    cout << "Enter number of terms: ";
    cin >> n;
    int t1 = 0, t2 = 1, nextTerm, sum = 0;
  cout << "Fibonacci Sequence: ";
    for (int i = 1; i <= n; i++)
      {
        cout << t1 << " ";
        sum += t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
  cout << "\nSum of Fibonacci numbers = " << sum << endl;
    return 0;
}
