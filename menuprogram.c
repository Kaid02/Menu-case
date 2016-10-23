/*
Student Name : Kabir D Shrestha
Subject : Programming Fundamental
Lab No. : 06
Program : Write a C program sipmle calculation using 
		  a.switch case
		  b.break
Date : 2016-10-23
*/
#include<stdio.h>
int main(){
	int a,b,result;
	char c;
	
	printf("\nEnter the first value:\n");
	scanf("%d",&a);
	
	printf("\nEnter the second value:\n");
	scanf("%d",&b);
	
	printf("\n\nMenu for Arthimetic Opertor\n");
	printf("\n\tFor Addition : Type 1\n ");
	printf("\n\tFor Difference : Type 2\n ");
	printf("\n\tFor Multiplication : Type 3\n ");
	printf("\n\tFor Division : Type 4\n  ");
	printf("\n\tFor Modulus : Type 5\n  ");
	printf("\n\nSelect the number : "); 
	 
	scanf("%c",result);
	
	c=getchar();
		switch(c){
		case'+': case'1':
			result=a+b;
			printf("\nSum of two numbers : %d\n",result);
				break;
		
		case'-': case'2':
			result=a-b;
			printf("\nDifference of two numbers  : %d\n",result);
				break;
		
		case'*': case'3':
			result=a*b;
			printf("\nMultiplication of two numbers  : %d\n",result);
				break;
		
		case'/': case'4':
			result=a/b;
			printf("\nDivison of two numbers : %d\n",result);
				break;
		     
		case'%': case'5':
			result=a%b;
			printf("\nModulus of two numbers  : %d\n",result);
				break;
		
		default:
			printf("\nChoose valid operator");
		}
		
		printf("\n\n\tTo Exit the Menu Type 0 ");
		
	
		return 0;
	}	  
	
	
