#include <iostream>

using namespace std;

template<typename T>
class Node{
    public:
    //Attributes
    T data;
    Node <T> *next;

    //Constructor
    Node() : data(NULL), next(NULL){};
    Node(T x) : data(x), next(NULL){};

    //Methods
    void setData(T data){
        this->data = data;
    }

    T getData(){
        return this->data;
    }

    void setNext(Node<T> *node){
        this->next = next;
    }

    Node<T> getNext(){
        return this->next;
    }
};

template <typename T>
class LinkedList{
    public:
    //Attributes
    Node<T> *head;
    Node<T> *tail;
    int size;
    
    //Class Constructor
    LinkedList() : head(NULL), tail(NULL), size(0){};

    //Function to add element to Linked List
    void addToList(T data){
        Node<T> *newNode = new Node<T>(data);

        if (size == 0){
            this->head = newNode;
            this->tail = newNode;
            this->head->next = tail;
            this->size++;
            return;
        }
        this->tail->next = newNode;
        this->tail = newNode;
        this->size++;
        return;
    }

    //Function to print Linked List
    void printList(){
        Node<T> *current = this->head;

        while(current != NULL){
            cout<< current->data <<"\t";
            current = current->next;
        }
    }

};



