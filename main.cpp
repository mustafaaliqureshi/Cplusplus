#include <iostream>
using namespace std;
void table (double num);
double numbers();
void mult();
void add();
void sub();
void div();
int main()
{
    double n;
    cout << "Welcome to main function\n"<<endl;
    cout << "Enter number:\n";
    cin >> n;
    table(n);
    add();
    sub();
    mult();
    div();
    numbers();
    cout <<"\n ----------------------\n"<<endl;
    return 0;

}
double numbers()
{
    // cout << "Welcome to numbers function\n"<<endl;
    double num,num2;
    cout << "enter any number:\n";
    cin >> num;
    cout << "enter another number:\n";
    cin >> num2;
    cout <<"\n ----------------------\n"<<endl;
    return num,num2;
}
void div()
{
    cout << "Welcome to division function\n"<<endl;
    double number,number2;
    number ,number2 = numbers();
    cout << " result of Division is:"<<number/number2;
    cout <<"\n ----------------------\n"<<endl;
}
void mult()
{

    cout << "Welcome to multiplication function\n"<<endl;
    numbers();
    double number,num2;
    number,num2 = numbers();
    cout << " result of Multiplication is:"<<number*num2;
    cout <<"\n ----------------------\n"<<endl;
}
void sub()
{
    double num1, num2;
    cout << "Welcome to substration function\n"<<endl;
    cout << "Enter number:\n";
    cin >> num1;
    cout << "Enter second number:\n";
    cin >> num2;
    cout << num1 <<" - " <<num2 << " = " <<num1-num2<<endl;
    cout <<"\n ----------------------\n"<<endl;
}
void add()
{
    cout << "Welcome to addition function\n"<<endl;
    cout << "Enter two numbers: \n";
    int n1, n2;
    cin >> n1 >> n2;
    cout << n1 <<" + "<<n2<<" = " << n1 + n2<<endl;
    cout <<"\n ----------------------\n"<<endl;
}
void table (double num)
{
    double t = 1;
    cout << "Welcome to table function\n"<<endl;
    for (;t<=10;t++)
    {
        cout << num << " * " << t << " = " << t*num <<endl;
    }
    cout << "operation done.\n-____________________-\n\n";
    cout <<"\n ----------------------\n"<<endl;

}