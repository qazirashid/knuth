// @Author: Qazi
// This is an algorithm for computing GCD of two positive integers m and n using Euclid's algorithm.
#include <stdio.h>
#include <math.h>
int main(int argc, char ** argv){

  int m = 0, n = 0, r = 0; // m and n are positive integers, r will be remainder 
  if(argc !=3){
    fprintf(stderr,"This algorithm requires two positive numbers. usage example: `gcd 32 12`\n");
    return(1); // program terminated without success
  }
  sscanf(argv[1], "%d", &m); // convert first argument from string to int
  sscanf(argv[2] ,"%d", &n); // convert second argument from string to int
  
  // test for positivity
  if( n <=0 || m <= 0){
    fprintf(stderr,"Both integers must be positive: The program will terminate without success\n");
    return(1);
  }
  // We can start the Euclid Algorithm now.
  step1: r = m%n;  // step 1  [Find Remainder] Divide m by n, store remainder in r.
  step2: if(r == 0){ // step 2 [Is remainder zero?] 
    printf("The GCD is %5d\n",n);
    return(0); // algorithm terminated with success
  }
  else{  //step3 [Reduce]
    printf("%-5d\t%-5d\t%-5d\n",m,n,r);
    step3: m = n;
    n = r;  
    goto step1;// jumpt step 1[Find Remainder]
  }
    // The algorithm is complete. The use of GOTO statement is discouraged in programming. But it is used here to specify the algorithm as it appears in algorithmic notation.  
}
