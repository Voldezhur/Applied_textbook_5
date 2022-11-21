// Сортировка шейкерным алгоритмом


#include <iostream>

using namespace std;


// Сортировка массива A длины N шейкерным методом
void shakerSort(int* A, int N){
    bool finished;
    int j = N, rightBorder = N, i = 0, leftBorder = 0, r, l;
    
    // Пока массив не отсортирован
    while(!finished){
        finished = true;

        // Цикл прохода по массиву вправо
        for(i = leftBorder; i < rightBorder - 1; i++){
            // Если элемент больше следующего - замена
            if(A[i] > A[i + 1]){
                swap(A[i], A[i + 1]);
                finished = false;
                r = i;

                // вывод массива для дебага
                /*
                cout << "Вправо ";
                for(int d = 0; d < N; d++){
                    cout << A[d];
                }
                cout << '\n';*/
            }
        }
        
        // если массив еще не отсортирован, перемещение границы на место последней перестановки
        if(finished) break;
        rightBorder = r + 1;

        // Цикл прохода по массиву влево
        for(j = rightBorder; j >= leftBorder + 1; j--){
            // Если элемент мешьне предыдущего - замена
            if(A[j] < A[j - 1]){
                swap(A[j], A[j - 1]);
                finished = false;
                l = j;

                // вывод массива для дебага
                /*
                cout << "Влево ";
                for(int d = 0; d < N; d++){
                    cout << A[d];
                }
                cout << '\n';*/
            }
        }

        // если массив еще не отсортирован, перемещение границы на место последней перестановки
        if(finished) break;
        leftBorder = l - 1;
    }
    cout << '\n';
}


int main(){
    // Ввод массива
    int* A = new int;
    
    cout << "Длина массива:\n";
    int N;
    cin >> N;
    
    cout << "Массив:\n";

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    // Сортировка массива пузырьком
    shakerSort(A, N);

    // Вывод массива
    for(int i = 0; i < N; i++){
        cout << A[i];
    }

    delete[] A;
}