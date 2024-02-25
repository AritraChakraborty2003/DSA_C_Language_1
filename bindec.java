

public class bindec {

    public static void main(String[] args) {
        decBin(9);
        BinDec("11011");
    }
    static void decBin(int n){
        String str="";
        while (n!=0) {
            
            int rem=n%2;
            str+=rem;
            n=n/2;
        }
        revStr(str);
    }

    static void BinDec(String str){
        int res=0;
        int s=str.length()-1;
        for(int i=0;i<str.length();i++){
            res+=(int)Math.pow(2,s)*Integer.valueOf(String.valueOf(str.charAt(i)));
            s--;
        }
        System.out.println(res);
    }

    static String revStr(String str){
        String res="";
        for(int i=str.length()-1;i>=0;i--){
            res+=str.charAt(i);
            System.out.print(str.charAt(i));
        }
        System.out.println();
        return res;
    }
}

