/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jazz Faye Olario
 */

#include "std_lib_facilities.h"

class Name_value {
public:
    string name;
    int scores;
    Name_value(string Name, int num)
        :name(Name), scores(num) { }
};

int main()
{
    //Declaration of functions
    vector<Name_value> names;
    string name;
    int scores;

    cout << "Please enter the name and the value or type " << "\""<< "NoName 0"<<"\""<< " to stop. \n";

    //While loop will go on and user will type "NoName 0" to stop
    while ((cin >> name >> scores) && (name != "NoName 0" && scores != 0)) {
        for (int i = 0; i < names.size(); ++i){     //Check is name is unique or not
            if (name == names[i].name){
            cout << "Error: The name " << "\"" << name << "\"" << " already exist! Please consider entering another name.";
            exit(1);
            }
        }
        names.push_back(Name_value(name, scores)); //put the name and scores into vector
        
    }
    //Prints the name and scores
    for (int i = 0; i < names.size(); ++i)
        cout << names[i].name << '\t' << names[i].scores << endl;
    
    return 0;
}