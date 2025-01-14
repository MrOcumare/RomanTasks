/*
Сортировка пузырьком / Bubble sort

Будем идти по массиву слева направо. 
Если текущий элемент больше следующего, меняем их местами. 
Делаем так, пока массив не будет отсортирован. 
Заметим, что после первой итерации самый большой элемент будет находиться в конце массива, 
на правильном месте. 
После двух итераций на правильном месте будут стоять два наибольших элемента, и так далее. 
Очевидно, не более чем после n итераций массив будет отсортирован. 
Таким образом, асимптотика в худшем и среднем случае – O(n^2), в лучшем случае – O(n).
 */

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