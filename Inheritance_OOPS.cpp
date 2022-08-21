/*
The capability of a class to derive properties and characteristics from another class is called Inheritance. 
Inheritance is one of the most important features of Object-Oriented Programming. 

Inheritance is a feature or a process in which, new classes are created from the existing classes. 
The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. 
The derived class now is said to be inherited from the base class.
*/

#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};
class Employee:AbstractEmployee {
private:                  // can only be accessed in this class
    
    string Company;
    int Age;
protected:                // can be accessed in derived classes
    string Name;
public:                   // can be accessed anywhere outside the class
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

class Developer:public Employee {  //by adding public we can access the funtion of employee directly outside in developer object , without public we can access only in developer class
public:
    string FavProgrammingLanguage;
    Developer(string name,string company,int age,string favProgrammingLanguage):Employee(name,company,age)
    {
        FavProgrammingLanguage=favProgrammingLanguage;
    }
    void FixBug(){
        cout<< Name <<" fixed bug using "<<FavProgrammingLanguage<<endl;
    }
};

class Teacher:public Employee {
public:
    string Subject;
    void PrepareLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson."<<endl;
    }
    Teacher(string name,string company,int age,string subject)
    :Employee(name,company,age){
         Subject=subject;
    }
};
int main()
{

    Developer d=Developer("Mehir Routh","AMAZON",23,"C++");
   
    d.IntroduceYourself();
    d.FixBug();
    Teacher t("Mehir","Unacademy",30,"C++ Programming");
    t.PrepareLesson();
    t.AskForPromotion();
} 