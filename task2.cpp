#include <iostream>
#include <cstdlib> 
#include <ctime>  
#include <clocale>
#include <Windows.h>
#include <io.h>
#include <fcntl.h>
int main() {
   // SetConsoleCP(1251);       
   // SetConsoleOutputCP(1251);
    
std::srand(std::time(0)); 
  std::setlocale(LC_ALL, "");
   
    const int n = 15;

    // Блок 3: Объявление массива и начальных значений
    int A[n];
    int max = 0;
    int nom = -1;

   //заполнение
    std::cout << "Исходный массив:\n";
    for (int i = 0; i < n; ++i) {
        A[i] = std::rand() % 100; //диапазон до 0-99
        std::cout << A[i] << " ";
    }
    std::cout << "\n\n";

    // поиск максимального элемента и его индекса 
    for (int i = 0; i < n; ++i) {
        if (A[i] > max) {
            max = A[i];
            nom = i;
        }
    }

    //  Вывод максимального значения и его порядкового номера
    std::cout << "Максимум (max): " << max << "\n";
    std::cout << "Индекс максимума (nom): " << nom << "\n\n";

    //  Цикл удаления элемента со сдвигом оставшейся части влево
    
    if (nom != -1) {
        for (int i = nom; i < n - 1; ++i) {
            A[i] = A[i + 1];
        }
    }

    //Обнуление последнего элемента 
    A[n - 1] = 0;

    // вывод измененного массива
    std::cout << "Массив после удаления максимального элемента:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
