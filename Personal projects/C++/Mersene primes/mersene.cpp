#include <math.h>
#include <iostream>
int main()
{
// Declares the starting variables
float mersprime = 0, n = 0;


// Declares the counters
int i, x, primes = 0, notprimes = 0, arr[100];

// Gets the value for n
std::cout<<"Please input a value for n \n";
std::cin>>n;

// Gets the value for i
std::cout<<"How many loops do you wish to run?";
std::cin>>i;

// Starts the loop
for(x = 0; x<=i, x++;)
    {
        mersprime = pow(2.0, n) - 1;



        // 0 and 1 are not prime numbers
  if (mersprime == 0 || mersprime == 1) 
    {
      notprimes++;
    }

  // loop to check if n is prime
  for (int z = 2; z <= mersprime/2; ++z) 
    {
      if (static_cast<int>(mersprime) % z == 0) 
          {
            notprimes ++ ;
            break;
          }
      else 
          {
             mersprime = arr[x];
             primes++;
          }
    }
    }
 
// Prints out the mersene primes
std::cout<<"These are the Mersenne primes \n";
for(i = 0; i <= std::size(arr); i++)
    {
        std::cout<<arr[i];
    }    
// Prints out the number of primes and nonprimes
std::cout<<"Number of primes found:"<<primes<<std::endl;
std::cout<<"Number of nonprimes found:"<<notprimes<<std::endl;

}