
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;
import java.util.Scanner;
import java.net.InetAddress;
import java.net.UnknownHostException;
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 55

/**
 *
 * @author DERRAR2018
 */
    public class exo1_tp2 {
        public static int FACTO(int n){
            int i;
            int fact;
            fact=1;
            for(i=1;i<=n;i++){fact=fact*i;}	
            return fact;	
    }
    public static float img(float x){
    float a,b,c,f;
    a=(float) pow(x,2);
    b=(float) sqrt(2);
    b=5*b*x;
    c=-5;
    f=a+b+c;
   
    return f;
    }
    
    public static void main(String[] args) throws UnknownHostException{
         Scanner sc=new Scanner(System.in);
        int n;
        float X;
        System.out.println("\nDonnez un nombre pour calculer son factoriel:");
        n=sc.nextInt();
        System.out.println("Le Factoriel de votre nombre="+FACTO(n));
        
        System.out.println("Donnez un nombre pour calculer son fimage par la fonction f(x):");
        X=sc.nextFloat();        
        System.out.println("\n\n f("+X+")="+img(X));
        
        InetAddress myIP = InetAddress.getLocalHost();
        System.out.println("\n\n\n\n IP:"+myIP.getHostAddress());
        
    }
    
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
