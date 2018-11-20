
#include<iostream>
using namespace std;
/* Function to get sum of digits */

class dgs
{

 public:

 int getSum(int n)

 {

    int sum;

    // Single line that calculates sum

    for (sum = 0; n > 0; sum += n % 10, n /= 10);

    return sum;

 }
};

// function for base case for this code

int sum (int n)
{
    if (n < 10 ){
        return n;}
    else
        return (n%10 + sum ( n+ 10)) ;
}


//driver code

int main()
{

 dgs g;

 int n = 525252;

 cout<< "sum of digits is ::  " <<g.getSum(n) << endl;

 return 0;
}
