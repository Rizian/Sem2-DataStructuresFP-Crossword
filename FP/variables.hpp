//Importing Libraries
#include <iostream>
#include <array>
#include <string>
#include <random>
#include <algorithm>
using namespace std;

//Initializing Variables and Arrays
int attempts = 6;
bool win = false;
bool run = true;
char ans1,ans2,ans3,ans4,ans5;
string AnsKey[] =  {"FROTH", "FLUID", "MONKE","GOOSE","ATONE","MOUTH","PLAIN"};
array<int,7> s= {0,1,2,3,4,5,6};
unsigned seed = 1;

//Function to Randomize Answer Key
string selectAnsKey(){
        shuffle(s.begin(),s.end(),default_random_engine(seed));
        return AnsKey[s[4]];
}
//Assigning Result of Randomization to a Variable
string key = selectAnsKey();
