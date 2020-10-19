

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    std::cout << "Hello World!\n";
    int a, b, c, x;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;
    int dis = b * b - 4 * a * c;
    cout << "x1 = " << (-1*b + sqrt(dis)) / (2 * a) << "\n";
    cout << "x2 = " << (-1*b - sqrt(dis)) / (2 * a);
}
