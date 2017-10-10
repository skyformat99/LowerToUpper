/*Tyler Allen
CS111
Program 1
2-17-15

This program will output the uppercase of a lowercase letter*/

#include <iostream>
using namespace std;

int main(){//main function
  char lower;//declare variables
char upper;
  
  cout<<"Enter a lower case letter: ";//ask for age input
  cin>> lower;//assign input to age
  upper=(int)lower-32;
  cout<<"The uppercase is: "<<upper;

    return 0;
}
