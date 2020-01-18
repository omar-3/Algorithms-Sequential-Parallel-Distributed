using System;

public class algorithm 
{
    public static int linear_search(int[] L, int X) 
    {
        for(int i =0 ; i < L.Length ; i++) {
            if (L[i] == X) {
                return i;
            }
        }
        return -1;
    }

    public static void Main(string[] args) {
        int[] numbers = {1,4,123,123,54,3423};
        Console.Write(algorithm.linear_search(numbers, 54));
        Console.ReadKey();
    }

}