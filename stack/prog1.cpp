// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<int> st;
//     string s="23*4-2/";
//     for(int i=0;i<s.length();i++){
//         char c=s[i];
//         if(isdigit(c)){
//             st.push(c-'0');
//         }
//         else{
//             int first=st.top();
//             st.pop();
//             int second=st.top();
//             st.pop();
//             if(c=='*') st.push(second*first);
//             else if(c=='/') st.push(second/first);
//             else if(c=='+') st.push(second+first);
//             else if(c=='-') st.push(second-first);
//             else{
//                 cout<<"Invalid input";
//                 return 0;
//             }
//         }
//     }
//     cout<<st.top();
//     return 0;
// }

//STACK IMPLEMENTATION OF THE EXPRESSION
#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int main()
{
    string exp;

    cout << "Enter postfix expression: ";
    cin >> exp;

    stack<int> s;

    // Traverse the expression from left to right
    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        // If the character is a number
        if (isdigit(ch))
        {
            int value = ch - '0';
            s.push(value);
        }

        // If the character is an operator
        else
        {
            // First operand
            int B = s.top();
            s.pop();

            // Second operand
            int A = s.top();
            s.pop();

            int result;

            // Perform the operation
            if (ch == '+')
            {
                result = A + B;
            }
            else if (ch == '-')
            {
                result = A - B;
            }
            else if (ch == '*')
            {
                result = A * B;
            }
            else if (ch == '/')
            {
                result = A / B;
            }

            // Push result back into stack
            s.push(result);
        }
    }

    // Final answer is at the top
    cout << "Answer = " << s.top();

    return 0;
}