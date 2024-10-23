import java.math.BigDecimal;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();

            BigDecimal result = new BigDecimal(0);
            for (int i = 1; i <= n; i++) {
                BigDecimal temp_result = new BigDecimal(1);
                for (int j = 1; j <= i; j++) {
                    temp_result = temp_result.multiply(new BigDecimal(j));
                }
                result = result.add(temp_result);
            }
            System.out.println(result);
        }
    }