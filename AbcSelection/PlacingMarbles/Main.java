import java.util.*;
public class Main{
    public static void main(String[] args) {
        //整数入力
        Scanner sc = new Scanner(System.in);
        int count = 0;
        int n = Integer.parseInt(sc.next());
        if(n>=100){
            count++;
            if(n>=110){
                count++;
                if(n==111)
                    count++;
            }else if(n==101){
                count++;
            }
        }else if(n>=10){//99~10
                count++;
            if(n==11)
                count++;
        }else{//10~1
            if(n==1)
                count++;
        }
        System.out.println(count);
    }
}