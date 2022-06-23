//Importing Libraries
#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std;

//Initializing Variables and Arrays
int attempts = 6;
bool run = true;
char ans1,ans2,ans3,ans4,ans5;
//Word List
string AnsKey[] =  {"FROTH", "FLUID", "MONEY","GOOSE","ATONE","MOUTH","PLAIN","BRINK","BLINK","AFTER","FLOAT",
                    "MOTOR","ALOOF","LEASH","SHOVE"};

//Function to give a semi-random Answer Key
string selectAnsKey(){
        srand(time(0));
        int r = (rand() % 10)-1;
        return AnsKey[r];
}

