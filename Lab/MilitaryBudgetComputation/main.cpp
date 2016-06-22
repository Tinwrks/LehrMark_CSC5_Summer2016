/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 22, 2016, 12:51 PM
 * Purpose:  Calculating the Military Budget
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting output
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int CNVPERC=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float milBudg=585e9f; //http://www.defense.gov/News/Special-Reports/FY16-Budget
    float fedBudg=3.8e12f;//https://www.nationalpriorities.org/budget-basics/federal-budget-101/spending/
    float percent;
    
    //Input Data
    
    //Process the Data
    percent=milBudg/fedBudg*CNVPERC;
    
    //Output the processed Data
    cout<<"The Military Budget = $"<<milBudg<<endl;
    cout<<"The Federal Budget = $"<<fedBudg<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The military budget percentage = "<<percent<<"%"<<endl;
    
    //Exit Stage Right!
    return 0;
}