/**
 * @mainpage Documentation circular LinkedList
 * 
 * @section Introduction
 * Project ini merupakan peroject struktur data
 * menggunakan struktur data LinkedList dengan pendekatan circular arrays.
 * 
 * @section Operation
 * - en LinkedList for insert elements into LinkedList
 * - de LinkedList for delete elements from LinkedList
 * - show data / display
 * 
 * @section How to use
 * 1. Insert 
 * 2. Delete
 * 3. Display
 * 4. Exit
 * 
 * @author yProfil
 * - Nama  ;
 * - Nim   :
 * - Kelas :
 * 
 * @brief 
 * @version 0.1
 * @date 2025-06-23
 * 
 * @copyright Gibran@umy.ac.id (c) 2025
 * 
 */

#include <iostream>
using namespace std;

/**
 * @class LinkedList
 * @brief This class is for operation LinkedList
 *  
 */
class Node
{

public:
    int data;/// Data held by the node
    Node *next;/// Pointer to the next node in the stack

/**
 * @brief Construct a new Node object
 * 
 * Sets the next pointer to NULL by default
 */
    Node()
    {
        next = NULL;

    }
    
};

/**
 * @brief Stack class implements a stack using a linked list
 * 
 * This class provides the basic stack operations like push, pop, peek, and cheking if the stack is empty
 */

class Stack
{

private:
    Node *top;/// Pointer to the top of the stack

public:
/**
 * @brief Constructor to initilize the Stack
 * 
 * Sets the top pointer to NULL initially,indicating an empty stack
 */
    Stack()
    {
        
        top = NULL;
    }
    /**
     * @brief  Pushes a value onto the stack
     * 
     * Creates a new node with the givin value and adds it to the top of the stack
     * 
     * @param value The value to be pushed onto the staack
     * @return The value that was pushed
     */

    int push(int value)
    {
        Node *newNode = new Node();/// Create a new node
        newNode->data = value;/// Set the value of the node
        newNode->next = top;/// Point to the current top of the stack
        top = newNode;/// Update the top pointer to the new node
        cout << "Push Value: " << value << endl;
        return value;
    }

    /**
     * @brief Pops a value from the stack
     * 
     * Removes the top node from the stack and display the value
     * if the stack is empty,an error message is displayed
     */

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl; 
        }

        cout << "Popped Value: " << top->data << endl;/// Print the popped value
        top = top->next;/// Move the top pointer to the next node
    }
    /**
     * @brief Display the top value of the stack
     * 
     * This function shows the data of the top node if the staack is not empty
     * 
     * if the stack empty,it prints an error message
     */

    void peek()
    {
        if (top == NULL)
        {
            cout << "List is Empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;/// print the top value
                current = current->next;
            }
            cout << endl;
        }
    }
    /**
     * @brief Checks whether the stack is empty
     * 
     * @return true if the stack is empty,otherwise false
     * @return false 
     */

    bool isEmpty()
    {
        return top == NULL;/// Return true if stack is empty
    }
};

int main()
{

    Stack stact;

    int choice = 0;
    int value;

    while (choice != 5)
    {

        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push : ";
            cin >> value;
            stact.push(value);
            break;
        case 2:
            if (!stact.isEmpty())
            {
                stact.pop();
            }
            break;
        case 3:
            if (!stact.isEmpty())
            {
                stact.peek();
            }
            else
            {
                cout << "Stact is Empty. Cannot pop." << endl;
            }
            break;
        case 4:
            cout << "Exiting Program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}