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

//Variables
char ans, input;
int numLetters = 5;
int counter = 0;

//Assigning Result of Randomization to a Variable
string key = selectAnsKey();

//Searching Function to compare contents of linked list with answer key
int search(char x,string key,int pos){
    for(int j = 0;j<5;j++){
        for(int i = 0;i<5;i++){
            if(x==key[i] && i==pos){
                return 2;
            }
        }
        if(x==key[j] && j!=pos){               
                return 1;
            }

    }
    return 0;
}

int main(){
    cout<<"Welcome to WORDLE!! "<<"\n"<<endl;

    while(run){
        int pos=0;
        //Creating Linked List
        LinkedList<char> myList;
        if(attempts < 1){
                //Game Over Prompt
                cout<<" "<<endl;
                cout<<"GAME OVER, Attempts left: "<<attempts<<endl;
                break;
        }
        //Prompt Asking Players to Enter their Inputs
        cout<<" "<<endl;
        cout<<"You have "<<attempts<<" attempts left."<<endl;
        cout<<"Enter Your Answer: "<<endl;
        //Adding User Input to Linked List
        while(numLetters != 0){
            cin >> input;
            ans = toupper(input); 
            myList.addToList(ans);
            numLetters--;
        }        
        cout<<endl;
        //Starting the timer
        auto start = high_resolution_clock::now();

        //Error checking
        for(Node<char> *current = myList.head;current != NULL;current=current->next){
            int check = search(current->data,key,pos);
            if(check == 2){
                cout<<current->data<<" Exists in Word, Position Correct"<<endl;
            }else if(check == 1){
                cout<<current->data<<" Exists in Word, Position Incorrect"<<endl;
            }else{
                cout<<current->data<<" Doesn't Exist in Word"<<endl;
            }
            //Increasing counter based on number of letters correct with positions also correct
            if(check == 2){
                counter ++;
            }
            pos++;
        }
        //Stopping the timer
        auto stop = high_resolution_clock::now();
        //Calculating the time
        auto duration = duration_cast<microseconds>(stop-start);
        //Checking if every letter and position is correct
        if(counter == 5){
            //Winning Prompt
            cout<<"YOU WON!! CONGRATULATIONS"<<endl;
            break;
        }
        //Resetting the counter and numLetters variable
        counter = 0;
        numLetters = 5;
        //Decrementing the attempts
        attempts --;
        //Printing the time
        cout<<duration.count()<<" Microseconds"<<endl;
    }
}