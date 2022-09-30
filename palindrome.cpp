#include<iostream>
using namespace std;

    int after_reverse(int x)
    {
        long l , n=0;
        while(x)
        {
            l = x%10;
            n = (n *10) + l;
            x = x/10;
        }
        return n;
        
    }
    bool isPalindrome(int x)
    {
        int var = x%10, a = x;
    
        if(x >= 0 && x <= 9)
            return true;
        else if(x ==10 || x <0)
            return false;
        else
        {
            if(x == after_reverse(x))
                return true;
            else 
                return false;
            
            
        }
        

    }
        

int main()
{
    int x = 121;
    bool y;
    if(isPalindrome(x))
    cout<<"the number is palindrome number"<<endl;
    else
    cout<<"not a palindrome number"<<endl;
    


return 0;
}
