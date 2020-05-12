using System;
using System.Collections.Generic;   

public class algorithm 
{
    /// <summary>
    /// Takes two Dictionary with the key as the power of X 
    /// and the corresponding value is the coefficient of X
    /// and returns Dictionary with the same structure
    /// </summary>
    /// <param name = "P">The first polynomial</param>
    /// <param name = "Q">The second polynomial</param>
    /// <returns> The product of <paramref name="P"/> and <paramref name="Q"/> </returns>
    public static Dictionary<int, int> naive_poly_mult(Dictionary<int, int> P, Dictionary<int, int> Q) {
        Dictionary<int, int> M = new Dictionary<int, int>();
        foreach(var Element1 in P) {
            foreach(var Element2 in Q) {
                int multPower = Element1.Key + Element2.Key;
                int multCoeff = Element1.Value * Element2.Value;
                if (M.ContainsKey(multPower)) {
                    M[multPower] += multCoeff;
                } else {
                    M.Add(multPower, multCoeff);
                }
            }
        }
        return M;
    }

    public static void Main(string[] args) {
        Dictionary<int, int> P = new Dictionary<int, int>() {
            {0 , -5},
            {1 , 2},
            {2 , 3}
        };

        Dictionary<int, int> Q = new Dictionary<int, int>() {
            {0 , 4},
            {1 , -1},
            {2 , 0},
            {3 , 1}
        };

        var M = naive_poly_mult(P, Q);

        foreach(var ele1 in M) 
        { 
            Console.WriteLine("{0} and {1}", 
                     ele1.Key, ele1.Value); 
        } 
        Console.WriteLine(); 
    } 

}