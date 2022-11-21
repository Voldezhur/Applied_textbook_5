// Сортировка массива методом пузырька


#include <iostream>

using namespace std;


//Сортировка массива A длины N пузырьком
void bubbleSort(int* A, int N){
    bool finished;
    
    // Пока массив не отсортирован
    while(!finished){
        finished = true;

        // Цикл прохода по массиву и замены
        for(int i = 0; i < N - 1; i++){
            // Если элемент больше следующего - замена
            if(A[i] > A[i + 1]){
                swap(A[i], A[i + 1]);
                finished = false;
            }
        }
    }
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
    bubbleSort(A, N);

    // Вывод массива
    for(int i = 0; i < N; i++){
        cout << A[i];
    }

    delete[] A;
}