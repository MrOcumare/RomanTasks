#include <iostream>
#include <string>


using namespace std;
 
int main()
{

    string array[5];
    string input_val = "";

    cin >> input_val;
    for (int i = 0; i <5; i++){
        cin >> array[i];

    }

    for (int i = 0; i <5; i++){
        if (array[i][0] == input_val[0] || array[i][1] == input_val[1]){
            cout << "YES";
            return 0;
        }
    }

     cout << "NO";

    return 0;
}
