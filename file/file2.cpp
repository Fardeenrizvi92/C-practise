//write data to file
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream fout("student.txt");
//     fout<<"rahuldhdsjfh"<<endl;
//     fout<<"90";
//     fout.close();
//     cout<<"saved";
// }


//reading data from file
// #include<iostream>
// #include<fstream>
// #include <string>
// using namespace std;
// int main(){
//     ifstream fin("student.txt");
//     string name;
//     int marks;
//     fin>>name;
//     fin>>marks;
//     cout<<"name : "<<name<<endl;
//     cout<<"marks : "<<marks<<endl;

//     fin.close();
    
// }


//reading all nos from a file
// #include<iostream>
// #include<fstream>
// #include <string>
// using namespace std;
// int main(){
//     ifstream fin("student.txt");
//     if(!fin){
//         cout<<"file not found ";
//         return 1;
//     }
//     int number;
//     while(fin>>number){
//         cout<<number<<" ";
//     }

//     fin.close();
    
// }

//count spaces,char,newlines
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ifstream fin("data.txt");

//     if (!fin)
//     {
//         cout << "File could not be opened";
//         return 1;
//     }

//     char ch;
//     int characters = 0;
//     int spaces = 0;
//     int newlines = 0;

//     while (fin.get(ch))
//     {
//         characters++;

//         if (ch == ' ')
//         {
//             spaces++;
//         }

//         if (ch == '\n')
//         {
//             newlines++;
//         }
//     }

//     cout << "Characters: " << characters << endl;
//     cout << "Spaces: " << spaces << endl;
//     cout << "Newline characters: " << newlines << endl;

//     fin.close();
//     return 0;
// }

//seekg
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ifstream fin("student.txt");
//     char ch;
//     fin.seekg(5);
//     fin.get(ch);
//     cout<<ch;
//     fin.close();
// }

// We want to read the character at position 5.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("data.txt");
    fin.seekg(5,ios::beg);
    char ch;
    if(fin.get(ch)){
        cout<<ch;
    }
    fin.close();
}
