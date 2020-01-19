using System;

// a quite little perturbation in the data linearity and its complexity converge to O(n)

public class algorithm
{
    public static int interpolation_search<T>(T[] L, T X) where T:IComparable<T>
    {
        int low =0;
        int high = L.Length -1;
        while (low <= high) {
            dynamic i = (((((dynamic)X-(dynamic)L[low])*(high-low))/((dynamic)L[high]-(dynamic)L[low]))+low);
            if (L[i].CompareTo(X)==0){
                return i;
            } else if (L[i].CompareTo(X)>0) {
                low = i+1;
            } else if (L[i].CompareTo(X)<0) {
                high = i-1;
            }
        }
        return -1;
    }

    public static void Main(string[] args) {
        int[] numbers = {1,4,123,123,54,3423};
        Console.Write(algorithm.interpolation_search<int>(numbers, 54));
    }
}