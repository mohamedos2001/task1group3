#include <stdio.h>
#include <stdlib.h>

int main()
{
 char user[50];
 printf("Enter Username of Rigister :\t");
 scanf("%s",&user);
 int password;
 printf("Enter Password of Rigister :\t");
 scanf("%d",&password);
// printf("%s \n",user);
// printf("%d",password);

char Username[20];
printf("Enter Username of Login :\t");
 scanf("%s",&Username);
int Password;
printf("Enter Password of Login :\t");
 scanf("%d",&Password);

if( strcmp(&Username,user)==0 && Password == password){
    printf("Login");
}else{
    printf("Username Or Password is Wrong");
}



}
