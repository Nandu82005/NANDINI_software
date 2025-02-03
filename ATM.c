#include<stdio.h>
#include<string.h>
struct user{
char name[20];
char pass[6];
int balance;
int deposit[10];
int withdraw[10];
}
user1={"nandini","443646",0};
int d_i=0,w_i=0;
void deposit()
{
printf("\n\n\t\tplease enter your password");
char pin[100];
int i=0;
char ch;
while((ch=getchar())!='\r'&&i<6){
putchar('*');
pin[i++]=ch;
}
pin[i]='\0';
if(strcmp(pin,user1.pass)==0){
printf("\nwelcome%s",user1.name);
printf("\nenter deposit amount");
int dep;
scanf("%d",&dep);
user1.balance+=dep;
}
}
void main(){
while(1){
    printf("\n\n\n\t\t\t****************************");
    printf("\n\t\t\t*  welcome to ATM machine  *");
    printf("\n\t\t\t****************************");
    printf("\n\n\n\t\t\t1>deposit");
     printf("\n\n\n\t\t\t2>withdraw");
      printf("\n\n\n\t\t\t3>balance enquiry");
       printf("\n\n\n\t\t\t4>transaction history");
        printf("\n\n\n\t\t\t5>pin change");
         printf("\n\n\n\t\t\t6>cancle");
         printf("\nplease enter your choice:");
         int choice;
         scanf("%d",&choice);
         switch(choice){
         case 1:deposit();
         break;
         }
         break;


}
}
