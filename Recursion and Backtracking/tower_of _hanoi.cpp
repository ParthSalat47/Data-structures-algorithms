#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 

void toh(int n,char source,char aux,char dest)
{
    
    //base case
    if (n == 1)
    {
        cout << "Moving ring "<< n <<" from "<< source <<" to " << dest<< endl;     //left  ,n,source,dest
        return;
    }
    
    //move n-1 discs from source to aux
    toh(n-1,source,dest,aux);
    
    //move nth disc from source to dest
    cout << "Moving ring "<< n <<" from "<< source <<" to " << dest<< endl;     //left  ,n,source,dest
    
    //move n-1 discs from aux to dest
    toh(n-1,aux,source,dest);
    
    //return;
}

int main() 
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);   

int input;
cin >> input;

toh(input,'A','C','B');





return 0;     
}







