//Sanjana Venkat
//9.23.18
//Palindrome, compares string to reverse string, if same is a palindrome

#include <iostream>
#include <cstring>
#include <stdio.h>
#include <ctype.h>

using namespace std;
//variables 
int main()
{
  int i = 0;
  int j = 0;
  int k = 0;
  int len = 0;
  char c;
  char str [80];
  char str2 [80];
  char str3 [80];
  //gets string entered by used
  cin.get(str, 80);
  //removes all punctuation and spaces from string, puts into new string
  //capitalizes string
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
  //copies string back to original string holder
  strcpy (str, str2);
  //gets length of string
  len = strlen(str);
  //reverses string, puts it in new string holder
  while (len >=0 ) {
    str3[k] = str[len-1];
    len--;
    k++;

  }
  //outputs string and reversed string
  cout << "String:";
  cout << str << endl;
  cout << "Reverse String:";
  cout << str3 << endl;
  //compares strings, if same outputs palindrome
  if (strcmp (str3, str) == 0) {
    cout << "Palindrome" << endl;
  }
  //if not same, outputs not a palindrome
  else {
    cout << "Not a palindrome" << endl;
  }
  return 0;
}
