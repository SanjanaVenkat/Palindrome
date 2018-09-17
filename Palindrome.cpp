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
  cin.get(str, 80);
  
  while (str[i]) {
    if (!(ispunct(str[i]))) {
	str[i] = toupper(str[i]);
	i++;
      }
  }

  strcpy (str2, str);
  cout << "String 1:";
  cout << str << endl;
  cout << "String 2:";
  cout << str2 << endl;
  return 0;
}
