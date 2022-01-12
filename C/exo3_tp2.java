import java.util.Scanner;

public class exo3_tp2 {
    static float tab[]=new float[15];
    public static void inputTab(int size){
        
        Scanner  sc = new Scanner(System.in);
        //float tab[] = null;
        for(int i=0;i<size;i++){
            System.out.println("Put a value in Tab"+(i+1)+":");
            tab[i] = sc.nextFloat();     
        }
    }
    public static void outputTab(int size){
        
        //float tab[] = null;
        for(int i=0;i<size;i++){
            System.out.println("The value of Tab"+(i+1)+"="+tab[i]);
                 
        }
    }
     public static void main(String[] args){
         Scanner sc=new Scanner(System.in);
         int taille;
         //int TAB[];
         
         System.out.println("\n\nDonnez la taille du tableau:");
         taille=sc.nextInt();
         inputTab(taille);
         outputTab(taille);
         
         
         
         
        
    }
}
