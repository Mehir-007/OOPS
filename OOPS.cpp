/*
OOP (Object-oriented programming) is a programming paradigm based on the concept of "objects", which can contain data and code: 
data in the form of fields (often known as attributes or properties), and code, in the form of procedures (often known as methods).
Object-oriented programming – As the name suggests uses objects in programming. 
Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. 
The main aim of OOP is to bind together the data and the functions that operate on them.
Class->We can say that a Class in C++ is a blue-print representing a group of objects which shares some common properties and behaviours.
Object->An Object is an identifiable entity with some characteristics and behaviour. An Object is an instance of a Class. 
When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
*/
#include<bits/stdc++.h>
using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;
    void IntroduceYourself()
    {
        cout<<"Name - "<< Name <<endl;
        cout<<"Company - "<< Company <<endl;
        cout<<"Age - "<< Age <<endl;
        
    }

};
int main()
{
    Employee employee1;
    employee1.Name="Mehir Routh";
    employee1.Company="Amazon";
    employee1.Age=23;

    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name="Sahil Routh";
    employee2.Company="Google";
    employee2.Age=25;

    employee2.IntroduceYourself();
}