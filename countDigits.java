public class countDigits{
    public static void main(String[] args){
        System.out.println("The no. of digits "+noOfDigits(693));
    }
    static int noOfDigits(int n){
        return (int)Math.log10(n)+1;
    }
}