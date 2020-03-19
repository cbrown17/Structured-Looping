#include <iostream>
/* write a c++ program to find the sum of the first 99 positive integers */ 

using namespace std; 

int main() {

  //declare objects and initialize 
  int counter, sum;
  counter = 1;
  sum = 0; //sum = 1

  //counter control loop //<= 
  while(counter < 6)
  {
    //calculate the sum 
    sum = sum + counter;
    //incrementing 
    ++counter;
    cout <<" The sum is: " << sum << endl;
  }
  //print something 
  

  return 0;
  

}