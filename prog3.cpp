//pre
// #include<bits/stdc++.h>
// using namespace std;

// class number{
//     public:
//     int n;
//     number(int n):n(n) {}
//     void operator++(){
//         ++n;
//     }
//     void show(){
//         cout<<n<<endl;
//     }
// };
// int main(){
//     number n1(10);
//     n1.show();
//     ++n1;
//     n1.show();
// }

//post
#include<bits/stdc++.h>
using namespace std;

class number{
    public:
    int n;
    number(int n):n(n) {}
    void operator++(int){
        n++;
    }
    void show(){
        cout<<n<<endl;
    }
};
int main(){
    number n1(10);
    n1.show();
    n1++;
    n1.show();
}
