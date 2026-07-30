
    #include <stdio.h>
    
    int main() {
        int x,y,z,lastdigit,slastdigit;
        printf("Enter your number:");
        scanf("%d",&x);
        
        y=x/10;
        y=y*10;
        lastdigit=x-y;
        printf("Last digit is=%d\n",lastdigit);
        
        
        x=x/10;
        y=x/10;
        y=y*10;
        slastdigit=x-y;
        printf("Slast digit is=%d",slastdigit);
       
          /*
         y=x/10;
        y=y*10;
        lastdigit=x-y;
        
        x=x/10;
        y=x/10;
        y=y*10;
        slastdigit=x-y;
       
        printf("Last digit is=%d\n Slast digit is=%d ",lastdigit,slastdigit); 
        
        */
        
        return 0;
    }
