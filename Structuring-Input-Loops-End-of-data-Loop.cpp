#include <iostream>

using namespace std; 

int main() {

   //Delcare and initilize bjects 
  double exam_score, sum = 0, average; 
  int count; 

  //prompt user for input 
  cout << "Enter exam scores separated by whitespace. \n" << endl;

  //input exam scores using sentinel-controlled loop 
  cin >> exam_score;
  while(!cin.eof())
  {
    sum = sum + exam_score;
    ++count;
    cin >> exam_score;
  }

  //calculate average exam scores
  average = sum/count; 
  cout << count << " students took the exam. \n" ;
  cout << " The exam average is " << average << endl; 

  return 0; 
  
}