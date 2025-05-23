#include <stdio.h>

int main(){
	int hours,minutes,seconds;
	int inputSeconds,totalSeconds;
	int newHours,newMinutes,newSeconds,remainingSeconds;
	int vaildInput = 1;
	
	do{
		
		printf("Input hours :="); scanf("%d",&hours);
		printf("Input minutes :="); scanf("%d",&minutes);
		printf("Input seconds :="); scanf("%d",&seconds);	
		if ( hours < 1 || hours > 24 ){
			printf("ERROR!!!");
			vaildInput = 0;
		}
		printf("Input more seconds :="); scanf("%d",&inputSeconds);
	}while (!vaildInput);
	
	totalSeconds = (hours * 3600) + (minutes * 60) + seconds + inputSeconds;
	
	newHours = totalSeconds / 3600;
	remainingSeconds = totalSeconds % 3600;
	newMinutes = remainingSeconds / 60;
	newSeconds = remainingSeconds % 60;
	
	if (newHours >= 24){
		newHours = 0;
	}
	
	printf("Time right now:%d:%d:%d",newHours,newMinutes,newSeconds);
	return 0;
}