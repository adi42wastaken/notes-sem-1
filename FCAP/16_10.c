#include <stdio.h>
int fact(int n)
{
    if(n<=1) return 1;
    return n*fact(n-1);
}
int main()
{
    int n=6;
    printf("%d",fact(n));
    return 1;
}    
/&* Each recursive call pushes its recursive call. Calls are pushed down and popped when returning. Advantages 1. Produces consise and mathematical natural solutions. 2. Useful for tree travaersal divide and conquer and backtraking type of application
Function call overhead. Makes it slower than interative. Active calls consume stack memory Incorrect or missing base case can cause infintie recursion 3. some recursive algo repeat the work unneccesarily

//* Tree of recursion/Recursion tree: Represents recursive calls as nodes and the calls they genrate as branches. 

//* Command line argument allow us to command the input to the C program at the time of execution. This is useful when we want to run a program with different values withour repeatedly using scanf. The two paramater: ARGUMENT COUNT(argc): stores thee number of command line argument inclusing the prog name
//* ARGUMENT VECTOR(argv): Is array of pointers to null terminated string containing the arguments.  