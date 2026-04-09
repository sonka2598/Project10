#include <iostream>
#include <Windows.h>

//выполнение задания 10.1

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   int size = 0;
   std::cout << "Введите размер массива: ";
   std::cin >> size;

   int* mus = new int[size];
   for(int i = 0; i < size; i++)
   {
        std::cout << "arr[";
        std::cout << i;
        std::cout << "] = ";
        std::cin >> mus[i];
   }
   std::cout << "Введённый массив: ";

   for(int i = 0; i < size; i++)
   {
         std::cout << mus[i] << " ";
   }
   delete[] mus;
   return 0;
}
