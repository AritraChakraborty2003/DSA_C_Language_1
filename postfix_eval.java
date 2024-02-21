import java.util.Stack;

public class postfix_eval {

    public static void main(String[] args){
        String exp[]={"10","2","8","*","+","3","-"};
        int a = evaluatePostfix(exp);
        System.out.println(a);


        }
    	 static int evaluatePostfix(String[] exp) {
		// Write your code here.
		String str = String.join("", exp);
	    Stack<Integer> stk=new Stack<>();

;
		for(int i=0;i<str.length();i++){
			 if(((int)(str.charAt(i))>=48) && ((int)(str.charAt(i))<=57))
			 	{
					 String res=String.valueOf(str.charAt(i));
					 int val=Integer.valueOf(res);

                   
					 stk.push(val);
                     System.out.println(stk);
				 }
			else{
				 int op1=stk.pop();
				 int op2=stk.pop();
				 if(str.charAt(i)=='+') stk.push(op2+op1);
				 else if(str.charAt(i)=='-') stk.push(op2-op1);
				 else if(str.charAt(i)=='*') stk.push(op2*op1);
				 else stk.push(op2/op1);
			}
		}
		return stk.peek();



}
}
