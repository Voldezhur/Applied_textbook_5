// Сортировка выбором


#include <iostream>
#include <chrono>

using namespace std;


// Сортировка массива A длины N выбором
void choiceSort(int* A, int N){    
    // Главный цикл
    for(int i = 0; i < N; i++){
        // Нахождение минимального элемента массива и его индекса
        int minimal = A[i], minIndex = i, j = i + 1;
        
        for(j; j < N; j++){
            if(A[j] < minimal){
                minimal = A[j];
                minIndex = j;
            }
        }

        swap(A[i], A[minIndex]);
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

    // Сортировка массива выбором
    auto begin = chrono::steady_clock::now();
    choiceSort(A, N);
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