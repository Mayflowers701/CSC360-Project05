#include <iostream>
#include <string>
#include <utility>

using namespace std;

//prototypes
<<<<<<< HEAD
pair<long int, string> recursor(pair<long int, string> solutions[153][10], string &input, long int position, long int inning);
=======
long int recursor(string &input, long int position, long int inning);
>>>>>>> 2bda23241fe25d0474227fed08c0b0dcbf3b5572

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
<<<<<<< HEAD
  pair<long int, string> result = recursor(solutions, input, 0, 9);
=======
  long int result = recursor(input, 0, 9);
>>>>>>> 2bda23241fe25d0474227fed08c0b0dcbf3b5572


  //print result
  cout << "Divisions: " << result.second << endl;
  cout << "Result: " << result.first << endl;

  return 0;
}
