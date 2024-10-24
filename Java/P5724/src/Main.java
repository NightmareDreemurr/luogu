import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        LinkedList<Integer> num_list = new LinkedList<>();
        for (int i = 0; i < n; i++) {
            num_list.addLast(sc.nextInt());
        }
        Collections.sort(num_list);
        int answer = num_list.getLast().intValue() - num_list.getFirst().intValue();
        System.out.println(answer);
    }
}
