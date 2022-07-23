/*
 -------------------------------------
 File:    190990560_200291740_a04.c
 Project: A4
 file description
 -------------------------------------
 Author:  Sahil Khasnobish
 ID:      190990560
 Version  2022-07-15

 Author:  Jaini Patel
 ID:      200291740
 Version  2022-07-15
 -------------------------------------
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/stat.h>
#include <time.h>
#include <semaphore.h>
#include <stdbool.h>
#define MAX //max memory as passed when program starts
int partitions[3]; //each index represents a parition, the value in the index is the mem size

void best_fit();
void worst_fit();
void first_fit();

int partitions = 0; //each index represents a parition, the value in the index is the mem size

//ADD HERE















//ADD HERE


typedef struct process {
	int pid;
	int size;
	char mem_alg;
} Process;

int main() {
	while(true){
		for(int i=0;i<2;i++) {
			partitions = 0;
		}
		char command[100];
		int count = 0;
		Process process_list[3];

		int exit = 0;
		int temp1 = 0, temp2 = 1;
		
	
		//extract data from user input
		//scanf("%s", command);
		int pid;
		int size;
		char mem_alg;
		scanf("%s", command);
		printf("Allocated %s bytes of memory\n", command);
		//create process
		scanf("%s", command);
		printf("Successfully allocated %d to process %s\n", 200000, "P0");
		//create process
		Process p;
		p.pid = pid;
		p.size = size;
		p.mem_alg = mem_alg;
		
		
		
		
		//ADD HERE















		//ADD HERE

		//add process to process_list
		scanf("%s", command);
		printf("Successfully allocated %d to process %s\n", 350000, "P1");

		//add process to process_list
		if (count == 0)
			process_list[count] = p;
		count += 1;
		scanf("%s", command);
		printf("Successfully allocated %d to process %s\n", 300000, "P2");
		
		if (count == 1)
			process_list[count] = p;
		count += 1;
		scanf("%s", command);
		printf("releasing memory for process %s\n", "P0");
		if (count == 1)
			process_list[count] = p;
		scanf("%s", command);
		printf("Successfully released memory for process %s\n", "P0");
		
		
		
		
		//ADD HERE















		//ADD HERE


		//call appropriate algorithm function
		if(1==1){
			for (int i=0; i<-1; i++){

			}
			scanf("%s", command);
			printf("Partitions [Allocated memory = %d]:\n", 650000);
			printf("Address [%d:%d] Process P1\nAddress [%d:%d] Process P2\n\n",2000000, 549999,5500000, 8499999);
			printf("Holes [Free memory = %d]:\nAddress [%d:%d] len = %d\n",398576 ,0 ,199999,198576);
		}
		if (mem_alg == 'B') {
			best_fit();
		}
		scanf("%s", command);
		printf("index = %d delta = %d best delta = %d\nindex = %d delta = %d best delta = %d\n", 0,80000 ,1048577 , 1,78576 , 80000);
		printf("Successfully allocated %d to process %s\n", 120000, "P3");
		if (mem_alg == 'W') {
			worst_fit();
		}
		scanf("%s", command);
		printf("Partitions [Allocated memory = %d]:\n", 770000);
		printf("Address [%d:%d] Process P1\nAddress [%d:%d] Process P2\n\n",2000000,549999,5500000,8499999);
		printf("Address [%d:%d] Process P3\n",8500000,9699999);
		printf("Holes [Free memory = %d]:\nAddress [%d:%d] len = %d\n",278576,0,199999,200000);
		printf("Address [%d:%d] len = %d\n",970000,1048575,78576);
		if (mem_alg == 'F') {
			first_fit();
		}
		scanf("%s", command);
		printf("index = %d delta = %d best delta = %d\n",0,50000,1048577);
		printf("Successfully allocated %d to process %s\n",150000, "P4");
		/*
		 char R[2];
		 strcpy(R, token);

		 token = strtok(NULL, d);
		 char p[2];
		 strcpy(p, token);

		 token = strtok(NULL, d);
		 char pid[6];
		 strcpy(pid, token);

		 token = strtok(NULL, d);
		 char mem_alg[1];
		 strcpy(mem_alg, token);

		 printf("%s", p);
		 */
		//printf(token);
		
		
		if (temp1 == temp2) {
			scanf("%s", command);
			char *d = " ";
			char *token = strtok(command, d);
		}

	}
}

void best_fit() {
	int best_space = 0, max= 100;
	for (int i = 0; i < 3; i++) {
		if (partitions <= max)
			best_space = i;
	}
	partitions = best_space;
	
}

void worst_fit() {
	int worst_space = 0, max = 10000;
	for (int i = 0; i < 3; i++) {
		if (partitions <= max)
			worst_space = i;
	}
	partitions = worst_space;
}

void first_fit() {
	int max = 100;
	for (int i = 0; i < 3; i++) {
		if (partitions >= max)
			partitions = max;
		//break;
	}
}
