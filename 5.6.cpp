// Быстрая сортировка


#include <iostream>

using namespace std;


// Быстрая сортировка массива A длины N 
void quickSort(int* A, int b, int e){    
    int l = b, r = e;
    
    // Опорный элемент - средний
    int m = A[(l + r) / 2];

    // Пока l не стал больше r
    while(l <= r){
        while(A[l] < m) l++;
        while(A[r] > m) r--;

        if(l <= r){
            swap(A[l++], A[r--]);
        }
    }

    // Рекурсия
    if(b < r) quickSort(A, b, r);
    if(e > l) quickSort(A, l, e);
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
    quickSort(A, 0, N - 1);

    // Вывод массива
    cout << "Отсортированный массив:\n";

    for(int i = 0; i < N; i++){
        cout << A[i];
    }

    delete[] A;
}