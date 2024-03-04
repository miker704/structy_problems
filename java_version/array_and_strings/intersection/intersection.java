package array_and_strings.intersection;

import java.util.*;

// intersection
//     Write a function,
//     intersection, that takes in two vectors, a, b, as arguments.
//     The function should return a new vector containing elements that are in both of the two vectors.

//     You may assume that each input vector does not contain duplicate elements.
public class intersection {

    public static List<Integer> Intersection(List<Integer> vector1, List<Integer> vector2) {
        List<Integer> array = new ArrayList<>();

        return array;
    }

    public static void printVector(List<Integer> vector) {
        System.out.print("[ ");
        vector.stream().forEach(i -> {
            System.out.printf("%s,", i);
        });
        System.out.println(" ]");
    }

    public static void main(String[] args) {
        List<Integer> a = List.of(4, 2, 1, 6);
        List<Integer> b = List.of(3, 6, 9, 2, 10);
        printVector(Intersection(a, b)); // -> [2,6]
        a = List.of(2, 4, 6);
        b = List.of(4, 2);
        printVector(Intersection(a, b)); // -> [2,4]
        a = List.of(4, 2, 1);
        b = List.of(1, 2, 4, 6);
        printVector(Intersection(a, b)); // -> [1,2,4]
        a = List.of(0, 1, 2);
        b = List.of(10, 11);
        printVector(Intersection(a, b)); // -> []
        a = new ArrayList<>();
        b = new ArrayList<>();
        for (int i = 0; i < 32000; i += 1) {
            a.add(i);
            b.add(i);
        }
        printVector(Intersection(a, b)); // -> [0,1,2,3,..., 31999]
    }

}
