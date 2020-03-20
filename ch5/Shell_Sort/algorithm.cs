using System;

public class algorithm
{
    public static void InsertionSubSort<T>(T[] L, int k) where T: IComparable<T>
    {
        for(int i = k ; i < L.Length ; i++) {
            T current = L[i];
            int position = i - k;
            while ((position >= 0) && (current.CompareTo(L[position]) < 0)) {
                L[position + k] = L[position];
                position = position - k;
            }
            L[position + k] = current;
        }
    }

    public static void ShellSort<T>(T[] L, int[] k) where T: IComparable<T>
    {
        for (int i = 0 ; i < k.Length ; i++) {
            InsertionSubSort(L, k[i]);
        }
    }

    public static void Main(string[] args) {
        int[] numbers = {1,2,4,1,2,4,-1,2,5,34,2,123,212};
        int[] k = {6,5,4,3,2,1};
        algorithm.ShellSort<int>(numbers, k);
        for(int i = 0 ; i < numbers.Length ; i++) {
            Console.WriteLine(numbers[i]);
        }
    }
}