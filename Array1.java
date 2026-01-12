//Reverse an Array




import java.util.*;
public class Array1 {
    static void reverseArray(int[] arr){
        int i = 0, j=arr.length-1;

        while(i<j){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    public static void main(String[] args){
        int[] arr={1,2,3,4,5};
        reverseArray(arr);
        System.out.println(Arrays.toString(arr));
    }

    
}
