#include <iostream>
using namespace std;

int main(){
    int number = 1;
    int count;
    cout << "Enter a number" << endl;
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        if(number < 0){
            cout << "No factorials for negative numbers" << endl;
        }
        else{
            number = number * i;
        }
    }
    cout << "The factorial is " << number << endl;
    
}