#include <stdio.h>

int main() 
{
    int fatherIncome = 30000;
    int yourincome =20000;
    
    if((fatherIncome>=50000 || yourincome>=50000) && fatherIncome >= yourincome )
    {
       printf("Family run by individual Income and it was father");
    }
   else if((fatherIncome>=50000 || yourincome>=50000) &&  yourincome>=fatherIncome)
   {
       printf("Family run by individual Income and it was you") ;
   }
  else if(fatherIncome + yourincome >=50000)
   {
      printf("Family run by comined Income");
    
   }
 else
   {
      printf("Problem")  ; 
    
}
    /*#include <stdio.h>

    int main()
    {
    int fatherIncome = 30000;
    int yourIncome = 20000;

    if (fatherIncome >= 50000 && fatherIncome >= yourIncome)
    {
        printf("Family run by individual income and it was father");
    }
    else if (yourIncome >= 50000 && yourIncome > fatherIncome)
    {
        printf("Family run by individual income and it was you");
    }
    else if (fatherIncome + yourIncome >= 50000)
    {
        printf("Family run by combined income");
    }
    else
    {
        printf("Problem");
    }

    return 0;
}*/


    return 0;
}
