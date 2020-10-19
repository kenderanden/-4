// 02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    std::cout << "Hello World!\n";
    cout << "Ax = B\n";
    cout << "A : ";
    int A = 0, B = 0;
    cin >> A;
    cout << "B : ";
    cin >> B;
    cout << "x = " << B/A; 
}