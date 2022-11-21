// Быстрая сортировка


#include <iostream>
#include <chrono>

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

    // Быстрая сортировка массива
    auto begin = chrono::steady_clock::now();
    quickSort(A, 0, N - 1);
    auto end = chrono::steady_clock::now();

    // Вывод массива
    cout << "Отсортированный массив:\n";
    for(int i = 0; i < N; i++){
        cout << A[i];
    }

    // Расчет и вывод времени работы программы
    auto elapsed_ns = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cout << "\nВремя работы программы: " <<  elapsed_ns.count() << " наносекунд";

    delete[] A;
}