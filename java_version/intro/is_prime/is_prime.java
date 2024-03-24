package intro.is_prime;

public class is_prime {

    public static boolean isPrime(int number) {
        if (number < 2) {
            return false;
        }
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        System.out.println(isPrime(2)); // true
        System.out.println(isPrime(3)); // true
        System.out.println(isPrime(4)); // false
        System.out.println(isPrime(5)); // true
        System.out.println(isPrime(6)); // false
        System.out.println(isPrime(7)); // true
        System.out.println(isPrime(8)); // false
        System.out.println(isPrime(25)); // false
        System.out.println(isPrime(31)); // true
        System.out.println(isPrime(2017)); // true
        System.out.println(isPrime(2048)); // false
        System.out.println(isPrime(1)); // false
        System.out.println(isPrime(713)); // false
    }
}
