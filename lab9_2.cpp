#include<iostream>
using namespace std;

void printO(int N,int M)
{
    if(N <= 0 || M <= 0)
    {
    cout <<"Invalid input";
    }
    else
    {
        for(int i = 1 ; i<= N ; i++)
        {
            for(int b=1 ; b <= M; b++)
            {
            cout<<"O";
            }
        cout << "\n" ;
        }
    }
}
