#include <bits/stdc++.h>

std::string isPalindrome(std::string S){

  std::string P = S;
 
  reverse(P.begin(), P.end());
 
  if(S == P){
    return "\nString is a palindrome.\n";
  }

  else{
    return "\nString is not a palindrome.\n";
  }

}
 
int main(){
  
  std::string str;
  std::cout << "Enter a string: ";

  getline(std::cin, str);
  std::cin.clear();

  std::cout << isPalindrome(str);
 
  return 0;

}