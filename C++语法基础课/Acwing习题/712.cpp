#include <iostream>

using namespace std;

int main()
{
   double a;
   int c = 0;
   for(int i=0;i<6;i++)
   {
       cin >> a;
       if(a>0) c++;
   }
   
   printf("%d positive numbers", c);
}