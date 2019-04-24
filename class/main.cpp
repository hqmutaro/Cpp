#include <iostream>
#include <string>
using namespace std;

class Neko
{
private:
    string name;
public:
    Neko(string scp) {
        name = scp;
    }

    void nyan(void) {
        cout << name << endl;
        cout << "I'm neko. Thank you." << endl;
    }
};

int main(void) {
    Neko neko("SCP-040-JP");
    neko.nyan();
    return 0;
}