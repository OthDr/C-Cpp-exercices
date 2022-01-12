
import java.util.Scanner;


public class exo5_tp2 {
    public static float toFah(float x){
        float f = x*(9/5)+32;
        
        return f;
    }
    public static float toCel(float x){
        float c = (x-32)*x*(5/9);
        
        return c;
    }

public static void main(String [] args){
    int choice ;
    Scanner sc = new Scanner (System.in);
    System.out.println("Coose:\n(1)-Celicus To Fahrenheit\n(2)-Fahrenheit to Celicus");
    choice = sc.nextInt();
    switch(choice)
    {
        case  1: 
        {
            System.out.println("");
        }
        case 2 :
        {
            System.out.println("");
        }     
    }
}
}