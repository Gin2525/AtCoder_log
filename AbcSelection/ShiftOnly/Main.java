import java.util.Scanner;
import java.io.*;
public class Main{
    public static void main(String[] args) {
        int i=0;
        int n=0;
        int count = 0;
        boolean flag = false;
        Scanner sc = new Scanner(System.in);
        try{
            n =  Integer.parseInt(sc.next());
        }catch(Exception e){
            System.out.println(e);
        }
            int[] array = new int[n]; //入力値分の配列宣言
        for(i = 0;i<n;i++){
            array[i] = Integer.parseInt(sc.next());
        }
        while(true){
            for(i=0;i<n;i++){
                if(array[i]%2 == 1){
                    flag = true;
                    break; //奇数が存在した瞬間break
                }
            }
            if(flag){
                break;
            }else{
                count++;
                for(i=0;i<n;i++){ //奇数が存在しなかった場合は配列を全て２で除算する。
                    array[i] = array[i] / 2;
                }
            }
            flag=false;
        }
        System.out.println(count);
    }
}
