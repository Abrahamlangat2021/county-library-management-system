
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void user(void);
int main()
{
	int num;
	printf("\t\t\tcounty library\n\n");
	printf("\t1.user\n\t2.catalogue\n\t3.issuance\n\t4.serial\n\t5.acquisitions\n\t6.exit\n -->");
	scanf("%d",&num);
	if(num==1)
	{
		user();
}
	else if(num==2)
	{
		printf("catalogue()");

	}
	else if(num==3)
	{
		printf("issuance();");


	}
	else if(num==4)
	{
		printf("serial()");
	\
	}
	else if(num==5)
	{
		printf("acquisitions();");
	}
	else if(num==6)
	{
		printf("----------thank you for visiting count library ------");
	}
	else
	{
		printf("invalid input! \nplease press any key to try again");


	}


}
void user(void)
{
	char name;
	int user;
	printf("please enter your name to log in:  ");
	scanf("%s",&name);
	system("cls");
	printf("\t\t\t\tcounty library\n");
	printf("hello %c\n",name);
   printf(" what would you like to do? \n");
   printf("\t\n1.view users");
   printf("\t\n2. add new users");
   printf("\t\n3.edit  user");
   printf("\t\n4. delete user");
   printf("\t\n5.change password");
   printf("\t\n6.log out \n-->");
   scanf("%d",&user);
   if(user==1)
	{
		printf("view  user");
}
	else if(user==2)
	{
		printf("add new users");

	}
	else if(user==3)
	{
		printf("edit  user");


	}
	else if(user==4)
	{
		printf("delete user");
	\
	}
	else if(user==5)
	{
		printf("change password");
	}
	else if(user==6)
	{
		exit(0);
	}
}

