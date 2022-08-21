/*
Data abstraction is one of the most essential and important feature of object oriented programming in C++. 
Abstraction means displaying only essential information and hiding the details. 
Data abstraction refers to providing only essential information about the data to the outside world, 
hiding the background details or implementation.

Consider a real life example of a man driving a car. 
The man only knows that pressing the accelerators will increase the speed of car or applying brakes will stop the car 
but he does not know about how on pressing accelerator the speed is actually increasing, 
he does not know about the inner mechanism of the car or the implementation of accelerator, 
brakes etc in the car. This is what abstraction is.
*/

#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};
class Employee:AbstractEmployee {
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
    void AskForPromotion(){
        if(Age>=30)
        cout<<Name<<" got "<<"Promoted"<<endl;
        else
        cout<<Name<<" "<<"No Promotion"<<endl;
    }
};
int main()
{
    Employee employee1=Employee("Mehir","Amazon",23);
    Employee employee2("Sahil","Google",30);

    employee1.AskForPromotion();
    employee2.AskForPromotion();

} 