#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int isEvenNumber(int number);
int main(int argc, char *argv[]) {
	int n,m,i;
	printf("Enter number 1\n");
	scanf("%d",&n);
	printf("Enter number 2\n");
	scanf("%d",&m);
	printf("The even numbers between %d and %d\n",n,m);
	for(i=n+1;i<m;i++){
		if(isEvenNumber(i))
		{
			printf("%d\n",i);
		}
	}
	return 0;

}
int isEvenNumber(int number){
	if(number%2==0){
		return 1;
	}
	return 0;
	
}
