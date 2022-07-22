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
#define MAX //max memory as passed when program starts
int partitions[3]; //each index represents a parition, the value in the index is the mem size

for(int i=0;i<2;i++) {
	paritions[i] = 0;
}

typedef struct process {
	int pid;
	int size;
	char mem_alg;
} Process;

int main() {
	int count = 0;
	Process process_list[3];

	int exit = 0;
	char command[];
	while (!exit) {
		//extract data from user input
		scanf("%s", command);
		int pid;
		int size;
		char mem_alg;
		//create process
		Process p;
		p.pid = pid;
		p.size = size;
		p.mem_alg = mem_alg;

		//add process to process_list
		if (count == 0)
			process_list[count] = p;
		count += 1;
		if (count == 1)
			process_list[count] = p;
		count += 1;
		if (count == 1)
			process_list[count] = p;

		//call appropriate algorithm function
		if (mem_alg == 'B') {
			best_fit(p);
		}
		if (mem_alg == 'W') {
			worst_fit();
		}
		if (mem_alg == 'F') {
			first_fit();
		}

	}
}

void best_fit(Process p) {
	int best_space = 0;
	for (int i = 0; i < 3; i++) {
		if (partitions[i] <= MAX-p.size)
			best_space = i;
	}
	partitions[best_space] = p.size;
}

void worst_fit(Process p) {
	int worst_space = 0;
	for (int i = 0; i < 3; i++) {
		if (partitions[i] > MAX-p.size)
			worst_space = i;
	}
	partitions[worst_space] = p.size;
}

void first_fit(Process p) {
	for (int i = 0; i < 3; i++) {
		if (partitions[i] >= MAX-p.size)
			partitions[i] = p.size;
		break;
	}
}
