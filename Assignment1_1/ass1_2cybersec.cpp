/* Name - Siddhi Khetan
    Section - C
    class roll no -51
    University roll no - 2014886 */




#include <iostream>
#include <string.h>
using namespace std;

int main()
{
       char str1[10],str2[10],c;

       do
       {
               cout<<"\nENTER A STRING: ";
               cin>>str1;

               strcpy(str2,str1);

               strrev(str1);

               if(strcmp(str1,str2)==0)
                       cout<<"GIVEN STRING IS PALINDROME";
               else
                       cout<<"GIVEN STRING IS NOT PALINDROME";

   }while(c=='y'||c=='Y');

           return 0;
}
