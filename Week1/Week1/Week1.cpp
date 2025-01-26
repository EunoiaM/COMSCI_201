// Week1.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Malkuyah's Project
Project: Week 1 introduction
*/

#include <iostream>
#include<array>
using namespace std;

int largest(int a, int b, int c) {
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
};

/*
* Using ChatGPT to generate a program that sorts 4 inputs.
Prompt:
Write a function in cpp that takes in 4 int, and then the out put is to sorted array that is in ascending order

*/
//got:  (merged the 2 main))
#include <iostream>
using namespace std;

void sortFourIntegers(int a, int b, int c, int d) {
    int arr[4] = { a, b, c, d }; // Store the integers in an array

    // Manual sorting using a simple bubble sort algorithm
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    //merge starts here

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //end

}









int main()
{
    cout << "Hello World!\n";

    
    int obj1, obj2, obj3;

    cout << "Please enter 3 values:";
    cin >> obj1 >> obj2 >> obj3;
    cout << "The largest value is: " << largest(obj1, obj2, obj3) << endl;

    //pre: none
    //post: input 4 numbers and put in ascending order

    
    
    
    int a, b, c, d;
    cout << "Enter four integers: ";
    cin >> a >> b >> c >> d;

    sortFourIntegers(a, b, c, d);

    return 0;


}
