//Crystal Zhang 
//11.18.2024 
//Homework 4 Exercise 3

#include <iostream>  
#include <string> 

using namespace std; 

string dna_to_rna (string x); //defines function to be used later on 

int main () 
{ 
    string dna; //defines the string that will hold the untranscribed dna sequence

    cout << "Enter a DNA sequence: " << endl; //prompts user to enter an untranscribed dna sequence
    getline(cin, dna); //allows user to enter a sequence with spaces

    cout << "The RNA sequence is: " << dna_to_rna (dna); 
    //calls the function using the string: dna as an input and prints out the transcribed rna sequence
    
    return 0; 
}

string dna_to_rna (string x) //defines which function this is
{
    string rna; //what is going to be outputted
    
    for (int i = 0; i < x.length(); i++) //loops through the length of the string
        {
            if (x[i] == 'A') //if the i number of the string is an A, it will be replaced with a U
              rna = rna + 'U'; //the new string is the old string plus a U
                
            else if (x[i] == 'C') //if the i number of the string is an C, it will be replaced with a G
              rna = rna + 'G'; //the new string is the old string plus a G
                
            else if (x[i] == 'G') //if the i number of the string is an G, it will be replaced with a C
              rna = rna + 'C'; //the new string is the old string plus a C
                
            else if (x[i] == 'T') //if the i number of the string is an T, it will be replaced with a A
              rna = rna + 'A'; //the new string is the old string plus a A
                
            else //if the i number of the string is none of the above, it will have no value 
              x[i] = 0;
            
        }

    /*
    Enter a DNA sequence: 
    ACG TGCA
    The RNA sequence is: ACG TGCA
    */
    return rna; //returns the final form of the string
    
}
