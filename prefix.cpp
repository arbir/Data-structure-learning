#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class stack_
{
    int arr[100];
    int top_ ;
public:
    stack_(){
        top_ = 0;
    }
    void push(int n)
    {
        arr[top_]=n;
        top_++;
    }
    int top(void)
    {
        if(top_)return arr[top_-1];
        else cout<<"empty stack\n";

    }
    void pop(void)
    {
        if(top_)top_--;
        else cout<<"empty stack\n";

    }
};


stack_ s;
//int r ;
bool isoperator(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/')return 1;
    else return 0;
}
bool isnumber(char c)
{
    if(c>=48 && c<=57)return 1;
    else return 0;
}
int perform(int op1 , int op2 , char c)
{
    if(c=='+')return op1 + op2;
    else if(c=='-')return op1 - op2;
    else if(c=='*')return op1 * op2;
    else if(c=='/')return op1 / op2;
}
int evaluate_exp(string exp)
{
    for(int i=exp.size()-1 ; i>=0 ; i--)
    {
        if(exp[i]==',' || exp[i]==' ')
        {
            continue;
        }
        else if(isoperator(exp[i]))
        {
            int op1 = s.top();
            s.pop();
            int op2 = s.top();
            s.pop();
            int result = perform(op1 , op2 ,exp[i]);
            s.push(result);
        }
        else if(isnumber(exp[i]))
        {
            int operand = 0;
            int x=0;
            while(i>0 && isnumber(exp[i]))
            {
                operand = operand + (exp[i]-'0') * pow(10,x);
                i--;
                x++;
            }
            i++;
            s.push(operand);
        }
    }
        return s.top();

}


int main()
{
    int r ;
    string exp;
    getline(cin,exp);
    r=evaluate_exp(exp);
    cout<<r<<endl;



}
