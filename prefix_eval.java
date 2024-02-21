import java.util.*;

public class prefix_eval {
        public static void main(String[] args){
                int val=prefix_eval_sol("+*523");
                System.out.println(val);
        }

        static int prefix_eval_sol(String exp){
        
            Stack<Integer> stk=new Stack<>();
            for(int i=exp.length()-1;i>=0;i--){
                 if(((int)(exp.charAt(i))>=49)&&((int)(exp.charAt(i))<=57)){
                     String res=String.valueOf(exp.charAt(i));
                     int val=Integer.valueOf(res);
                     stk.push(val);
                 }
                 else{
                     int op1=stk.pop();
                     int op2=stk.pop();
                     char x=exp.charAt(i);
                     if(x=='+') stk.push(op1+op2);
                     else if(x=='-') stk.push(op1-op2);
                     else if(x=='*') stk.push(op1*op2);
                     else stk.push(op1/op2);
                 }
            }
            return stk.peek();
        }
}
