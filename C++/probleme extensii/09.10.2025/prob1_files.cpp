#include <fstream>
#include <iostream>
using namespace std;

int main() {
    int a=13, b=15;
    ifstream input("prob1.in");
    ofstream output("prob1.out");

    input >> a >> b;
    output << a << " " << b;

    input.close();
    output.close();
    return 0;
}
