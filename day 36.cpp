#include<iostream>
#include <ctype.h>
#include<string.h>
using namespace std;
int main()
{
 char str[20];
 int l = 0;
 cout<<"Enter a string: ";
 cin>>str;
 l = strlen(str);
 for(int i=0;i<l;i++)
 {
 if(i==0||i==(l-1))
 {
 str[i]=toupper(str[i]);
 }
 else if(str[i]==' ')
 {
 str[i-1]=toupper(str[i-1]);
 str[i+1]=toupper(str[i+1]);
 }
 }
 cout<<"After conversion of first and last letter to uppercase: "<<str;
 return 0;
}
