import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int integer = sc.nextInt();
        if(integer == 0){
            System.out.println("0");
            return;
        }
        String string = "" + integer;
        LinkedList<Character> number_reverse = new LinkedList<>();
        for (int i = string.length() - 1, j = 0; i >= 0 ; i--) {
           number_reverse.addLast(string.charAt(i));
        }
        //input and reverse number
        if(integer < 0){
            number_reverse.removeLast();
        }
        while(number_reverse.getFirst() == '0' ){
            number_reverse.removeFirst();
        }
        if(integer < 0){
            number_reverse.addFirst('-');
        }
        for(char i : number_reverse){
            System.out.print(i);
        }
    }
}