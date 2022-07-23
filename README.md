# CP-386-A4
Project Discription:
Ccontiguous memory allocation program.

Definitions/global variables:
- MAX - the maximum memory, passed as a parameter when program is executed 
- paritions - list that stores the memory partitions
-   each index in the list represents a parition
-   value stored at each index is the size the process is taking up

Functions:
main()
- gets user input, includes process id, memory required and the memory allocation algorithm.
- extracts data from string and saves it into appropriate variables 
- creates a process data type to store process info using data from above variables
- process_list contains a list of processes, represents holes in memory 

best_fit()
- searches through memory to find a hole with the most efficient space that fits best 

first_fit()
- finds the first space available 

worst_fit()
- searches through memory to find the worst space available
