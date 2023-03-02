import java.io.*;
public class exap2{
	 public static void main(String[] args) {
	 	int a=0;
	 	int i=0;
	 try{
	 	while(args[i]!=null)
	 	{
	 		
	 		
	 		 if(Integer.parseInt(args[i])<=0)
	 		 {
	 		 	      throw new ArithmeticException("Number must be positive");
	 		 }
	 		 if(Integer.parseInt(args[i])%10==0)
	 		 {
	 		 	      throw new ArithmeticException("This Number is divided by 10");

	 		 }
	 		 if(Integer.parseInt(args[i])<=2000 && Integer.parseInt(args[i])>=1000)
	 		 {
	 		 		  throw new ArithmeticException("This Number is greater than 1000 and less than 2000");

	 		 }
	 		 if(Integer.parseInt(args[i])>=7000)
	 		 {
	 		 		  throw new ArithmeticException("This Number is greater than 1000 and less than 2000");
	 		 }
	 		  a+= Integer.parseInt(args[i]);
	 		  i++;

	 	}
	 		
		System.out.println(a);
}
catch(Exception e )
	{
		 e.printStackTrace(); 
	}
}
}