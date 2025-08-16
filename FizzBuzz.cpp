#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (i % 3 == 0)
            cout << "Fizz" << endl;
        else if (i % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << i << endl;
    }

    // Pause the console before exiting (for Windows)
    cout << "Press Enter to exit...";
    cin.ignore(); //clear buffer 
    cin.get(); // wait for input

    return 0;
}