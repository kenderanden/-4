#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(0, "");
    std::cout << "Hello World!\n";
    do 
    {
        int x;
        printf("Введите число: ");
        cin >> x;
        cout << x << " * 1 = " << x * 1 << "\n";
        cout << x << " * 2 = " << x * 2 << "\n";
        cout << x << " * 3 = " << x * 3 << "\n";
        cout << x << " * 4 = " << x * 4 << "\n";
        cout << x << " * 5 = " << x * 5 << "\n";
        cout << x << " * 6 = " << x * 6 << "\n";
        cout << x << " * 7 = " << x * 7 << "\n";
        cout << x << " * 8 = " << x * 8 << "\n";
        cout << x << " * 9 = " << x * 9 << "\n";
    } while (!(_getch() == 27));
}