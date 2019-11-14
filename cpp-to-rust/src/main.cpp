#include <iostream>
#include "example.h"

using namespace std;

extern "C"
int triple_input(int input) {
    throw 22;
}

int main() {
    try {
        int input = 10;
        int output = double_input(input);
        cout<<input<<" * 2 = "<<output<<"\n";
    } catch (int i) {
        cout << "caught " << i << "\n";
    }
  return 0;
}
