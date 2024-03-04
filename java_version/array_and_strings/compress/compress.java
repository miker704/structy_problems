package array_and_strings.compress;
// compress


// Write a function, compress, that takes in a string as an argument. The function should return a compressed version
//  of the string where consecutive occurrences of the same characters are compressed into the number of occurrences followed by the
//   character. Single character occurrences should not be changed.

// 'aaa' compresses to '3a'
// 'cc' compresses to '2c'
// 't' should remain as 't'
// You can assume that the input only contains alphabetic characters.
public class compress {

    public static String Compress(String str) {

        String result = "";

    

        return result;
    }


    public static void main(String[] args) {
        System.out.println(Compress("ccaaatsss")); // -> '2c3at3s'
        System.out.println(Compress("ssssbbz")); // -> '4s2bz'
        System.out.println(Compress("ppoppppp")); // -> '2po5p'
        System.out.println(Compress("nnneeeeeeeeeeeezz")); // -> '3n12e2z'
        System.out.println(Compress(
                "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy"));
        // -> '127y'
    }

}
