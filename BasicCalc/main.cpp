# include <iostream>


using namespace std;

int main()
{
    // Asking the user for two numbers
    cout << "Hello, Please Enter Two Numbers to Apply Calculations on." << endl;
    int num1 = 0;
    int num2 = 0;
    cout << "Number 1:" << endl;
    cin >> num1;
    cout << "Number 2:" << endl;
    cin >> num2;


    // Asking the user for the operation to perform
    cout << "What is the operation you want to perform, multiply(m), divide(d), add(a), subtract(s) or mod(o)?" << endl;
    char Operation;
    cin >> Operation;

    //Performing Calculations
    if (Operation == 'm')
    {
        cout << num1 << " x " << num2 << " = " << num1 * num2;
    }
    else if (Operation == 'd')
    {
        cout << num1 << " / " << num2 << " = " << num1 / num2;
    }
    else if (Operation == 'a')
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    }
    else if (Operation == 's')
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2;
    }
    else if (Operation == 'o')
    {
        cout << num1 << " % " << num2 << " = " << num1 % num2;
    }
}