public class RadixSort {
    public static void main(String[] args) {
        int a[] = { 151, 259, 360, 91, 115, 706, 34, 858, 2 };
        radixSort(a);
        for(int i:a){
            System.out.print(i+" ");
        }
    }

    private static void radixSort(int[] a) {
        int max = getMax(a);
        for (int place = 1; max / place > 0; place *= 10) {
            countingSort(a, place);
        }
    }

    private static void countingSort(int[] a, int place) {
        int[] output = new int[a.length + 1];
        int[] count = new int[10];

        for (int i = 0; i < a.length; i++) {
            count[(a[i] / place) % 10]++;
        }

        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int i = a.length - 1; i >= 0; i--) {
            output[count[(a[i] / place) % 10] - 1] = a[i];
            count[(a[i] / place) % 10]--;
        }

        for (int i = 0; i < a.length; i++) {
            a[i] = output[i];
        }
    }

    private static int getMax(int[] a) {
        int max = a[0];
        for (int i = 1; i < a.length; i++) {
            if (a[i] > max)
                max = a[i];
        }
        return max;
    }
}
