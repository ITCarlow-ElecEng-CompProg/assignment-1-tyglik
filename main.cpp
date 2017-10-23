/** Celsius To Fahrenheit conversion calcultor
 *
 * Martina Nunvarova
 * 25/9/2017
 */

//Include libraries
#include <iostream>
#include <iomanip>
//define namespace
using namespace std;

//main function
int main()
{
    //declare variable for input (Temp. Celsius)
    double tc;

    //prompt the user
    cout << "Celsius to Fahrenheit conversion calculator:\n\n"
        << "Enter temperature in oC: ";

    //input streem into tc variable
    cin >> tc;

    //set output strem numerical precision to 3
    cout.precision(2);
    //set fixed numeric format (fill with zeros trialing
    cout<<fixed;
    //output the entered value and the result
    cout << tc <<" oC is equal to "<< 9*tc/5.0+32<<" oF"<<endl;

    //return to OS no error.
    return 0;
}
