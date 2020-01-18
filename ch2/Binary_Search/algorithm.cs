using System;

public class algorithm
{
    public static int binary_search<T>(T[] L, T X) where T: IComparable<T>
    {
        int low = 0;
        int high = L.Length -1;
        while (low<=high) {
            int mid = (high+low)/2;
            if (L[mid].CompareTo(X)==0){
                return mid;
            } else if (L[mid].CompareTo(X)>0) {
                low = mid+1;
            } else if (L[mid].CompareTo(X)<0) {
                high = mid-1;
            }
        }
        return -1;
    }

    public static void Main(string[] args) {
        int[] numbers = {1,4,123,123,54,3423};
        Console.Write(algorithm.binary_search<int>(numbers, 54));
    }
}