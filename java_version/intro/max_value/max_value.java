package intro.max_value;


public class max_value {

    public static double maxValue(double[] numbers) {

        // List<Double> list =
        // Arrays.stream(numbers).boxed().collect(Collectors.toList());
        // Optional<Double> result = list.stream().max((a,b)->a-b);
        double result = 0.0;
        for (double num : numbers) {
            result = Math.max(result, num);
        }
        return result;
    }

    public static void main(String[] args) {
        double[] numbers1 = {4, 7, 2, 8, 10, 9};
        double[] numbers2 = {10, 5, 40, 40.3};
        System.out.println(maxValue(numbers1)); // 10
        System.out.println(maxValue(numbers2)); // 40.3

    }

}
