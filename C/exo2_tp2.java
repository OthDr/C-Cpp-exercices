import java.util.Scanner;
public class exo2_tp2 {

    public static float surfaceDisque(float R){
        float surface ;
        float r=R/2;
        surface = (float) (r*r*Math.PI);


        return surface;
    } 

    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("\nDonnez le rayon de cet disque:");
        float RAYON = sc.nextFloat();
        System.out.println("\nLa surface de ce disque ="+surfaceDisque(RAYON));

    }
}
