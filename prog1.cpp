#include<iostream>
using namespace std;
// class Employee{
    
//     ;
//     string name;
//     int age;
//     char gender;

//     public:
//     Employee(string name,int age , char gender){
//         this->name=name;
//         this->age=age;
//         this->gender=gender;
//     }

//     bool isEligible(){
//         if(gender == 'M')
//         return age>21;
//         else if(gender == 'F')
//         return age>20;
//         else return false;

//     }
//     void print(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Gender: "<<gender<<endl;
//         cout<<"Eligible "<<(isEligible()? "yes":"no")<<endl;
//     }
// };

// int main(){
//     Employee e1("Fardeen",20,'M');
//     e1.print();
//     return 0;
// }


// //static data members  -> dos'nt belong to object ,it belongs to class  

class age{
    public:
    string name;
    int age;
    int *up_age;

    void display(){
        cout<<age<<" ";
        cout<<*up_age;
    }
};
int main(){
    age a1;
    string name;
    getline(cin>>ws,a1.name);
    int age;
    int *upage;
    cin>>a1.age>>up_age;
    a1.up_age=&upage;
    a1.display();
    
}