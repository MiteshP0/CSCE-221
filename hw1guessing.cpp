//
//  main.cpp
//  guessing
//
//  Created by Mitesh Patel on 9/16/15.
//  Copyright (c) 2015 TAMU. All rights reserved.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<stdexcept>
#include<cstdlib>
#include<string>
#include <math.h>
using namespace std;


int main()
{
    
    cout << "--------------------------" << endl;
    cout << endl;
    cout << "This game will prompt you to enter a number between a specific range." << endl;
    cout << "You are to guess the number, and the computer will tell you if you guessed correctly, or if you should guess higher or lower." << endl;
    cout << "The game will end once you exceed the minimum amount of attempts allowed. The game will also end you if guess the number correctly, or it will end if you use invalid input." << endl;
    cout << endl;
     cout << "--------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    //vector prints (exp_2, player_numberG, number guesses)
    vector <int> print;
    
    for(int i=0; i<=11; ++i) // for loop in which the game runs
    {
        int player1_number;
        int player2_numberG;
        int exp_2 = pow (2, i);
        int num_guesses = 0;
        //vector prints (exp_2, player_numberG, number guesses)
        vector<int> print;
        print.push_back(exp_2);
        try
        {
            cout << "Please select a number between 1 and " << exp_2 << endl; // prompt to select a number in the range
            cin >> player1_number;
            print.push_back(player1_number);
            if(player1_number > exp_2 || player1_number < 1)
            {
                throw 1.1;
            }
        }
        catch(double)
        {
            cerr << "You did not enter a valid number in the range. exiting..." << endl;
            exit(0);
        }
        cout << endl;
        cout << endl;
        bool not_found = true;
        while(not_found)
        {
         
            try
            {
                cout << "Now guess the number." << endl;   // player 2 needs to guess the number picked by player one.
                cin >> player2_numberG;
                ++num_guesses;
                if(player2_numberG > exp_2 || player2_numberG < 1)
                {
                    throw 1.1;
                }
            }
            catch(double)
            {
                cerr << "You did not enter a valid number in the range. exiting..." << endl;
                exit(0);
            }
            try
            {
                if(player2_numberG == player1_number)
                {
                    not_found = false;
                    cout << "Yes - the number is found!" << endl;
                    print.push_back(num_guesses);
                    cout << endl;
                    cout << "vector printed below: range, guessed number, and number of comparasions \n";
                    for(int k = 0; k<print.size(); ++k)
                    {
                        cout << print[k] << " ";
                    }
                    print.erase(print.begin(),print.end());
                    cout << endl;
                }
                else if(player2_numberG < player1_number)
                {
                    if(num_guesses == i+2) // check if the amount of guesses does not exceed the appropriate amount
                    {
                        throw -1;
                    }
                    cout << "higher" << endl;
                    cout << endl;
                }
                else if (player2_numberG > player1_number)
                {
                    if(num_guesses == i+2)
                    {
                        throw -1;
    
                    }
                    cout << "lower" << endl;
                    cout << endl;
                }
            }
            catch(int)
            {
                cerr << "Error: you've exceeded number amount of tries your last attempt did not count! exiting..."<< endl;
                exit(0);
            }
        }
    }

    
    
    
    
    
    
    
    
    
    /*
    int max_rangeVal;
    cout << "Enter number you want the max range to be (ie: 1 to n). n should be your input." << endl;
    cin >> max_rangeVal;
    vector<int> numbers;
    //initialize vector of the appropriate range
    for(int i = 0; i<max_rangeVal; ++i)
    {
        numbers.push_back(i+1);
    }
    
    
    bool not_found = true;
    cout << "Is this the number your thinking of? : " << numbers.size()/2 << endl;
    string input = " ";
    cin >> input;
    
        if(input == "yes")
        {
            not_found = false;
        }
        else if(input == "lower")
        {
            cout << "Is this the number your thinking of?: " << (numbers.size()/2)/2 << endl;
            
        }
     */
    
    
    
    
    
    
    
    
    
    return 0;
}