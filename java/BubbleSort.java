class BubbleSort {
    

    public static void main(String[] args) {
        int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
        bubblesort(arr);
        for(int i:arr){
            System.out.print(i+" ");
        }
    }

    private static void bubblesort(int[] arr) {
        for(int i=0;i<arr.length-1;i++){
            for(int j=0;j<arr.length-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]= arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }

}
