#include <iostream>

using namespace std;

int main() {
    long long int n, m, a;
    long long int l = 0;
    long long int k = 0 ;
    cin >> n >> m >> a;

    if (n % a != 0) {
        l = n / a + 1; 
    } else {
        l = n / a;
    }

    if (m % a != 0) {
        k = m / a + 1; 
    } else {
        k = m / a; 
    }

    cout << l * k;
    return 0;
}