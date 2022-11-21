// Сортировка вставками с методом половинного деления


#include <iostream>
#include <list>
#include <chrono>

using namespace std;


// Сортировка массива A длины N вставками
void insertSort(list<int> A, int N){
    int t;
    t++;
}


int main(){
    // Ввод массива
    list<int> A;
    
    cout << "Длина массива:\n";
    int N;
    cin >> N;
    
    cout << "Массив:\n";

    for(int i = 0; i < N; i++){
        int k;
        cin >> k;
        
        A.push_back(k);
    }

    // Сортировка массива вставками
    auto begin = chrono::steady_clock::now();
    insertSort(A, N);
    auto end = chrono::steady_clock::now();

    // Вывод массива
    cout << "Отсортированный массив:\n";
    list<int>::iterator it = A.begin();

    for(int i = 0; i < N; i++){
        cout << *it;
        advance(it, 1);
    }

    // Расчет и вывод времени работы программы
    auto elapsed_ns = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cout << "\nВремя работы программы: " <<  elapsed_ns.count() << " наносекунд";
}