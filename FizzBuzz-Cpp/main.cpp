#include <iostream>
#include <iomanip>
using namespace std;

void run();
void process(int n, int limit);
void loop(int n, int limit);
void print(int n, string result);

int main() {
    run();
    return 0;
}

void run() {
    int num;
    cout << "Please enter a integer." << endl;
    cin >> num;
    process(1, num);
}

void process(int n, int limit) {
    string result;
    if (n != limit) {
        loop(n, limit);
        return;
    }

    if (n % 15 == 0) {
        result = "FizzBuzz";
        print(n, result);
        return;
    }

    if (n % 5 == 0) {
        result = "Fizz";
        print(n, result);
        return;
    }

    if (n % 3 == 0) {
        result = "Buzz";
        print(n, result);
        return;
    }

    print(n, result);
}

void loop(int n, int limit) {
    process(n, n);
    process(n + 1, limit);
}

void print(int n, string result) {
    cout << setfill('0') << right << setw(4) << n << ": " << result << endl;
}