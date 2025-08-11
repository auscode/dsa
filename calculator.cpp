#include <iostream>
using namespace std;

void add(){
    int a {},b{};
    cout<<"\nEnter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int sum = a+b;
    cout<<"Result: "<<a<<"+"<<b<<" = "<<sum<<endl;
}
void sub(){
    int a {},b{};
    cout<<"\nEnter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int subt = a-b;
    cout<<"Result: "<<a<<"-"<<b<<" = "<<subt<<endl;
}

void mul(){
    int a {},b{};
    cout<<"\nEnter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int mult = a*b;
    cout<<"Result: "<<a<<"*"<<b<<" = "<<mult<<endl;
}

void div(){
    int a {},b{};
    cout<<"\nEnter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    if(a<1 || b<1){
        cout<<"Can't divide by  0 or less\n";
        return;
    }
    int divd = a/b;
    cout<<"Result: "<<a<<"/"<<b<<" = "<<divd<<endl;
}
void exited(){
    cout<<"Exiting... Goodbye!"<<endl;
}

void Calculator(){    
    int input = 0;
    while(true){
         std::cout<<"--------------------------------------\n";
        std::cout<<"Select an operation:\n";
        std::cout<<"1. Addition (+)\n";
        std::cout<<"2. Subtraction (-)\n";
        std::cout<<"3. Multiplication (*)\n";
        std::cout<<"4. Division (/)\n";
        std::cout<<"5. Exit\n";
        std::cout<<"--------------------------------------\n";
        std::cout<<"Enter your choice: ";
        std::cin>>input;
        switch(input){
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
             case 5:
                exited();
                return;
            default:
                std::cout << "Invalid choice! Try again.\n";
        }
    }
}


int main(){

    std::cout<<"--------------------------------------\n";
    std::cout<<"        Simple CLI Calculator         \n";

    Calculator();

    return 0;
    
}