#include <iostream>
 
using namespace std;
 
int main()
{
    int m, n, k;
    cin >> n >> m >> k;
    if (m < n || k < n){
        cout << "No";
    }else{
        cout << "Yes";
    }
    return 0;
}


