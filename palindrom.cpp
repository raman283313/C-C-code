//find the sum of all the palindrome number in given range.
#include<iostream>
using namespace std;
int main(){
    int n,rev=0,b;
	int sum=0;
    for (int i = 10; i <= 80; i++)
		{
			n = i;
			while (n > 0)
			{
				b = n % 10;
				rev = (rev * 10) + b;
				n = n / 10;
			}
			if (rev == i)
			{
				sum+=i;
				cout<<i <<" + ";
			}
			
			rev = 0;
		}
		cout<<"\b";
		cout<< "\b = "<<sum;
}
//@Learner