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