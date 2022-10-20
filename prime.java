class prime
{
    public static void main(String[] args)
    {
        int i,j,c;
        for(i=2;i<=10;i++)
       { 
           c=0;
           for(j=2;j<i;j++)
           {
               if(i%j==0)
               {
                   c++;
                   break;  
               }
           }
        if(c==0)
        System.out.println(i);
       }
    }
}