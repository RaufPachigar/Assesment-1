// food system

#include<stdio.h>
main()
{
	int choice,q,total;
	printf("==============FOOD SYSTEM===============\n");
	printf("1. pizza --------------180 rs/pc\n");
	printf("2. burger --------------50 rs/pc\n");
	printf("3. dosa --------------80 rs/pc\n");
	printf("4. idli --------------40 rs/pc\n");
	
//	int choice,q,total;
	printf("enter your choice :\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("you have enter pizza\n");
		      printf("enter your quantity :\n");
		      scanf("%d",&q);
		      total =q*180;
		      printf("total is :%d",&total);
		      break;
		      
		case 2:printf("you have enter burger\n");
		      printf("enter your quantity :\n");
		      scanf("%d",&q);
		      total =q*50;
		      printf("total is :%d",&total);
		      break;
		      
		case 3:printf("you have enter dosa\n");
		      printf("enter your quantity :\n");
		      scanf("%d",&q);
		      total =q*80;
		      printf("total is : %d",&total);
		      break;
		      
		case 4:printf("you have enter idli\n");
		      printf("enter your quantity :\n");
		      scanf("%d",&q);
		      total =q*40;
		      printf("total is : %d",&total);
		      break;
		      
		      default :printf("worng input");
	}
}
