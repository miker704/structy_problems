package array_and_strings.uncompress;

// uncompress
// Write a function, uncompress, that takes in a string as an argument. The input string 
// will be formatted into multiple groups according to the following pattern:

// <number><char>

// for example, '2c' or '3a'.
// The function should return an uncompressed version of the string where each 'char' of a group is repeated 'number' times consecutively. 
// You may assume that the input string is well-formed according to the previously mentioned pattern.

public class uncompress {

    // public static String Uncompress(String str) {

    // String result = "";
    // int i = 0;
    // int j = 0;
    // String numbers = "0123456789";
    // String num = "";
    // while (i < str.length()) {

    // if (numbers.indexOf(str.charAt(i)) != -1) {
    // num += str.charAt(i);
    // } else if (numbers.indexOf(str.charAt(i)) == -1) {
    // int counter = Integer.parseInt(num);
    // for (int x = 0; x < counter; x++) {
    // result += str.charAt(i);
    // }
    // num = "";
    // }
    // i++;
    // j++;
    // }

    // return result;
    // }

    // optimized

    public static String Uncompress(String str) {
        String result = "";
        int i = 0;
        int j = i + 1;
        String numbers = "0123456789";
        while (j < str.length()) {
            if (numbers.indexOf(str.charAt(j)) != -1) {
                j++;
            } else {
                int num = Integer.parseInt(str.substring(i, j));
                for (int x = 0; x < num; x++) {
                    result += str.charAt(j);
                }
                j++;
                i=j;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        System.out.println(Uncompress("2c3a1t")); // -> 'ccaaat'
        System.out.println(Uncompress("4s2b")); // -> 'ssssbb'
        System.out.println(Uncompress("2p1o5p")); // -> 'ppoppppp'
        System.out.println(Uncompress("3n12e2z")); // -> 'nnneeeeeeeeeeeezz'
        System.out.println(Uncompress("127y")); // ->'yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy'
    }

}
