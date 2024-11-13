#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Создаем массив из 5 целых чисел

    // Выводим адрес каждого элемента массива
    for (int i = 0; i < 5; i++) {
        std::cout << "Элемент " << i << ": Значение = " << arr[i] 
                  << ", Адрес = " << &arr[i] << std::endl;
    }

    int* ptr = arr;  // Указатель на первый элемент массива
    for (int i = 0; i < 5; i++) {
    	std::cout << "Адрес ptr + " << i << " = " << (ptr + i) << " элемент " << *(ptr + i) << std::endl;
    }


    return 0;
}
