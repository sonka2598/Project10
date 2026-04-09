#include <iostream>
#include <Windows.h>

//выполнение задания 10.3

int** create_two_dim_array(int rows, int columns)
{
   int** mus = new int*[rows];
   for(int i = 0; i < rows; i++)
   {
       mus[i] = new int[columns];
   }
   return mus;
}

void fill_two_dim_array(int** arr, int row, int column)
{
   for(int i = 0; i < row; i++)
   {
       for(int j = 0; j < column; j++)
       {
           arr[i][j] = (i+1)*(j+1);
       }
   }
}

void print_two_dim_array(int** arr, int rows, int columns)
{
   std::cout << "Таблица умножения: \n";

   for(int i = 0; i < rows; i++)
   {
       for(int j = 0; j < columns; j++)
       {
          std::cout << arr[i][j] << " ";
           if(arr[i][j] < 10)
               std::cout << " ";
       }
       std::cout << "\n";
   }
}

void delete_two_dim_array(int** arr, int rows, int columns)
{
   for(int i = 0; i < rows; i++)
   {
        delete[] arr[i];
   }
   delete[] arr;
}

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   int rows = 0, columns = 0;
   std::cout << "Введите количество строк: ";
   std::cin >> rows;
   std::cout << "Введите количество столбцов: ";
   std::cin >> columns;

   int** arr = create_two_dim_array(rows, columns);
   fill_two_dim_array(arr, rows, columns);
   print_two_dim_array(arr, rows, columns);
   delete_two_dim_array(arr, rows, columns);

   return 0;
}
