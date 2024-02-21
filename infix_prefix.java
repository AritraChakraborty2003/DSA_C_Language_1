import java.util.HashMap;
import java.util.Stack;

public class infix_prefix {
    public static void main(String[] args){
        System.out.println(infixPrefix("x+y*(z-w)"));
    }
    static String infixPrefix(String exp){
        String res="";
        Stack<Character> stk=new Stack<>();
        HashMap<Character,Integer> wMap=new HashMap<>();
        wMap.put('^',5);
        wMap.put('*',4);
        wMap.put('/',4);
        wMap.put('+',3);
        wMap.put('-',3);
        wMap.put(')',0);


        for(int i=exp.length()-1;i>=0;i--){
            if((((int)(exp.charAt(i))>=49)&&((int)(exp.charAt(i))<=57))
                    ||(((int)(exp.charAt(i))>=65)&&((int)(exp.charAt(i))<=90))||
            (((int)(exp.charAt(i))>=97)&&((int)(exp.charAt(i)))<=122)){
                    res+=exp.charAt(i);
            }

            else if(exp.charAt(i)==')')
                    stk.push(exp.charAt(i));
            else if(exp.charAt(i)=='(')
            {
                while(stk.peek()!=')'){
                    res+=stk.pop();
                }
                stk.pop();
            }

            else{

                if(stk.isEmpty()) stk.push(exp.charAt(i));
                else if(wMap.get(stk.peek())<wMap.get(exp.charAt(i)))
                    stk.push(exp.charAt(i));
                else{
                    while((!stk.isEmpty()) &&(wMap.get(stk.peek())>=wMap.get(exp.charAt(i)))){
                         res+=stk.pop();
                    }
                    stk.push(exp.charAt(i));
                }
            }

        }

        while(!stk.isEmpty())  res+=stk.pop();
        StringBuilder res1=new StringBuilder();
        res1.append(res);
        res1.reverse();
        return String.valueOf(res1);
    }
}
