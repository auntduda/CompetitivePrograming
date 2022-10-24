import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner ler = new Scanner(System.in);

        int n, m;
        int[][] ter = new int[1024][1024];
        n = ler.nextInt();
        m = ler.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ter[i][j] = ler.nextInt();
            }
        }
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(ter[i][j]==42 && ter[i-1][j-1]==7 && ter[i-1][j]==7 && ter[i-1][j+1]==7 && ter[i][j-1]==7 && ter[i][j+1]==7 && ter[i+1][j-1]==7 && ter[i+1][j]==7 && ter[i+1][j+1]==7){
                    System.out.printf("%d %d\n", i+1, j+1);
                    return;
                }
            }
        }
        System.out.printf("0 0\n");
    }
}