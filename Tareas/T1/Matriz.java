package ejemplo;
import java.io.*;
public class Ejemplo {
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        /* No se que ejemplo viene a hacer aquí pero ahorita sólo es el de la matriz de unos
        Persona persona1 = new Persona("Sn Judas");
        Persona persona2 = new Persona();
        persona1.correr();
        persona2.dormir();*/
        InputStreamReader r=new InputStreamReader(System.in);  
        BufferedReader br=new BufferedReader(r);  
        System.out.println("Enter your Number");  
        String name=br.readLine();
        
        try{
           if(Integer.parseInt(name)<=0){
            System.out.println("Invalid information entered");
            System.exit(0);
            } 
        }catch(NumberFormatException e){
            System.out.println("Invalid information entered");
            System.exit(0);
        }
        int dimension=Integer.parseInt(name);
        int[][] matriz=new int[dimension][dimension];
        for(int i=0;i<dimension;i++){
            matriz[0][i]=1;
            matriz[dimension-1][i]=1;
            for(int j=0;j<dimension;j++){
                matriz[j][0]=1;
                matriz[j][dimension-1]=1;
            }
        }
        for(int i=0;i<dimension;i++){
            for(int j=0;j<dimension;j++){
                System.out.print(matriz[i][j]);
            }
            System.out.println("");
        }
        System.out.println("Hello World");
        
    }
    
}