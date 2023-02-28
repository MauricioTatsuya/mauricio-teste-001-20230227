/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
int n1 = 0,n2 = 1, n3 = 0,i,number;
cout<<"Digite o número a ser verificado se pertence a seqüência de Fibonacci: ";
cin>>number;
i = number;
while (i > n3) {
   n3 = n1 + n2;
   n1 = n2;
   n2 = n3;
}
if ( i == 0) {
   cout<<"O número 0 está na seqüência de Fibonacci \n" ;
} else if (i == n3) {
   cout<<"O número ";
   cout<<number;
   cout<<" está na seqüência de Fibonacci\n";
}else {
   cout<<"O número "<<number<<" não está na seqncia de Fibonacci\n";
}
return 0;
}
