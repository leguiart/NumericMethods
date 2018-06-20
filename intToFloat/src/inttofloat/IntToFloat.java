/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package inttofloat;

import java.util.Arrays;

/**
 *
 * @author Luis
 */
public class IntToFloat {

    /**
     * @param source
     * @return 
     */
   public static float[] copyFromIntArray(int[] source) 
   {
    float[] dest = new float[source.length];
    for(int i=0; i<source.length; i++) {
        dest[i] = source[i];
    }
    return dest;
   }
   
   public static void main(String[] args)
   {
       int[] arreglo={1,2,3,4,5,6,7,8,9,10};
       float[] array=copyFromIntArray(arreglo);
       System.out.println(Arrays.toString(array));
   }
}
