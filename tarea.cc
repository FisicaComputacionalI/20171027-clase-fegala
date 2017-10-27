//Programa que incluye los programas de numeros pares y primos
#include <iostream>
using namespace std;
int main()
{
  int s=12;
  int p=2;
  int flag=0;
  int divisor=0;
  cout<<"Inserte nùmero p "<<endl; cin>>p;
  if((p%2)<=0)
    p=p+1;
  for (int i=2; i<=p/2; i++)
    {if(p%i==0){flag=1; divisor=i; break;}}
  if(flag==1)
p=p+2;

return 0;
}
 
