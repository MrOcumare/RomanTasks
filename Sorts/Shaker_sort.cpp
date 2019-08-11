/*
(также известна как сортировка перемешиванием и коктейльная сортировка). 
Заметим, что сортировка пузырьком работает медленно на тестах, 
в которых маленькие элементы стоят в конце (их еще называют «черепахами»). 
Такой элемент на каждом шаге алгоритма будет сдвигаться всего на одну позицию влево. 
Поэтому будем идти не только слева направо, но и справа налево. 
Будем поддерживать два указателя begin и end, обозначающих, какой отрезок массива еще 
не отсортирован. На очередной итерации при достижении end вычитаем из него единицу и 
движемся справа налево, аналогично, при достижении begin прибавляем единицу и 
двигаемся слева направо. Асимптотика у алгоритма такая же, как и у сортировки пузырьком, 
однако реальное время работы лучше.
 */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> array;
    int buffer_input;
    bool isNOSorted = true;
    int left = 1, right = 8;
    for (int i = 0; i < 9; i++){
        cin >> buffer_input;
        array.push_back(buffer_input);
    }

    while (left <= right) {
        for (int i = left; i <= right; i++){
            if (array[i] < array[i-1]){
                array[i] ^= array[i-1];
                array[i-1] ^= array[i];
                array[i] ^= array[i-1];
            }
        }
        right--;
        for (int i = right; i >= left; i--){
            if (array[i] < array[i-1]){
                array[i] ^= array[i-1];
                array[i-1] ^= array[i];
                array[i] ^= array[i-1];
            }
        }
        left++;
    }
    
        
    for (int i = 0; i < 9; i++){
        cout << array[i] << " ";
    }
    return 0;
}