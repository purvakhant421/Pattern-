/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main(){
	int r,c;
	for(r=1; r<=5; r++){
		for(c=1; c<=r; c++){
			printf("%d ",r);
		}
		printf("\n");	
	}
   return 0;
}