class InSufficientFundException extends Exception{
    public InSufficientFundException (String message)
    {
        super(message);
    }

}
public class accountexap3{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int belance=1000;
        System.out.print("your belance is "+belance +"in your account");
        System.out.print("if you want to add money in your account than press 1 or want to withdraw money than press 2");
        int x=sc.nextInt;
        
        if(x==1)
        {
            int addmountmoney=sc.nextInt;
            addmount(belance , addmountmoney);
        }
        if(x==2){
        try{
        
        
            int withdrawamout=sc.nextInt;
            withdraw(belance,addmountmoney);
        }
        catch(InSufficientFundException ex){
             System.out.println("Caught the exception");  
            System.out.println("Exception occured: " + ex);  

        }

        System.out.print("your belance is "+belance);
    }


        
    }
    static void withdraw(int x, int y) throws InSufficientFundException
    {
        if(x<y)
        {
            throw new InSufficientFundException("your amount "+y +"is more than "+x);
        }
        else
            x=x-y;
    }
    static void addmount(int x,int y)
    {
        x=x+y;
    }
}