# FizzBuzz Program

## Overview
This C++ program implements the classic **FizzBuzz** problem, a popular coding exercise used in programming interviews and educational settings to assess fundamental programming skills. The program prompts the user to input a positive integer `N` and iterates from 1 to `N`, printing:
- "FizzBuzz" for numbers divisible by both 3 and 5,
- "Fizz" for numbers divisible by 3,
- "Buzz" for numbers divisible by 5,
- The number itself if none of the above conditions apply.

## Code
```cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0 && i % 5 == 0) cout << "FizzBuzz" << endl;
        else if (i % 3 == 0) cout << "Fizz" << endl;
        else if (i % 5 == 0) cout << "Buzz" << endl;
        else cout << i << endl;
    }
    // Pause the console before exiting (for Windows)
    cout << "Press Enter to exit...";
    cin.ignore(); // Clear input buffer
    cin.get(); // Wait for user input
    return 0;
}
```

## Importance in Programming
The FizzBuzz problem is widely used for several reasons:

1. **Fundamental Concepts**: Introduces beginners to core programming constructs:
   - **Input/Output**: Using `cin` for input and `cout` for output.
   - **Loops**: Iterating with a `for` loop over a range.
   - **Conditional Statements**: Using `if`, `else if`, and `else` for logic.
   - **Modulus Operator**: Checking divisibility with `%`.

2. **Logical Thinking**: Requires combining multiple conditions (e.g., divisibility by both 3 and 5) and prioritizing them correctly.

3. **Interview Tool**: A standard question to assess a candidate’s ability to write clean, functional code under simple constraints.

4. **Debugging Practice**: Encourages attention to detail, such as checking divisibility by both 3 and 5 before individual conditions to avoid logical errors.

5. **Scalability**: Can be extended with more complex conditions or larger datasets to explore optimization techniques.

## How to Run
1. Compile the code using a C++ compiler:
   ```bash
   g++ FizzBuzz.cpp -o FizzBuzz
   ```
2. Run the executable:
   - On Linux/Mac: `./FizzBuzz`
   - On Windows: `FizzBuzz.exe`
3. Enter a positive integer when prompted.
4. The program outputs the FizzBuzz sequence up to the input number.
5. On Windows, press Enter to exit the program.

## Platform Notes
- The `cin.ignore()` and `cin.get()` lines pause the console on Windows to keep the output visible before the console closes. These lines can be removed for Linux or Mac environments if not needed.
- The `.gitignore` file ensures that compiled binaries (e.g., `FizzBuzz.exe`) are excluded from version control.

## Repository Contents
- `FizzBuzz.cpp`: The C++ source code for the FizzBuzz program.
- `README.markdown`: This documentation.
- `.gitignore`: Excludes compiled binaries like `FizzBuzz.exe`.