// problem on banking operation
#include<stdio.h>;
//"math.h" is a library used for some special mathematical operation
#include<math.h>;
int in(int ea){
    int n,year,ac;
    float p,t,a;
    if(ea==1){
        printf("enter the amount you want to fixed deposit: ");
        scanf("%d",&n);
        printf("For how many years want to fixed deposit: ");
        scanf("%d",&year);
        t=4*year;
        p=pow(1.010175,t);
        a=n*p;
        printf("By the end of %d you will get a total amount of %f",year,a);
        printf("\nAnd your interest is %f",a-n);
    }
    else if(ea==2){
        printf("enter the correct account year: ");
        scanf("%d",&ac);
        ea=account(ac);
        in(ea);
    }
    else {
        printf("Enter correct choice: ");
        ea=account(ac);
        in(ea);
    }
return 0;
}
//function to calculate simple interest for your fixed deposit
int interest(int ac){
int i,n,ea,year;
ea= account(ac);
 in(ea);
 return 0;
}
//condition to be applied for balance function after conforming the account number
int bl(int ea,int bal){
    int ac;
    if (ea==1){
    printf("Your account balance is %d",bal);
    }
else if (ea==2){
     printf("Enter your correct A/C Number: ");
     scanf("%d",&ac);
     ea=account(ac);
     //re running this function
     bl(ea , bal);
    }
else {
    printf("Enter a correct choice: ");
    ea=account(ac);
    bl(ea,bal);
    }
    return 0;
}
//conforming the account number
int account(int ac){
    int ea;
    printf("\nyour account number is %d",ac);
    printf("\nPress 1:To confirm");
    printf("\nPress 2:To Edit your A/C Number\n");
    scanf("%d",&ea);
    return ea;
}
int balance(int ac){
    int ea,d,bal;
    bal=10000;
    ea= account(ac);
    bl(ea,bal);

return bal;
}
//conditions to be applied for deposit function after conforming the account number.
//ad is the function name which can be only used inside deposit function.
 int ad(int ea,int bal){
     int d,ac;
if (ea==1){

    printf("enter the amount You want to deposit: ");
    scanf("%d",&d);
    printf("Your Old account Balance is %d\n",bal);
    bal=bal+d;
    printf("Your New Balance is:%d\n",bal);
}
else if (ea==2){
     printf("Enter your correct A/C Number: ");
     scanf("%d",&ac);
     ea=account(ac);
     ad(ea,bal);
     //re running the code after editing the account number

}
else {
    printf("Enter a correct choice: ");
    ea=account(ac);
    int ad(ea);
    }
    return 0;
 }
// code for the deposit function.
int deposit(int ac){
 int ea,d,bal;
 bal=10000;
 ea=account(ac);
//the function for the remaining operation the code is at line "51"
 ad(ea,bal);

 return 0;
}
//conditions to be applied for withdrawal function after conforming the account number.
int wl(int ea, int bal){
    int ac,w;
    if (ea==1){
    printf("enter the amount You want to withdrawal: ");
    scanf("%d",&w);
    if(bal>=w){
    printf("Your Old account Balance is %d\n",bal);
    bal=bal-w;
    printf("Your New Balance is:%d\n",bal);
    }
    else{
        printf("In suffecient Balance\n");
        printf("Your account Balance is %d\n",bal);
    }
}
else if (ea==2){
     printf("Enter your correct A/C Number: ");
     scanf("%d",&ac);
     ea=account(ac);
     wl(ea,bal);
}
else {
    printf("Enter a correct choice: ");
    ea=account(ac);
     wl(ea,bal);
}
  return 0;
}
//code for the withdrawal function.
int withdrawal(int ac){
    int w,bal,ea;
    bal=10000;
    ea=account(ac);
    wl(ea,bal);
    return 0;
}
//function for asking what task should be done.
int task(){
    int n;
    printf("\n\nSTEP 2");
    printf("\nWhat task would you like to perform:\n");
     printf("1.Deposit \n");
    printf("2.withdrawal \n");
    printf("3.Balance verification\n");    
	printf("4.Interest Calculation\n");
    printf("5.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
   return n;
}
//the switch statement after taking the input from the task
int choice(int ac){
    int n;
switch(n){
    case 1:
        printf("\n\nDEPOSIT");
        deposit(ac);
        break;
    case 2:
        printf("\n\nWITHDRAWAL");
        withdrawal(ac);
        break;
    case 3:
        printf("\n\nBALANCE");
        balance(ac);
        break;
    case 4:
        printf("\n\nINTEREST");
        interest(ac);
        break;
    case 5:
        break;
    default:
        printf("enter a proper choice:");
        task(n);
        break;
    }
    return 0;

}
//function for again using the operation
int again(int g){
 int w,i,d,b,n,ac,bal;
printf("\n\n\nSTEP 1:\n");
printf("Enter your A/C number: ");
scanf("%d",&ac);
 n=task();
 if(n>5 || n<=0){
    printf("enter a proper choice\n");
    n=task();
    choice(ac);
 }
else{
choice(ac);
}
printf("\n\nPress 1: For an another operation");
printf("\npress 2:To exit\n");
scanf("%d",&g);
 if(g==1){
    again(g);
 }
 return 0;
}

int main(){
int w,i,d,b,n,ac,bal,g;
long long int hall;
printf("\n\n\t\t\t\tWELCOME TO CBIT ONLINE BANKING SYSTEM\n");
printf("\t\t\t\t_____________________________________\n");
printf("STEP 1:\n");
printf("Enter your Admission Number:");
scanf("%lld",&hall);
printf("Enter your A/C number: ");
scanf("%d",&ac);
 n=task();
 if(n>5 || n<=0){
 	printf("\n");
    printf("enter a proper choice\n");
    n=task();
    choice(ac);
 }
else{
choice(ac);
}
printf("\n\nPress 1: For an another operation");
printf("\npress 2:To exit\n");
scanf("%d",&g);
if(g==1){
    again(g);
}
printf("\n\n\n\n\t\t\t\t\tTHANK YOU & VISIT AGAIN\n");
printf("\t\t\t\t\t***********************");
return 0;
}


