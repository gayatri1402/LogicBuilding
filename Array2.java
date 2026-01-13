




import java.util.*;
public class Array2 {
    static void MoveZeros(int[] arr){
        int j=0;
        for(int i=0; i< arr.length; i++)
        {
            if(arr[i]!=0){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i] = temp;
            j++;
           
        }
    }
    }
    public static void main(String[] args){
        int[] arr={1,0,3,0,5,0};
        MoveZeros(arr);
        System.out.println(Arrays.toString(arr));
    }

    
}
