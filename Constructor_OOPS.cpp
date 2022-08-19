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