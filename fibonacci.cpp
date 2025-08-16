#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n <= 1) return n;
    return fibonacci(n - 1) ;
}

int main() 
{
    int n;
    cout << "type a number: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
