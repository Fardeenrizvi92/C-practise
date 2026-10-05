// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream fout("file.txt");
//     fout<<3<<"\n";
//     fout<<5<<"\n";
//     fout.close();

//     ifstream fin("file.txt");
//     int a,b;
//     fin>>a;
//     fin>>b;


//     int result=a+b;
//     ofstream fout2("file.txt",ios::app);
//     fout2<<result;
//     fout2.close();
// }



#include <iostream>
#include <fstream>
using namespace std;
int main() {

 
  ofstream of("students.txt");
  of << "isuhdushd jshdjs hdsjgd jsdgj sd";
  of.close();

  ifstream file("students.txt");
  cout << "Current position: " << file.tellg() << endl;
  file.seekg(10); // move to the beginning
  cout << "New position: " << file.tellg() << endl;
  string s;
  file >> s;
  cout << s << endl;
 
//  ifstream file("students.txt");
//  string name;
//  while (file >> name) {
//  cout << name << endl;
//  }
//  file.close();
//  return 0;
}