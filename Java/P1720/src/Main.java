import java.util.Scanner;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double db = n;
        double Fn = (Math.pow( ((1.0 + Math.sqrt(5.0)) / 2.0), db) - Math.pow(((1.0 - Math.sqrt(5)) / 2.0), db)) / Math.sqrt(5.0) ;
        System.out.printf("%.2f",Fn);
    }
}