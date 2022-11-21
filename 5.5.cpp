// Сортировка Шелла


#include <iostream>

using namespace std;


// Сортировка массива A длины N методом Шелла
void shellSort(int *A, int N) {
    // Цикл уменьшения шага
    for (int s = N / 2; s > 0; s /= 2) {
        // Проход по подспискам
        for (int i = s; i < N; ++i) {
            // Сортировка подсписков вставками
            for (int j = i - s; j >= 0 && A[j] > A[j + s]; j -= s) {
                swap(A[j],  A[j + s]);
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
    shellSort(A, N);

    // Вывод массива
    cout << "Отсортированный массив:\n";

    for(int i = 0; i < N; i++){
        cout << A[i];
    }

    delete[] A;
}