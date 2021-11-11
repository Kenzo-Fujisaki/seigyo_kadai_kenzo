#include <iostream>
using namespace std;

int main() {
int a;
    cin >> a;
    if (a%3 == 0 && a%5 == 0){
        cout << "FizzBuzz" << endl;
    }
    else if (a%3 == 0){
        cout << "Fizz" << endl;
    }
    else if (a%5 == 0){
        cout << "Buzz" << endl;
    }
    else {
        cout << a << endl;
    }
}