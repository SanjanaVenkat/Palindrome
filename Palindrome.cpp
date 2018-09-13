#include <iostream>
#include <cstring>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
  int i = 0;
  char c;
  char str [80];
  char str2 [80];
  while (str[i])
    {
      cin.get(str, 80);
      putchar (toupper(str[i]));
      i++;
    }
  cout << str << endl;
  return 0;
}
