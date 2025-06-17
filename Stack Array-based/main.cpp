#include "stack.h"
#include "stack.cpp"
#include <iostream>
using namespace std;

void Display(char c){
    cout<<" "<<c<<" \n";
    cout<<" "<<"|"<<" \n";
}

int main(){

    Stack<char> s;
    CreateStack(&s);

    cout<<"Enter Str: ";
    string str;
    cin>>str;

    for(auto c : str){
        Push(c,&s);
    }

    TraverseStack(&s,&Display);
    
    cout<<"\nEnter any key to exit...";
    cin.ignore();
    cin.get();
    return 0;
}
