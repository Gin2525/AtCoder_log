import java.util.*;
public class Main{
    public static void main(String[] args) {
        int count=0;
        Scanner sc = new Scanner(System.in);
        int a = Integer.parseInt(sc.next());//500円玉
        int b = Integer.parseInt(sc.next());//100円玉
        int c = Integer.parseInt(sc.next());//50円玉
        int x = Integer.parseInt(sc.next());//合計金額

        for(int i=a;i>=0;i--){
            for(int j=b;j>=0;j--){
                for(int k=c;k>=0;k--){
                    if(x == i*500 + j*100 + k*50){
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
    }
}
