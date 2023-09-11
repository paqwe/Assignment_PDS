//write a program to find out the largest number among three numbers
// #include<stdio.h>
// int main()
// {
// 	int n1,n2,n3;
// 	printf("enter 1st number: ");
// 	scanf("%d",&n1);
// 	printf("enter 2nd number: ");
// 	scanf("%d",&n2);
// 	printf("enter 3rd number: ");
// 	scanf("%d",&n3);
// 	if(n1>n2 && n1>n3)
// 		printf("%d is the largest number",n1);
// 	else if(n2>n1 && n2>n3)
// 		printf("%d is the largest number",n2);
// 	else
// 		printf("%d is the largest number",n3);
// }



// //Write a program to find out the smallest number among three numbers.
// #include<stdio.h>
// int main()
// {
// 	int n1,n2,n3;
// 	printf("enter 1st number: ");
// 	scanf("%d",&n1);
// 	printf("enter 2nd number: ");
// 	scanf("%d",&n2);
// 	printf("enter 3rd number: ");
// 	scanf("%d",&n3);
// 	if(n1<n2 && n1<n3)
// 		printf("%d is the smallest number",n1);
// 	else if(n2<n1 && n2<n3)
// 		printf("%d is the smallest number",n2);
// 	else
// 		printf("%d is the smallest number",n3);
// }



// // Write a program to input Roll no, Registration No, Name, Branch, and five Subject marks . Calculate total mark and percentage. Calculate Grade as per your university norms.
// #include<stdio.h>
// int main()
// {
// 	int roll_no,reg_no,os,pds,coa,dm,dbms,total_marks,perc_marks;
// 	char name[20], branch[20];
// 	printf("enter name: ");
// 	scanf("%s",&name);
// 	printf("\nenter roll number: ");
// 	scanf("%d",&roll_no);
// 	printf("\nenter registration number: ");
// 	scanf("%d",&reg_no);
// 	printf("\nenter branch: ");
// 	scanf("%s",&branch);
// 	printf("\nenter the  marks scored in os: ");
// 	scanf("%d",&os);
// 	printf("\nenter the  marks scored in pds: ");
// 	scanf("%d",&pds);
// 	printf("\nenter the  marks scored in coa: ");
// 	scanf("%d",&coa);
// 	printf("\nenter the  marks scored in dm: ");
// 	scanf("%d",&dm);
// 	printf("\nenter the  marks scored in dbms: ");
// 	scanf("%d",&dbms);
// 	total_marks=os+coa+dm+pds+dbms;
// 	perc_marks=(os+coa+dm+pds+dbms)/5;
// 	printf("\n total marks you have scored is: %d",total_marks);
// 	printf("\npercentage of marks you have scored is: %d",perc_marks);
// 	if(perc_marks>=90 && perc_marks<=100)
// 		printf("\nyour grade is : O ");
// 	else if(perc_marks>=80 && perc_marks<90)
// 		printf("\nyour grade is : E ");
// 	else if(perc_marks>=70 && perc_marks<80)
// 		printf("\nyour grade is : A ");
// 	else if(perc_marks>=60 && perc_marks<70)
// 		printf("\nyour grade is : B ");
// 	else if(perc_marks>=50 && perc_marks<60)
// 		printf("\nyour grade is : C ");
// 	else if(perc_marks>=40 && perc_marks<50)
// 		printf("\nyour grade is : D ");
// 	else
// 		printf("\nyour grade is : F ");

	
// }




// //    5. Write a program in C to Generate Electric Bill  by taking input such as Consumer number, Consumer Name, Meter Number, Previous Meter Reading and Current meter reading as per the following condition :
// 	Total Units  upto 100 units  	Charges  2.00 Rupees per unit.
// 	> 100 and  <=200 		Charges  3.00 Rupees per unit.
// 	> 200 and  <=300 		Charges  4.50 Rupees per unit.
// 	> 300 and  <=500 		Charges  5.50 Rupees per unit.
// 	>500 units			Charges  7.00 Rupees per unit.


// #include<stdio.h>
// int main()
// {
// 	int meter_units, consumer_num, meter_num;
// 	char consumer_name[20];
// 	float electric_bill;
// 	printf("enter consumer name: ");
// 	scanf("%s",&consumer_name);
// 	printf("enter consumer number: ");
// 	scanf("%d",&consumer_num);
// 	printf("enter meter number: ");
// 	scanf("%d",&meter_num);
// 	printf("enter meter units: ");
// 	scanf("%d",&meter_units);
// 	if(meter_units>100 && meter_units<=200)
// 		electric_bill=meter_units * 3 ;
// 	else if(meter_units<100)
// 		electric_bill=meter_units * 2 ;
// 	else if(meter_units>200 && meter_units<=300)
// 		electric_bill=meter_units * 4.5 ;
// 	else if(meter_units>300 && meter_units<=500)
// 		electric_bill=meter_units * 5.50 ;
// 	else
// 		electric_bill=meter_units * 7.00 ;

// 	printf("your eletricity bill is: %.2f",electric_bill);

		
// }




// //Write a program in C  to check whether the entered year is Leap Year or not.
// #include<stdio.h>
// int main()
// {
// 	int year;
// 	printf("enter year: ");
// 	scanf("%d",&year);
// 	if(year%4==0)
// 		if(year%100==0)
// 			if(year%400==0)
// 				printf("its a leap year");
// 			else
// 				printf("its not a leap year");
// 		else
// 			printf("its a leap year");
// 	else
// 		printf("its not a leap year");
// }


















