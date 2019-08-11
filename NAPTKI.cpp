#include <iostream>

using namespace std;

int main () {
    int i, n;
    int m = 0;
    int s = 0;
    cin >> n;
    int a[n];

  
  for (i = 0; i < n; i++) {
      cin >> a[i];
  }
  for (i = 0; i < n; i++) {

      
    if (a[i] > m) {
	    m = a[i];
    }
  }
    
  for (i = 0; i < n; i++) {
       
    if (a[i] < m) {
        s = s + (m - a[i]);
    }
  }

  cout << s;
  return 0;
}