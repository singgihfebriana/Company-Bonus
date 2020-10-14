//Name		: Singgih Febriana
//Date		: October 14, 2020
//Program	: Company bonus on salary



#include<stdio.h>
	
int salary;
int bonus;
int extrabonus;
	
char gender;

void _salary(){
		printf("\n\nEnter your Salary = Rp.  ");
		scanf("%d",&salary);
}

void _malebonus(){
		bonus=salary*0.05;
		salary+=bonus;
		
}

void _femalebonus(){
	bonus=salary*0.1;
	salary+=bonus;
}

main(){
	
	printf("\n\n----------------Bonus Calculator Program----------------\n\n");
	
	printf("\tNote : \n\n");
	printf("\tBonus salary to all employees on New year\n\n");
	printf("\t>5 percen to Male\n");
	printf("\t>10 percen to female\n");
	printf("\t>2 percen extra for salary employees less than 10000 \n\n");
	
	printf("Type your gender M for male and F for female : ");
	scanf("%c",&gender);
	
	_salary();
		
	if (gender=='M'&&salary>=10000){
		
		_malebonus();
		printf("\n\nyour salary is Rp %d \n\n",salary);
			
		}
	if (gender=='M'&&salary<10000){
			bonus=salary*0.05;
			extrabonus=salary*0.02;
		    salary+=(bonus+extrabonus);	
			
			printf("\n\nyour salary is Rp %d \n\n",salary);
	}
	
	if (gender=='F'&&salary>=10000){
		
		_femalebonus();
		printf("\n\nyour salary is Rp %d \n\n",salary);
			
		}
	if (gender=='F'&&salary<10000){
			bonus=salary*0.1;
			extrabonus=salary*0.02;
		    salary+=(bonus+extrabonus);	
			
			printf("\n\nyour salary is Rp %d \n\n",salary);
	}
	
}
