#include<iostream>
using namespace std;
class Employee{
    
    ;
    string name;
    int age;
    char gender;

    public:
    Employee(string name,int age , char gender){
        this->name=name;
        this->age=age;
        this->gender=gender;
    }

    bool isEligible(){
        if(gender == 'M')
        return age>21;
        else if(gender == 'F')
        return age>20;
        else return false;

    }
    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Eligible "<<(isEligible()? "yes":"no")<<endl;
    }
};

int main(){
    Employee e1("Fardeen",20,'M');
    e1.print();
    return 0;
}


//static data members  -> dos'nt belong to object ,it belongs to class  