

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> array;
    int buffer_input;
    bool isNOSorted = true;
    for (int i = 0; i < 9; i++){
        cin >> buffer_input;
        array.push_back(buffer_input);
    }
    int step = 8;
    while (step > 1){
        for (int i = 0; i < 8 - step; i++){
            if (array[i] > array[i + step]){
                array[i] ^= array[i + step];
                array[i + step] ^= array[i];
                array[i] ^= array[i + step];
            }
        }
        step = step/1.247;
    }

    for (int i = 0; i < 9; i++){
        cout << array[i] << " ";
    }
    cout << '\n';

    while (isNOSorted) { 
        isNOSorted = false;
        for (int i = 1; i < 9; i++){
            if (array[i] < array[i-1]){
                isNOSorted = true;
                buffer_input = array[i];
                array[i] = array[i-1];
                array[i-1] = buffer_input;
            }
        }
    }
    for (int i = 0; i < 9; i++){
        cout << array[i] << " ";
    }
    return 0;
}