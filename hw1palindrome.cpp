//
//  main.cpp
//  Palindrome
//
//  Created by Mitesh Patel on 9/15/15.
//  Copyright (c) 2015 TAMU. All rights reserved.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<stdexcept>
#include<cstdlib>
#include<string>
using namespace std;


int main()
{
    
    cout << "-----------------------" << endl;
    cout << endl;
    cout << "NOTE: just hit enter to test an empty string."<<endl;
    cout << "Program will ask for your input:" << endl;
    cout << "Use the following inputs one by one:" << endl;
    cout << "1) hit enter to test empty string." << endl;
    cout << "2) racecar" << endl;
    cout << "3) radar" << endl;
    cout << "4) boob" << endl;
    cout << "5) madam" << endl;
    cout << "6) bike" << endl;
    cout << "7) kite" << endl;
    cout << endl;
    cout << "-----------------------" << endl;
    cout << endl;
    
    cout << "Input a string below." << endl;
    string s;
    getline(cin, s);
    cout << "Now I will check to see if it is a palindrome......" << endl;
    cout << endl;
    
    
    
    vector<char> check_s(s.length());
    // insert the letters into a character vector
    for (int i = 0; i< s.length(); ++i)
    {
        check_s[i] = s[(s.length()-1) - i];
    }
    
    // convert the vector into a string variable
    string palindrome(check_s.begin(),check_s.end());
    
    
    if (s.empty())
    {
        cout << "Cannot test to see if a palindrome. Empty string cannot be tested.";
    }
    else if(s == palindrome)
    {
        cout << "It is a palindrome. Run the program again to test the next case.\n";
    }
    else
    {
        cout << "It is NOT palindrome. Run the program again to test the next case.\n";
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //for(int k=0;k<check_s.size();++k)
    //   cout << check_s[k];
    
    
    
    
    return 0;
    
}
