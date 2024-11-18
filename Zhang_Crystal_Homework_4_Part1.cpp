//Crystal Zhang 
//11.18.2024 
//Homework 4 Exercise 1

#include <iostream>  

using namespace std; 

int filterEvens (int x); //defines the function and the values it will use 

int main () 
{  
    int myArray [8]; //creates an array with 8 elements
    
    cout << "Input 8 numbers: " << endl; //prompts user to enter 8 values
    cin >> myArray[0] 
        >> myArray[1] 
        >> myArray[2] 
        >> myArray[3]
        >> myArray[4] 
        >> myArray[5]
        >> myArray[6] 
        >> myArray[7]; //allows user to enter 8 values 
    cout << " " << endl; //creates a space between the prompts and the output

    for (int i = 0; i < 8; i++) //loops until the end of the array 
        {
            if (filterEvens(myArray[i]) != 0) 
                //if the value assigned to the i index of myArray is not equal to 0
                    cout << filterEvens(myArray[i]) << " "; //if above is true, print y 
        }

    /*
    Input 8 numbers: 
    1
    2 
    3
    45
    5
    6
    7
    8

    2 6 8  
    */
    
    return 0; 
}

int filterEvens (int x) //defines which function
{
    if (x % 2 == 0) //if the remainder of x when divided by 2 is 0, meaning it's even
    return x; //returns x 

    else //if above is false/the number is odd
    return 0; //return 0
}
