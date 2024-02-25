import java.util.Arrays;

public class seieve {

    public static void main(String[] args) {
        seieve(100);   
    }
    static void seieve(int n){
            boolean isPrime[]=new boolean[n+1];
            Arrays.fill(isPrime,true);
            for(int i=2;i<=n;i++){
                if(isPrime[i]){
                    System.out.print(i+" ");
                    for(int j=i*i;j<=n;j+=i){
                         isPrime[j]=false;
                    }
                }
    }
    }
}