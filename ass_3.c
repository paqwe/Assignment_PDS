// //program to print all digits below 10 using goto.
// #include<stdio.h>
// void main()
// {
// 	int i=0;
// 	begin:
// 		printf("i=%d\n",i);
// 		i++;
// 	if(i>=10)
// 		goto end;

// 	goto begin;

// 	end:
// 		printf("exit");
// }


// //check if a number is even or odd using goto.
// #include<stdio.h>
// void main()
// {
// 	int n;
// 	printf("enter a numnber: ");
// 	scanf("%d",&n);
// 	if(n%2==0)
// 		goto even;
// 	else
// 		goto odd;

// 	even:
// 		printf("%d is even",n);
// 		return;

// 	odd:
// 	printf("%d is odd",n);

// }


// //c program to print numbers from 1 to 10 using goto statement.
// #include<stdio.h>
// void main()
// {
// 	int n=1;
// 	label:
// 		printf("%d\n",n);
// 		n++;
// 		if(n<=10)
// 			goto label;
// }




// //write a program in c to print 10's table of a number using goto.
// #include<stdio.h>
// int main()
// {
// 	int n,i=1;
// 	printf("enter any number: ");
// 	scanf("%d",&n);
	
// 	start:
// 		if (i<=10)
// 		{
// 			printf("%d*%d=%d\n",n,i,n*i);
// 			i++;
// 			goto start;
// 		}
// 	return 0;
// }




// //find sum of 10 numbers using goto.
// #include<stdio.h>
// void main()
// {
// 	int s=0,i,n;
// 	sum:
// 		printf("enter your number: ");
// 		scanf("%d",&n);
// 		s=s+n;
// 		i++;
// 	if(i<=10)
// 		goto sum;

// 	printf("\nsum is %d",s);

// }



// //find max of 10 inputted numbers using goto.
// #include<stdio.h>
// int main()
// {
// 	int i,g=0,n;
// 	max:
// 		printf("enter a number: \n");
// 		scanf("%d",&n);
// 		if(n>g)
// 			g=n;
// 		i++;
// 		if(i<=10)
// 			goto max;
// 	printf("maximum number is %d",g);
// }














