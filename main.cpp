#include <iostream>

/*
input: a 0-terminated newline-delimited sequences of integers from standard input
output: print to standard output the number of even numbers in the input sequence
*/

// never "using namespace std;"
using std::cin, std::cout, std::endl;

void count_evens();

int main() {
    // recipe for reading 0-terminated sequence of integers from standard input
    //     warning: integer overflow is a hazard
    int number;
    cin >> number;
    while (number != 0) {
        cout << "got: " << number << endl;
        cin >> number;
    }

    // TODO(student): modify/augment the code above to count the even numbers.
}

// ritchey's solution
void count_evens() {
    int evens_cnt = 0;
    int number;
    cin >> number;
    while (number != 0) {
        if (number % 2 == 0) {
            evens_cnt++;
        }
        cin >> number;
    }
    cout << evens_cnt << endl;
}