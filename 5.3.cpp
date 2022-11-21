// Сортировка вставками


#include <iostream>
#include <chrono>

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

    // Сортировка массива вставками
    auto begin = chrono::steady_clock::now();
    insertSort(A, N);
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