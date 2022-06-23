//Imported Libraries
#include <iostream>
#include "./variables.hpp"
#include <experimental/random>
#include <bits/stdc++.h>
#include "./LinkedList.hpp"
#include <array>
#include <chrono>

using namespace std;
//Namespace for chrono
using namespace std::chrono;

string key = selectAnsKey();
//Main Function
int main()
{
        //Initial Promt Welcoming Players
    cout<<"Welcome to WORDLE!! "<<"\n"<<endl;
    
    while(run){
        //Checking if attempts are used up
        if(attempts < 1){
                //Game Over Prompt
                cout<<" "<<endl;
                cout<<"GAME OVER, Attempts left: "<<attempts<<endl;
                break;
        }
        //Prompt Asking Players to Enter their Inputs
        cout<<" "<<endl;
        cout<<"You have "<<attempts<<" attempts left."<<endl;
        cout<<"Enter Your Answer(Five Letters): "<<endl;
        //Requesting User Input
        cin>> ans1;
        cin>> ans2;
        cin>> ans3;
        cin>> ans4;
        cin>> ans5;
        //Turning Initial Chars Into Uppercase Chars
        char char1 = toupper(ans1);
        char char2 = toupper(ans2);
        char char3 = toupper(ans3);
        char char4 = toupper(ans4);
        char char5 = toupper(ans5);
        cout<<" "<<endl;

        //Storing User Input In an Array
        array <char,5> concat = {char1,char2,char3,char4,char5};
               
        //Starting the chrono timer
        auto start = high_resolution_clock::now();

        //Error Checking For:
        //1st letter
        if(key[0] == char1){
		cout<<char1<<" Exists in word, Position correct."<<endl;

        }else if(char1 == key[1] || char1 == key[2] || char1 == key[3] || char1 == key[4]){
                cout<<char1<<" Exists in word, Position incorrect"<<endl;
        }else {
                cout<<char1<<" Does not exist in word"<<endl;
        }
        //2nd letter
        if(key[1] == char2){                
            cout<<char2<<" Exists in word, Position correct."<<endl;

        }else if(char2 == key[0] || char2 == key[2] || char2 == key[3] || char2 == key[4]){
                cout<<char2<<" Exists in word, Position incorrect"<<endl;
        }else {
                cout<<char2<<" Does not exist in word"<<endl;
        }
        //3rd letter
        if(key[2] == char3){               
            cout<<char3<<" Exists in word, Position correct."<<endl;

        }else if(char3 == key[0] || char3 == key[1] || char3 == key[3] || char3 == key[4]){
                cout<<char3<<" Exists in word, Position incorrect"<<endl;
        }else {
                cout<<char3<<" Does not exist in word."<<endl;
        }
        //4th letter
        if(key[3] == char4){
            cout<<char4<<" Exists in word, Position correct."<<endl;

        }else if(char4 == key[0] || char4 == key[1] || char4 == key[2] || char4 == key[4]){
                cout<<char4<<" Exists in word, Position incorrect."<<endl;
        }else {
                cout<<char4<<" Does not exist in word."<<endl;
        }
        //5th letter
        if(key[4] == char5){
            cout<<char5<<" Exists in word, Position correct."<<endl;

        }else if(char5 == key[1] || char5 == key[2] || char5 == key[3] || char5 == key[0]){
                cout<<char5<<" Exists in word, Position incorrect."<<endl;
        }else {
                cout<<char5<<" Does not exist in word."<<endl;
        }
        //Stopping the timer
        auto stop = high_resolution_clock::now();
        //Calculating timer
        auto duration = duration_cast<microseconds>(stop-start);

        //Stating Winning Conditions
        if(key[0] == char1 && key[1] == char2 && key[2]==char3 && key[3]==char4 && key[4] == char5){
                //Winning Prompt
                cout<<"YOU WON!! CONGRATULATIONS."<<endl;
                break;
        }

        //Decrementing attempts
        attempts --;
        
        //Printing out time
        cout<<duration.count()<<" Microseconds"<<endl;
    }
    
}



