using System;

public class algorithm 
{
    public static T[] insertion_sort<T>(T[] List) where T:IComparable<T>
    {
        for(int i = 1 ; i < List.Length ; i++) {
            T current = List[i];
            int position = i-1;
            while ((position >= 0) && (current.CompareTo(List[position])<0)){
                List[position+1] = List[position];
                position = position - 1;
            }
            List[position+1] = current;
        }
        return List;
    }

    public static void Main(string[] args) {
        int[] numbers = {1223,1,23,54,655,23,65};
        int[] sorted = algorithm.insertion_sort(numbers);
        Console.WriteLine("[{0}]", string.Join(", ", sorted));

    }
}