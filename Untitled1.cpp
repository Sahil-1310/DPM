#include<stdio.h>
#include<math.h>
int main()
{
	int s=0;
float pf,pfn,pm,pmn,mat,succ,success,failure,et,pasr,losr,mr,fn,fi,pn;
int fail;
float n=1000000;
printf("Time For A Page Fault For Empty Page :\n ");
scanf("%f",&pf);
pfn=pf*n;
printf("Time For Modified Page :\n");
scanf("%f",&pm);
pmn=pm*n;
printf("Enter Memory Access Time :\n");
scanf("%f:",&mat);
printf("Reading Updated Page Percentage :\n");
scanf("%f",&succ);
success=succ/100;
fail=100-succ;
failure=fail/100;
printf("Reading Unupdated Page Percetnage :%d",fail);
printf("\nEnter The Effective Time : ");
scanf("%f",&et);
losr=failure*pfn;
pasr=success*pmn;
mr=mat+pasr+losr;
fn=mat-mr;
fi=mat-et;
pn=fi/fn;
printf("Therefore Page Fault Related To Above Details is : ");
printf("\n\n is %f ns ",pn);
return 0;
}
