//ЗАДАНИЯ 2 И 3 ЗАКОМЕНТИРОВАНЫ ДЛЯ УДОБСТВА

//Задача 1. Написать шаблон функции для поиска среднего арифметического значений массива.

#include <iostream>
using namespace std;

template<typename T> void average(T arr[], int SIZE) {

    T value = 0;
    T count = 0;

    for (int i = 0; i < SIZE; i++) {
        value += arr[i];
        count++;
    }

    T avg = value / count;
    cout << "Average: " << avg << endl;
}

int main()
{
    const int SIZE = 5;
    int arr[] = { 1,2,3,4,5 };

    average(arr, SIZE);

    return 0;
}

//Task 2------------------------------------------------------------------------------------------------
//Задача 2. Написать перегруженные шаблоны функций 
//для нахождения корней линейного(a * x + b = 0) и квадратного(a * x * x + b * x + c = 0) уравнений.
//Примечание: в функции передаются коэффициенты уравнений.

/*
#include <iostream>
using namespace std;


template<typename T> void linearEquation(T a, T b)
{
    cout << "Лінійне рівняння:\n";
    if (a != 0)
    {
        T x = -b / a;

        cout << "x = " << x << endl;
    }
    else if (b == 0)
    {
        cout << "Безліч коренів" << endl;
    }
    else
    {
        cout << "Немає коренів" << endl;
    }
}

template<typename T> void quadraticEquation(T a1, T b1, T c1)
{
    const T discriminant = b1 * b1 - 4 * a1 * c1;
    cout << "Квадратне рівняння:\n";

    if (discriminant > 0)
    {
        T x1 = (-b1 - sqrt(discriminant)) / (2 * a1);
        T x2 = (-b1 + sqrt(discriminant)) / (2 * a1);
  
        cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        T x = -b1 / (2 * a1);
        cout << "x = " << x << endl;
    }
    else
    {
        cout << "Немає дійсних коренів" << endl;
    }
}


int main()
{
    setlocale(LC_ALL, "Ukrainian");

    double a, b;
    double a1, b1, c1;

    cout << "Введіть перший коефіцієнт лінійного рівняння: ";
    cin >> a;
    cout << "Введіть другий коефіцієнт лінійного рівняння: ";
    cin >> b;

    cout << "Введіть перший коефіцієнт квадратного рівняння: ";
    cin >> a1;                          
    cout << "Введіть другий коефіцієнт квадратного рівняння: ";
    cin >> b1;
    cout << "Введіть третій коефіцієнт квадратного рівняння: ";
    cin >> c1;
    cout << endl;

    linearEquation(a, b);
    quadraticEquation(a1, b1, c1);

    return 0;
}

*/

//Task 3------------------------------------------------------------------------------------------------
//Задача 3. Написать функцию, которая принимает в качестве параметров вещественное число 
//и количество знаков после десятичной точки, которые должны остаться.
//Задачей функции является округление вышеуказанного вещественного числа с заданной точностью.


/*
#include <iostream>
using namespace std;

template<typename T> void rounding(T number, int symbols) {

    T multiplier = 1.0;// Создаем переменную multiplier, которая будет использоваться
    // для перемещения десятичной точки числа на указанное количество разрядов

    for (int i = 0; i < symbols; ++i) {//Механизм для перемещения точки
        multiplier *= 10.0;
    }

    number *= multiplier;// Умножаем исходное число на multiplier для перемещения десятичной точки

    T rounded = number + 0.5;// Округляем число, добавляя 0.5 к нему

    rounded /= multiplier;// После округления возвращаем точку в исходное положение

    cout << "Final number: " << rounded << endl;
}


int main()
{
    double number;
    int symbols;

    cout << "Enter double number: ";
    cin >> number;
    cout << "Enter the quantity required number of decimal places: ";
    cin >> symbols;

    rounding(number, symbols);

    return 0;
}

*/



