import java.util.Arrays;

class algorithm {
    public static <T extends Comparable<T>> void InsertionSubSort(T[] list, int k) {
        for (int i = k ; i < list.length; i++) {
            T current = list[i];
            int position = i - k;
            while ((position >= 0) && (current.compareTo(list[position]) < 0)) {
                list[position + k] = list[position];
                position = position - k;
            }
            list[position + k] = current;
        }
    }

    public static <T extends Comparable<T>> void ShellSort(T[] list, int[] k) {
        for (int i = 0; i < k.length ; i++) {
            InsertionSubSort(list, k[i]);
        }
    }

    public static void main(String args[]) {
        Integer arr[] = {12,11,13,1,5,6};
        int k[] = {6,5,4,3,2,1};
        ShellSort(arr, k);
        System.out.println("Sorted list: " + Arrays.toString(arr));
    }
}