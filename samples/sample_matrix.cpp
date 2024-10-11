// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "tmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  setlocale(LC_ALL, "Russian");
  cout << "Тестирование класс работы с матрицами"<< endl;
  cout << "Введите матрицы, над которыми необходимо осуществить вычисления" << endl;
  cout << "Введите размер матриц (размер должен быть положителен и не может превышать 10^4): " << endl << "Ввод:";
  int size;
  cin >> size;
  TDynamicMatrix<int> a(size), b(size), c(size);
  cout << "Теперь нужно задать матрицы" << endl;
  cout << "Задайте левую матрицу: " << endl;
  cin >> a;
  cout << endl;
  cout << "Задайте правую матрицу: " << endl;
  cin >> b;
  cout << endl;
  cout << "Теперь выберите операцию над введенными матрицами:" << endl << "1.Сложение" << endl << "2.Вычитание" << endl << "3.Умножение" << endl;
  int choice;
  cout << "Ввод:";
  cin >> choice;
  cout << endl;
  switch (choice)
  {
  case 1:
  {
	  c = a + b;
	  cout << "Matrix a = " << endl << a << endl;
	  cout << "Matrix b = " << endl << b << endl;
	  cout << "Matrix c = a + b" << endl << c << endl;
	  break;
  }
  case 2:
  {
	  c = a - b;
	  cout << "Matrix a = " << endl << a << endl;
	  cout << "Matrix b = " << endl << b << endl;
	  cout << "Matrix c = a - b" << endl << c << endl;
	  break;
  }
  case 3:
  {
	  c = a * b;
	  cout << "Matrix a = " << endl << a << endl;
	  cout << "Matrix b = " << endl << b << endl;
	  cout << "Matrix c = a * b" << endl << c << endl;
	  break;
  }
  default:
  {
	  cout << "Ошибка ввода. Перезапуск программы....";
	  return;
  }
  }
}
//---------------------------------------------------------------------------
