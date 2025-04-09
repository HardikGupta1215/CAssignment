#include <math.h>
//ARMSTRONG
int arms(int s) {
    int len = 0, sum = 0, t = s, r;
    while (t != 0) {
        t /= 10;
        len++;
    }
    t = s;
    while (t > 0) {
        r = t % 10;
        sum += pow(r, len);
        t /= 10;
    }
    return (sum == s);
}
// PALINDROME
int palin(int p){
	int rem,temp,rev=0;
	temp=p;
	while (temp!=0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp/=10;
	}
	return(rev==p);
	
}
//FACTORIAL
void fact(int f){
	int factorial=1;
   for (int i=f;i>0 ; i--){
       factorial*=i;
   }
   
   printf("Factorial of %d is %lld\n", f, factorial);
}
//LEAP YEAR 
int leap(int l) {
    if ((l % 4 == 0 && l % 100 != 0) || (l % 400 == 0)) {
        return 1;
    }
    return 0;
}