import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 整数の入力
        int a = Integer.parseInt(sc.next());
        int b = Integer.parseInt(sc.next());
        int c = Integer.parseInt(sc.next());
        String s = sc.next();
        // 出力
        System.out.println((a + b + c) + " " + s);
        sc.close();
    }
}