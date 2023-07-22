class Solution {
public:
    long long divide(long long dividend, long long int divisor) {
        if(dividend==-2147483648&&divisor==-1)
        {
            return 2147483647;
        }
       int sign = ((dividend < 0) ^
              (divisor < 0)) ? -1 : 1;
 
  // remove sign of operands
  dividend = abs(dividend);
  divisor = abs(divisor);
 
  // Initialize the quotient
  long long quotient = 0, temp = 0;
 
  // test down from the highest bit and
  // accumulate the tentative value for
  // valid bit
  for (int i = 31; i >= 0; --i) {
 
    if (temp + (divisor << i) <= dividend) {
      temp += divisor << i;
      quotient |= 1LL << i;
    }
  }
  //if the sign value computed earlier is -1 then negate the value of quotient
  if(sign==-1) quotient=-quotient;
  long long a=2147483647;
   if(divisor==-1)
   {
       return a;
   }
   else
   {
  return quotient;
}
    }
 
    
};