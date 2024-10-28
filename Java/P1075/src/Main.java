import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a,b;
        if(n % 2 == 0){
            a = 2;
            b = n / 2;
            System.out.println(Math.max(a,b));
            return;
        }
        for (int i = 3; i <= n; ) {
            if (n % i == 0) {
                a = i;
                b = n / i;
                System.out.println(Math.max(a,b));
                return;
            } else {
                i += 2;
            }
        }

    }
}