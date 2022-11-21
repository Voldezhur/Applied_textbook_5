// Быстрая сортировка


#include <iostream>

using namespace std;


// Быстрая сортировка массива A длины N 
void quickSort(int* A, int N){    
    
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
    quickSort(A, N);

    // Вывод массива
    cout << "Отсортированный массив:\n";

    for(int i = 0; i < N; i++){
        cout << A[i];
    }

    delete[] A;
}