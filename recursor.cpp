#include <iostream>
#include <string>

using namespace std;

//prototypes
long int getValue(string &input, long int position, long int digits){

  //this step looks a little weird, but it's mostly because "position" is counting from the right
  //input length - position - digits thus gives us our start point
  string strVal = input.substr(input.length() - position - digits, digits);

  //with the substring copied out, we parse to integer value and return
  return stol(strVal);

}

//recursor, recursive solver for innings problem
long int recursor(string &input, long int position, long int inning){

  //base case: if inning = 0, return score of 0
  if(inning == 0){
    return 0;
  }


  //pick highest score of all possible positions for this inning
  long int highest = -1;

  //iterator for number of digits in this inning
  long unsigned digits = 1;

  //loop until either condition is met:
  //digits > 17 (no more than 17 digits are allowed in a single inning)
  //digits > maximum possible space for this inning

  //(input.length() - position) is the amount of remaining space in the input
  //(inning - 1) is the number of remaining innings
  //because each remaining inning requires at least 1 digit of space,
  //input.length() - position - (inning - 1) is the maximum possible space for this inning

  while(digits <= 17 && digits <= input.length() - position - (inning - 1)){

    //get highest possible score if this inning has this many digits
    long int newHighest = getValue(input, position, digits) + recursor(input, position + digits, inning - 1);

    //if newHighest is > current highest, assign to highest
    if(newHighest > highest){
      highest = newHighest;
    }

    //iterate digits
    digits++;

  }


  //return highest score
  return highest;
}
