#include <iostream>

using namespace std;

int main()
{
  int x;
  int y;
  cout << "Enter two numbers: ";
  cin >> x >> y;
  if (x > y) {
    cout << "Your first number must be a smaller value than your second";
    exit(0);
  }

  int sum;
  for (int i = x; i <= y; i++) {
    sum = sum + i;
  }
  
  cout << "Sum from " << x << " to " << y << " is " << sum;

}
