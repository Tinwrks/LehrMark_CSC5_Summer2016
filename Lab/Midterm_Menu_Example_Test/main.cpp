/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 11th, 2016, 10:30 AM
 * Purpose:  Midterm Menu
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting
#include <cstdlib>   //Setting random number seed
#include <ctime>     //Time library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants - PI, Gravity, Conversions
const int CNVINFT=12;//There are 12 inches in a foot;

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    do{
        menu();
        cin>>choice;
    
    //Process the Data and Display Results
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
            default:cout<<"Not option in menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    
    //Exit Stage Right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 1
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Conversion problem
//     Inputs  - Argument list void
//     Internal Input
//          inches -> dimension inches
//     Outputs - Return void
//     Internal Output
//          feet   -> dimension feet
void prob1(){
    //Declare variables
    float inches,feet;
    
    //Prompt for inputs
    cout<<"Conversion from inches to feet"<<endl;
    cout<<"Input the number of inches"<<endl;
    cin>>inches;
            
    //Process the data
    feet=inches/CNVINFT;
    
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<inches<<"(in) = "<<feet<<"(ft)"<<endl;
    
    //Return from Conversion Problem
    return;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 2
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Tosses a pair of Dice
//     Inputs  - Argument list void
//     Internal Input
//          die1,die2 -> [1,6]
//     Outputs - Return void
//     Internal Output
//          sum   -> [2,12]
void prob2(){
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    char die1,die2,sum;
    
    //Process
    die1=rand()%6+1;
    die2=rand()%6+1;
    sum=die1+die2;
    
    //Output the results
    cout<<"Random Dice Toss -> "<<static_cast<int>(sum)
            <<" = "<<static_cast<int>(die1)
            <<" + "<<static_cast<int>(die2)<<endl; 
    
    //Return from tossing the dice
    return;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 3
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 3
void prob3(){
    cout<<"You are entering Problem 3"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 4
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 4
void prob4(){
    cout<<"You are entering Problem 4"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 5
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 5
void prob5(){
    cout<<"You are entering Problem 5"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 6
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 6
void prob6(){
    cout<<"You are entering Problem 6"<<endl;       
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 MENU
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - The Menu
void menu(){
    cout<<endl;
    cout<<"Menu Program for Midterm Example Test"<<endl;
    cout<<"Simple choose the number for the problem to display"<<endl;
    cout<<"Type 1 for Problem 1 Convert from inches to feet"<<endl;
    cout<<"Type 2 for Problem 2 Throw a pair of dice"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;  
    cout<<endl;
}