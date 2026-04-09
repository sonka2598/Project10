#include <iostream>
#include <Windows.h>

//выполнение задания 10.2

double* create_array(int size)
{
   double* mus = new double[size];
   for(int i = 0; i < size; i++)
   {
       mus[i] = 0;
   }
   return mus;
}

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   int size = 0;
   std::cout << "Введите размер массива: ";
   std::cin >> size;
   std::cout << "Массив: ";

   double* arr = create_array(size);
   for(int i = 0; i < size; i++)
   {
       std::cout << arr[i] << " ";
   }
   delete[] arr;

   return 0;
}
