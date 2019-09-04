#include <iostream>
using namespace std;

int main() {
    cout << "This program will print " \
         << " the fibonacci sequence." << endl;



    cout << "Number of terms :";
    long long numT = 5;
    cin >> numT;

    long long num1 = 0, num2= 1, num3 = 0;

    for (int i = 0;i < numT; i++)
    {
        num3 = num1 + num2;
        cout << num3 << endl;
        num1 = num2;
        num2 = num3;
    }
}