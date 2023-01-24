#include <stdio.h>
int main ()
{
	float studentmarks[10],pmarks[5],fmarks[5];
    int i,j=0,k=0;
//taking input of each students quiz marks.	
	for(i=1;i<=10;i++){
		printf("Enter your student marks in %%");
		scanf("%f", &studentmarks[i]);
		
		if(studentmarks[i] > 100){
			printf("Invalid Marks.");
			return 0;
		}
		
		if(studentmarks[i] >= 50){
				pmarks[j]=studentmarks[i];
				j++;
		}else{
				fmarks[k]=studentmarks[i];
				k++;
		}
	}
// arranging them according to (0-5) will be failed marks and (6-10) will be passed marks.	
    j=0;
    k=0;
    printf("Your marks stored are...(students 1-5 are fail and students 6-10 are pass!)\n");
	for(i=1;i<=10;i++){
		if (i <= 5){
			printf("Student %d has  %.2f%%(failed!)\n",i, fmarks[k]);
			k++;
			continue;
		}
		printf("Student %d has %.2f%%(Passed!)\n",i, pmarks[j]);
		j++;
	}
}
