#include <iostream>
using namespace std;

class Fact {
public:
    int n;
    Fact(int n) 
    {
        this->n = n;
    }

    int calc
    () {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
};

int main() {
    int n;
    cin >> n;
    Fact fact(n);
    cout << fact.calc() << endl;
}