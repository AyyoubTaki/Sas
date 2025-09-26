#include<stdio.h>
#include<string.h>

int main()
{
   char str[100];
   char to_find[100];
  
    printf("enter your string :");
    scanf("%s",str);
    printf("enter what do you want to find :");
    scanf("%s",to_find);

  if(strstr(str ,to_find) != 0)
      printf("true");
  else 
      printf("false");
}