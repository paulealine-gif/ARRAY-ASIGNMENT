#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10];
	int i;
	//enter the values
	for(i=0;i<10;i++){
		printf("Enter your value: ",i + 1);
		scanf("%d",&arr[i]);
	}
	printf("\nThe original values are: ");
		for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	//show the reverse of all the values
	printf("\n The reverse order of the values are: ");
	for (i=9;i>=0;i--){
		printf("%d ",arr[i]);
	}
	
	
	
	return 0;
}
