package array_and_strings.pair_product;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;


// pair product
// Write a function, pairProduct, that takes in an array and a target product as arguments.
// The function should return an array containing a pair of indices whose elements multiply to the
//  given target. The indices returned must be unique.

// Be sure to return the indices, not the elements themselves.

// There is guaranteed to be one such pair whose product is the target.

public class pair_product {

    public static List<Integer> pairProduct(List<Integer> vector, int target) {
        List<Integer> array = new ArrayList<>();
    

        return array;
    }

    public static void printArray(List<Integer> vector) {
        vector.stream().forEach(i -> {
            System.out.printf("%s,", i);
        });
        System.out.println("\n");
    }


    public static void main(String[] args) {
        printArray(pairProduct(List.of(3, 2, 5, 4, 1), 8)); // -> [1, 3]
        printArray(pairProduct(List.of(3, 2, 5, 4, 1), 10)); // -> [1, 2]
        printArray(pairProduct(List.of(4, 7, 9, 2, 5, 1), 5)); // -> [4, 5]
        printArray(pairProduct(List.of(4, 7, 9, 2, 5, 1), 35)); // -> [1, 4]
        printArray(pairProduct(List.of(3, 2, 5, 4, 1), 10)); // -> [1, 2]
        printArray(pairProduct(List.of(4, 6, 8, 2), 16)); // -> [2, 3]
    }
}
