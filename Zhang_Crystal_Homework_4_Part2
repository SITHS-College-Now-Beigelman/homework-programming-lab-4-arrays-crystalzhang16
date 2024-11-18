//Crystal Zhang 
//11.18.2024 
//Homework 4 Exercise 2

#include <iostream>  

using namespace std; 

int main () 
{  
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; //defines the array and what it contains in each index
    
    int total = 0; //defines the total of the cars which will be changes later on
    int mostSold = cars [1]; //defines the most sold car which will be changed later on
    int salesPerson = 0; //defines who the most sold car belongs to which will be changed later on
    
    for (int i = 0; i <10; i++) //continues this loop for 10 times, the amount of times for the array
        {
            total += cars[i]; //the total equals to itself plus the amount of cars sold per index

            if (cars [i] > mostSold) 
            //if the amount of cars sold in the index is greater than the current most sold car
            {
                mostSold = cars [i]; 
            //if above is true, then the new most sold car is the amount of cars sold in the current index
                salesPerson = i + 1;
            //if above is true, then the sales person who sold the most cars is now the current index plus one to account for the zero 
            }
        }

    cout << "The total amount of cars sold at the dealership is: " << total << endl; 
    //prints what the total amount of cars sold is 
    
    cout << "The salesperson who sold the most cars is: Salesperson #" << salesPerson << endl;
    //prints who sold the most cars
    
    cout << "Salesperson #" << salesPerson + 1 << " sold " << mostSold << " cars" << endl;
    //prints how many cars they sold

    
    return 0; 
}
