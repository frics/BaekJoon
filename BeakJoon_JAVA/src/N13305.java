import java.util.Scanner;

public class N13305 {


    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int [] path = new int[N];
        int [] W = new int[N-1];
        int [] gas = new int[N];

        for(int i=0; i<N-1; i++){
            W[i] = s.nextInt();
        }
        for(int i=0; i<N; i++){
            gas[i] = s.nextInt();
        }

        
        System.out.println(N);
        for(int i=0; i<N-1; i++)
            System.out.print(W[i]);
        System.out.println();
        for(int i=0; i<N; i++)
            System.out.print(gas[i]);

    }
    private void dijkstra(){

    }
}
