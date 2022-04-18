#include <iostream>
#include <string>
#include <utility>

using namespace std;

//prototypes
pair<long int, string> recursor(pair<long int, string> solutions[153][10], string &input, long int position, long int inning);

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

  //initialize 2D array to memoize results
  //allocates space for 153 possible positions and 9 innings (including the elusive 'inning 0')
  pair<long int, string> solutions[153][10];

  //initialize every index in the 2D array to placeholder value of -1
  pair<long int, string> placeholder(-1, "");
  for(int i=0; i < 153; i++){
    for(int j = 0; j < 10; j++){
      solutions[i][j] = placeholder;
    }
  }

  //call recursor on input, with endpoint 0 and inning 9
  pair<long int, string> result = recursor(solutions, input, 0, 9);


  //print result
  cout << "Divisions: " << result.second << endl;
  cout << "Result: " << result.first << endl;

  return 0;
}
