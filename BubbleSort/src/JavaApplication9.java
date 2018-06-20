
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;

class Lista 
{
    int tam, inferior, superior, comp, cam, acum; 
    static int comp2, cam2;
    int[] lista;
    int[][] matrix;
    Random r;
    /*Metodo constructor*/
    Lista(int tam, int inferior, int superior)
    {
        this.tam=tam;
        this.inferior=inferior;
        this.superior=superior;
        lista= new int[this.tam];  
        r= new Random();
        this.comp=0;
        this.cam=0;
        this.acum=0;
    }
    /*Metodo para llenar una lista*/
    void llenarLista()
    {
        for(int i=0;i<this.tam;i++)
        {
            lista[i]= r.nextInt(this.superior-this.inferior +1)+ this.inferior;
        }
    }
    
   void bubbleSort()
    {
        int bandera=0, cont=0;
        int max= lista[0];
        while(bandera!=1)
        {
            bandera=1;
            while(cont<lista.length)
            {
                if(lista[cont]>=max)
                {
                    max=lista[cont];
                }
                else
                {
                    lista[cont-1]=lista[cont];
                    lista[cont]=max;
                    bandera=0;
                    this.cam+=1;
                }
                cont+=1;
            }
            this.comp=cont+this.comp;
            cont=0;
            max=lista[0];
        }
    }
   
    int [] regresarLista()
    {        
        return lista;
    }
    
    int getComparacionesdeBusquedas()
    {
        return this.acum;
    }
    
}

public class JavaApplication9 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        // TODO code application logic here
        int tam = 0, in = 0, sup = 0, aux;
        InputStreamReader ir=new InputStreamReader(System.in);
        BufferedReader br =new BufferedReader(ir);
        
        System.out.println("\nIntroducir numero de elementos");
        System.out.println("Limite inferior  mayor que cero y limite superior mayor que cero");
        try
            {
                tam=Integer.parseInt(br.readLine());
                in=Integer.parseInt(br.readLine());
                sup=Integer.parseInt(br.readLine());
            }
            catch(IOException ioe)
            {
                System.out.println("Error: " + ioe.toString());
            }
            Lista l= new Lista(tam, in, sup);
            l.llenarLista();
            System.out.println(Arrays.toString(l.regresarLista())); 
            System.out.println("ordenado: \n");
            l.bubbleSort();
            System.out.println(Arrays.toString(l.regresarLista())); 
    }
    
}
