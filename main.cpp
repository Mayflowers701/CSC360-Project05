#include <iostream>
#include <string>

using namespace std;

//prototypes
long int recursor(string &input, long int position, long int inning);

//main
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
  long int result = recursor(input, 0, 9);


  //print result
  cout << "Divisions: " << input << endl;
  cout << "Result: " << result << endl;

  return 0;
}
