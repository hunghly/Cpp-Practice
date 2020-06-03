#include <stdio.h>
#include <iostream>

using namespace std; // this line of code will keep the namespace as std for in/outputs

int main()
{
    // printf("hello world\n");
    // std::cout << "Hello World!\n";
    // cout << "Hello World!\n";
    // cout << "Hello my name is Hung and I am " << 32 << " years old.\n";

    /*string input;
    cout << "Please enter your name: ";
    cin >> input;
    cout << input;*/

    // string name, age;
    // cout << "Please enter a name: ";
    // printf("Please enter your name: ");
    // cin >> name;
    // cout << "Please enter an age: ";
    // printf("Please enter your age: ");
    // cin >> age;
    // cout << "Hi my name is " << name << " and I am " << age << " years old.";

    // bool isCoding = true;
    // cout << "Am I coding? " << isCoding;

    // program to calculate the temperature from F -> C
    double tempf;
    double tempc;

    // Ask the user
    std::cout << "Enter the temperature in Fahrenheit.";
    std::cin >> tempf;

    tempc = (tempf - 32) / 1.8;

    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}