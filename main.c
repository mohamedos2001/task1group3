#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 union {
    struct {
    int x;
    bool inactive;
    } first;
    } active;
int main()
{

   union active;
   active.first.inactive = false;
 char user[50];
 printf("Enter Username of Rigister :\t");
 scanf("%s",&user);
 int password;
 printf("Enter Password of Rigister :\t");
 scanf("%d",&password);

if( active.first.inactive ){

printf("Enter Number inActive :\t");
scanf("%d",&active.first.x);
if(active.first.x == 1){
    char Username[20];
printf("Enter Username of Login :\t");
scanf("%s",&Username);
int Password;
printf("Enter Password of Login :\t");
scanf("%d",&Password);
if( strcmp(&Username,user)==0 && Password == password){
    printf("Login success");
}else{
    printf("Username Or Password is Wrong");
}
}else{
printf("Flag is Wrong");
}
}else{
printf("Bool is Wrong");
}


}
