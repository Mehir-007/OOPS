/*
In normal terms Encapsulation is defined as wrapping up of data and information under a single unit. In Object Oriented Programming, 
Encapsulation is defined as binding together the data and the functions that manipulates them. Consider a real life example of encapsulation, 
in a company there are different sections like the accounts section, finance section, sales section etc. 
The finance section handles all the financial transactions and keep records of all the data related to finance. 
Similarly the sales section handles all the sales related activities and keep records of all the sales. 
Now there may arise a situation when for some reason an official from finance section needs all the data about sales in a particular month. 
In this case, he is not allowed to directly access the data of sales section. He will first have to contact some other officer in the sales section
and then request him to give the particular data. This is what encapsulation is. 
Here the data of sales section and the employees that can manipulate them are wrapped under a single name “sales section”. 

We can not access any function from class directly. We need an object to access that function which is using the member the variable of that class.

The function which we are making inside the class ,it must use the all member variable then only it is called encapsulation.

If we  don’t  make function inside the class which is using the member  variable of the class then we don’t call it encapsulation.  
*/
#include<bits/stdc++.h>
using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company=company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        //if(age>=18)
        Age=age;
    }
    int getAge(){
        return Age;
    }
    
    void IntroduceYourself() {
        cout<<"Name - "<< Name <<endl;
        cout<<"Company - "<< Company <<endl;
        cout<<"Age - "<< Age <<endl;
        
    }
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

    employee2.setAge(24);

    cout<<employee2.getName()<<" is "<<employee2.getAge()<<" years old."<<endl;
} 