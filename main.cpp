#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

  //command line input for number:
  //if there is not exactly on argument, return
  if(argc != 2){
    cout << "This program accepts only one argument." << endl;
    return 0;
  }
  //else, initialize string for input
  string input = argv[1];


  //call recursor on input, with endpoint 0 and inning 9
  int result = -1;


  //print result
  cout << "Divisions: " << input << endl;
  cout << "Result: " << result << endl;

  return 0;
}
