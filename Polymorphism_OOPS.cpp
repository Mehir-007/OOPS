/*
The word “polymorphism” means having many forms. 
In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. 
A real-life example of polymorphism is a person who at the same time can have different characteristics. 
Like a man at the same time is a father, a husband and an employee. So the same person exhibits different behavior in different situations. 
This is called polymorphism. Polymorphism is considered as one of the important features of Object-Oriented Programming. 
In C++, polymorphism is mainly divided into two types:

Compile-time Polymorphism
Runtime Polymorphism
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
    virtual void Work(){
        cout<<Name<<" is checking Mail"<<endl;
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
    void Work(){
        cout<<Name<<" is writing "<<FavProgrammingLanguage<<" code."<<endl;
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
    void Work()
    {
        cout<<Name<<" is teaching "<<Subject<<endl;
    }
};
int main()//The most common use of ploymorphism is when a
{         //parent class reference is used to refer to a child class object

    Developer d=Developer("Mehir Routh","AMAZON",23,"C++");
    Teacher t("Mehir","Unacademy",30,"C++ Programming");
    Employee* e1=&d;
    Employee* e2=&t;

    e1->Work();
    e2->Work();

    
    
} 