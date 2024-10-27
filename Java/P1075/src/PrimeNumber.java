import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class PrimeNumber {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer to factorize: ");
        int n = scanner.nextInt();
        scanner.close();

        List<Integer> factors = new ArrayList<>();
        for (int i = 2; i <= n; ) {
            if (n % i == 0) {
                factors.add(i);
                n /= i;
            } else {
                i++;
            }
        }

        System.out.println(factors);
    }
}