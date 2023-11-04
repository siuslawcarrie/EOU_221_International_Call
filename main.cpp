/*
Carrie Bailey
CS221 Fall 2023
October 15, 2023
Week 3, Program #5: The cost of an international call
This program asks the user for the minutes of an international call and calculates the cost based on a 3 tier price structure.
  */


/*The cost of an international call from New York to New Delhi is calculated as follows:
 * Connection fee: $1.99, $2.00 for the first three minutes,
 * and $0.45 for each additional minute.
 * Write a program that prompts the user to enter the number of
 * minutes the call lasted and outputs the amount due.
 * Format your output with two decimal places.
 * */

/*
 * const CONN = 1.99
 * const THREEMIN = 2.00
 * const ADDLMIN = 0.45
 *
 * int main
 * user input msg
 * int call_minutes = user input
 * call amount due function
 * amount due = amount due function(call minutes)
 * display amount due
 *
 * //END MAIN
 *
 * //FUNCTION
 * amount due function
 * takes call minutes
 * float amount due
 *
 * amount due = CONN + THREEMIN
 * IF user minutes > 3
 *amount due += (user min - 3)*0.45
 * amount due
 *
 *
 */
#include <iostream>
using namespace std;
const float CONN = 1.99;
const float THREEMIN = 2;
const float PERMIN = .45;

float amount_due(int call_min);

int main() {
    //VARIABLES
    float call_cost;
    int call_min;
    cout<<"Input the number of minutes of your call: "<<endl;
    cin>>call_min;
    call_cost = amount_due(call_min);
    cout << "Your call will cost ""$" << call_cost << endl;
    return 0;
}
    //FUNCTION DEFINITIONS

    float amount_due(int call_min) {

            float call_cost;
            if (call_min == 0) {
                call_cost = CONN;
            }
            else if (call_min <= 3) {
                call_cost = CONN + THREEMIN;
            }
            else {
                call_cost = CONN + THREEMIN + ((call_min - 3) * PERMIN);
            }
            return call_cost;


    }