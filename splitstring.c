#include<stdio.h>
#include<string.h>
char split_str(char *a,char b)
{while(*a!=b)
 {  printf("%c",*a);
    a++;
 }
 printf("\n");
a++;
 printf("Splitted string is:");
 printf("%s",a);
}
void case_chg(char *s)
{
     while(*s!='\0')
     {       
       if(*s>='a' && *s<='z')
       {*s=*s+32;
        printf("%c",*s++);
       }
  if(*s>='A' && *s<='Z')
  {*s=*s-32;
   printf("%c",*s++);
  }
     }
 void encrypt(char *s,int n)
 {int i,j=strlen(s);
  printf("\nThe encrypted string is\n");
  for(i=0;i<j;i++)
  {if(isupper(*s)||islower(*s))
       *s=(*s+n)%26;
   printf("%c",*s++);
  }
  void decrypt(char *s,int n)
  {int i,j=strlen(s);
   printf("\nDecrypted string is\n");
   for(i=0;i<j;i++)
   {if(isupper(*s)||(islower(*s))
       *s=(*s-n)%26;
       printf("%c",*s++);
       }
       }
 void main()
   {
     char a[50],b; 
   printf("\nEnter the string\n");
gets(a);
  printf("enter the char. from where string you want to be split\n");
 scanf("%c",b);
  split_string(&a[0],b);
  case_chg(&a[0]);
 printf("Enter a number\n");
   scanf("%d%",n);
  encrypt(&a[0],n);
  decrypt(&a[0],n);
         }        
         
 
