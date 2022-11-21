// Сортировка выбором


#include <iostream>

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

    // Сортировка массива пузырьком
    choiceSort(A, N);

    // Вывод массива
    cout << "Отсортированный массив:\n";

    for(int i = 0; i < N; i++){
        cout << A[i];
    }

    delete[] A;
}