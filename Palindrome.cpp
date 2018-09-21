#include <iostream>
#include <cstring>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
  int i = 0;
  int j = 0;
  int len = 0;
  char c;
  char str [80];
  char str2 [80];
  bool palindrome;
  cin.get(str, 80);
  
  while (str[i] >= 0) {
    if (!(ispunct(str[i])) && !(isspace(str[i]))) {
      str2[j] = toupper(str[i]);
      i++;
      j++;
    }
      if (ispunct(str[i])) {
      i++;
    }
   if (isspace(str[i])) {
     i++;
    }
  }

  strcpy (str, str2);
  len = strlen(str);
  cout << len << endl;


  
  cout << "String 1:";
  cout << str << endl;
  cout << "String 2:";
  cout << str2 << endl;
  return 0;
}
