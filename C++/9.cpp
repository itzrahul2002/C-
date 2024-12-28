#include<iostream>
#include<conio.h>
using namespace std;

class Print {
    public:
        void print(int n, char c) {
            cout << n << " " << c << endl;
        }
        void print(char c, int n) {
            cout << c << " " << n << endl;
        }
};

int main() {
    Print p;
    p.print(1, 'a');
    p.print('b', 2);

    return 0;
}
