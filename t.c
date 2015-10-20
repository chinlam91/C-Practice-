#include<stdio.h>
#include<string.h>
#define max 100

int main(int argc , char *argv[]){

	int i = 0;
	int x ,y ;
	int input;
	FILE  *pMap;
	char  buffer[max];
	char  map[max][max];
	//int m,n =0;
	char *m ;
	char *n ;
	pMap = fopen(argv[1],"r");


	if(pMap!=NULL){
		//file exist
		while(fgets(buffer,max,pMap)!=NULL){
				strcpy(map[i++],buffer);
		}
		m = strtok(map[0]," "); //get the first number m
		n = strtok(NULL," "); //get the second number n 
	}
	
	

	printf("Detector range:");
	scanf("%d",&input);
	
	//atoi string convert to int
	for(x=0;x<atoi(m);x++){
		for(y=0;y<atoi(n);y++){
			printf("%c ",map[x+1][y]);		
		}
		printf("\n");
	
	}
	
		
	
			
}	
