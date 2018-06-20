//El siguiente programa obtiene la suma de los elementos pares e impares de un arreglo para el metodo de integracion numerica
//de simpson 1/3
import java.util.Arrays;
import java.util.Scanner;

class Clase_Suma
{
    double suma1;
    double suma2;
    int cont;
    int n;
    boolean bandera;
    double[] array;
    public Clase_Suma(int n)
    {
        this.n = n;
        this.suma1 = 0;
        this.suma2 = 0;
        this.cont = 0;
        this.bandera = true;
        this.array = new double[this.n+1];
    }
    
    void sumatoria()
    {
        for (int i=1; i<=this.n; i++)
        {
            if (i%2==0)
            { 
                this.suma1+=this.array[i];
                this.bandera=true;
            }
            else
            {
                this.suma2+=this.array[i];
                this.bandera=false;
            }
        }
        
    }
    
    double[] obtener_arreglo()
    {
        return this.array; 
    }    
    
    double obtener_suma_p()
    {
        return this.suma1;
    }
    
    double obtener_suma_i()
    {
        return this.suma2;
    }
    
    void leer_arreglo()
    {
        Scanner scan = new Scanner(System.in);
        for(int i=1; i<=this.n; i++)
        {
            System.out.println("f[x%d]: "+ i);
            this.array[i]=scan.nextDouble();
        }
    }
    
    double obtener_fx1()
    {
        return this.array[1];
    }
    
    double obtener_fxn()
    {
        return this.array[this.n];
    }
    
}

class Suma
{ 
    public static void main(String []args)
    {
        int n;
        double h, b, a, simpson;
        System.out.println("Introducir numero de elementos del arreglo F(xn): ");
        Scanner sc = new Scanner(System.in);
        n= sc.nextInt();  
        System.out.println("Introducir limite superior: ");
        b= sc.nextDouble();
        System.out.println("Introducir limite inferior: ");
        a= sc.nextDouble();
        h=(b-a)/((double)n);
        Clase_Suma s = new Clase_Suma(n);
        s.leer_arreglo();
        s.sumatoria();
        System.out.println(Arrays.toString(s.obtener_arreglo())); 
        
        System.out.println("Suma par: " + s.obtener_suma_p());
        System.out.println("Suma impar: " + s.obtener_suma_i());
        simpson=(h/3)*(s.obtener_fx1()+s.obtener_fxn()+4*s.obtener_suma_i()+2*s.obtener_suma_p());  //simulacion de la integracion
        //de simpson a partir de introducir un arreglo con los supuestos elementos Xn evaluados en la funcion
        System.out.println("Valor de la integral: " + simpson);
    }
}
