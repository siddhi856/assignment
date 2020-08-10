/* Name - Siddhi Khetan
    Section - C
    class roll no -51
    University roll no - 2014886 */

#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

int main(int argc, char *argv[]){
    cout << "You have entered " << argc - 1 << " numbers.\n";
    int numbers[argc-1];

    for (int i = 1; i < argc ; i++){
        if( !(isdigit(argv[i)) ){
            cout << "Error : You have not entered a number. Please enter a diffrent number.";
            exit(0);
        }
    }

    //converting string to numbers
    for (int i = 1; i < argc ; i++){
        numbers[i-1] = atoi(argv[i]);
    }

    int smallest = numbers[0];
    for (int i = 1; i < argc-1 ; i++){
        if( numbers[i] == smallest ){
            cout << "Error : You have entered two same numbers. Please enter a diffrent number.";
            exit(0);
        }
        else if(numbers[i] < smallest){
            smallest = numbers[i];
        }
    }

    cout << "Smallest Number is " << smallest << endl;
    return 0;
  }
