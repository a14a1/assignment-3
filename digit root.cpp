// program to find  digital root of a number
#include<iostream>

using namespace std;

// Returns digital root of num

class dgt
{
public:
    int getdigitalRoot(string num)
    {

     // If num is 0.

    if (num.compare("0") == 0)

        return 0;

    // Count sum of digits under mod 9

    int ans = 0;

    for (int i=0; i<num.length(); i++)

        ans = (ans + num[i]-'0') % 9;


    // If digit sum is multiple of 9, answer

    // 9, else remainder with 9.

    return (ans == 0)? 9 : ans % 9;
    }
};

// function for base case for this code
int sum (int n)
{
    if (n < 9 ){
        return n;}
    else
        return (n%10 + sum ( n+ 10)) %9 ;
}

// Driver code

int main()
{
    dgt g;

    string num = "525252";


    // Calling digitalRoot function

    cout<<g.getdigitalRoot(num)  <<endl;



    return 0;
}

