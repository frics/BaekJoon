import java.util.Scanner;

public class N8958 {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int[] score = new int[N];
        int Pscore=0;
        for(int i=0; i<N; i++){
            String OX= s.nextLine();
            for(int j=0; j<OX.length(); j++){
                if(j>0 && OX.charAt(i-1)=='O')
                    Pscore++;

            }
        }
        s.close();

    }
}
