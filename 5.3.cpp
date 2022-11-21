// Сортировка вставками


#include <iostream>

using namespace std;


// Сортировка массива A длины N вставками
void insertSort(int* A, int N){
    // Главный цикл
    for(int i = 1; i < N; i++){
        // Цикл поиска места для вставки
        for(int j = i; j > 0 && A[j - 1] > A[j]; j--){
            swap(A[j - 1], A[j]);
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
    insertSort(A, N);

    // Вывод массива
    cout << "Отсортированный массив:\n";

    for(int i = 0; i < N; i++){
        cout << A[i];
    }

    delete[] A;
}