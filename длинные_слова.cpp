//
//  main.cpp
//  Ruslan
//
//  Created by Mr.Ocumare on 22/06/2019.
//  Copyright © 2019 Ilya Ocumare. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    int str_begin = 0;
    int str_end = 0;
    cin >> n;
    vector <string> arrayOfString;
    string bufferForInput = "";
    string bufferForOper = "";
    for (int i = 0; i < n; i++) {
        cin >> bufferForInput;
        arrayOfString.push_back(bufferForInput);
    }
    
    for (int i = 0; i < n; i++) {
        if (arrayOfString[i].length() > 10) {
            str_end = int(arrayOfString[i].length() - 1);
            bufferForOper = bufferForOper + arrayOfString[i][str_begin];
            bufferForOper = bufferForOper + to_string(arrayOfString[i].length() - 2);
            bufferForOper = bufferForOper + arrayOfString[i][str_end];
            arrayOfString[i] = bufferForOper;
            bufferForOper = "";
        }
        cout << arrayOfString[i] << endl;
    }

    return 0;
}
