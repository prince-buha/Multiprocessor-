/*

1. WAP to create a Message class with a constructor that takes a single string with a default value. Create  
a private member string,and in the constructor simply assign the argument string to your internal string. 
Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message 
that takes a string argument, which it prints in addition to the internal message.


Enter initial message: devloper
Message: devloper
Message: devloper Default message
*/

#include <iostream>
using namespace std;

class Message {
private:
    string inte_Message;

public:
    Message() {
        cout << "Enter initial message: ";
        cin >> inte_Message;
    }

    void print() {
        cout << "Message: " << inte_Message << endl;
    }

    void print(string addi_Message) {
        cout << "Message: " << inte_Message << " " << addi_Message << endl;
    }
};

int main() {
    Message msg;

    msg.print();
    msg.print("Default message ");

    return 0;
}
