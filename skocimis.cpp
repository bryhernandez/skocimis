#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  int c;

  cin >> a; //2
  cin >> b; //3
  cin >> c;//5

  int num1 = (b - a) - 1; //0
  int num2 = (c - b) - 1; //1

  if (num1 > num2 )
    cout << num1;
  else 
    cout << num2;
}
