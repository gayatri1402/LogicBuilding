
public class Array3{
    public static int findMax(int[] arr)
    {
        int max = arr[0];
        for(int i=0; i<arr.length; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
        
    }
    

public static void main(String[] args){
    int[] arr = {3,7,2,9,5};
    System.out.println(findMax(arr));
}
}

