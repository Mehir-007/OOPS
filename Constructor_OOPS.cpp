/*
Constructor in C++ is a special method that is invoked automatically at the time of object creation. 
It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. 
Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object which is why it is known as constructors.
Constructor does not have a return value, hence they do not have a return type. 
*/
#include<bits/stdc++.h>
using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;
    void IntroduceYourself() {
        cout<<"Name - "<< Name <<endl;
        cout<<"Company - "<< Company <<endl;
        cout<<"Age - "<< Age <<endl;
        
    }
    //Must always be public,Must have same name as that of Class
    Employee(string name,string company,int age) {              
        Name=name;Company=company;Age=age;
    }
};
int main()
{
    Employee employee1=Employee("Mehir","Amazon",23);

    employee1.IntroduceYourself();

    Employee employee2("Mehir","Google",25);

    employee2.IntroduceYourself();
} 