#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "‘fˆö”•ª‰ð‚·‚é”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ";

    int n;
    int i = 2;
    cin >> n;

    if (n < 1) {
        cout << "1‚æ‚è‘å‚«‚¢”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢";
        return 0;
    }

    cout << endl;

    while (n >= i * i) {
        if (n % i == 0) {
            cout << setfill('0') << right << setw(4) << i << " | " << n << endl;
            n /= i;
            continue;
        }
        i++;
    }
    cout << "    " << "   " << n << endl;
    return 0;
}