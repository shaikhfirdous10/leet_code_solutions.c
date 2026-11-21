Given an integer x, return true if x is a palindrome, and false otherwise.

  bool isPalindrome(int x) { 
  int original=x;
  int reverse=0;
  int last_digit;

if (x<0){return false;}

  for(;x>0;x=x/10)
  {last_digit=x%10; 
  if(reverse>(2147483647-last_digit)/10){
    return false;}
  
reverse=reverse*10+last_digit;
}
return original==reverse;
}

  
