/*
Project 1: Using zyLabs
This source file performs simple arithmetic calculations.
However, some of them evaluate incorrectly.
If you run the tests you will see that some of them will fail.
*/

#include <iostream>
#include <string>

using namespace std;

int add(int num1, int num2)
{
    // Adds num1 to num2
    return num1 + num2;
}
int subtract(int num1, int num2)
{
    // Subtracts num1 from num2
    return num2 - num1;
}
int multiply(int num1, int num2)
{
    // Multiply num1 and num2
    // return num1 **;
    return num1 * num2;
}
int divide(int num1, int num2)
{
    // Divides num2 by num1
    return num2 / num1;
}
int int_to_string(int num)
{
    string x = "";
    for (int i = 0; i < x.size(); ++i)
    {
        if (num == num)
        {
            cout << num << endl;
        }
    }
    return num;
}

int main()
{
    cout << "Hello World!\n";
}