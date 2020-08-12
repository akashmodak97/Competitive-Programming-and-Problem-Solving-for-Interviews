//Is This a Give Away Problem Code: GVAWAY

/*

You are given two integers l and r.
You have to choose k real numbers in the interval [l,r] uniform randomly.
What is the expected count of distinct numbers chosen by you?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers l, r and k.
Output
For each test case, print a single line containing one integer - the expected count of distinct numbers chosen. It can be proved that the expected count is always an integer.

Constraints
1≤T≤105
1≤k≤100
1≤l≤r≤100
Example Input
3
3 6 4
1 3 1
6 7 2
Example Output
4
1
2
Explanation
Example case 2: You choose only 1 real number, so it doesn't matter which real number you chose, number of distinct number is always 1. So expected count of distinct number is 1.

*/

//SOLUTION

#include <stdio.h>

int main()
{
	int T, l, r, k, i;
	scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d %d",&l,&r,&k);
        if(l==r)
             printf("1\n");
        else
           printf("%d\n",k);           
    }
    return 0;
}
