import java.util.Scanner;
public class arrays {
    
    
    
    
    
    
    
     public static void main(String[] args){
         Scanner sc=new Scanner(System.in);
         int taille;
         int TAB[] = null;
         
         
        
         
         System.out.println("\n\nDonnez la taille du tableau:");
         taille=sc.nextInt();
            
         for(int i=0;i<taille;i++)
         {
            System.out.println("\n\nDonnez la valeur du tab"+(i+1)+":");
            TAB[i]=sc.nextInt();
         }
    }
    
}
