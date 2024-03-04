#include <iostream>

using namespace std;

void PrintAllDigitsOfAnInteger(int num) {
  while (num != 0) {
    int digit = num % 10;
    cout << digit << " ";  
    num /= 10;     
  }
}

int main() {
  int num;
  cout << "Enter any integer: ";
  cin >> num;

  PrintAllDigitsOfAnInteger(num);

  return 0;
}
