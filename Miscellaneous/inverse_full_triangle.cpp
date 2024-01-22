#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[])
{
  for (int i = 0; i < 5; i++) {
    for (int j = 5-i; j > 0; j--) {
      cout << " ";
    }

    for (int j = 0; j < i ; j++) {
      cout << "* ";
    }

    cout << endl;
  }
  
  return 0;
}
