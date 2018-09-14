#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//Palindrome by Justin He- Input a string of up to 80 characters and
//it will check to see if is the same backwards and forwards not including
//punctuation and spaces.

int main()
{
  char str[80];
  char str1[80];
  char str2[80];
  int a=0;
  int b =0;
  int size = 0;
  cout << "Input a string: " << endl;
  cin.getline(str, 80);

  int count=0;


  // find the size of the input string and remove white space/others
  while (str[a] != '\0'){
    if (str[a]>='0' && str[a]<='9' || str[a]>='a' && str[a]<='z') {
      str1[size] = str[a];
      size++;
    }

    // convert upper case to lower case
    if (str[a] >='A' && str[a] <= 'Z') {
      str1[size] = str[a] + 32;
      size++;
    }

    a++;
  }



  str1[size] = '\0';

  //  cout<<"The string (trimed) is: " << str1 <<endl;

  // copy str1 to str2 in reverse order
  b=0;
  for (int a = size-1; a>=0; a--)
    {
      str2[b] = str1[a];
      b++;
    }

  str2[b] = '\0';   // marks the end of str2
  // cout << "The string converted to reverse order: " << str2 << endl;

  // compare the two strings:
  for(int i = 0; i<size; i=i+1){
    if(str1[i]!=str2[i]){
      count++;
    }
  }

    if(count==0){
      cout << "Palindrome" << endl;
    }
    else{
      cout << "This is not palindrome" << endl;

    }


  return 0;
}
