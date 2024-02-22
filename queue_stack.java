import java.util.*;
class Queue1{
    Stack<Integer> s1=new Stack<>();
    Stack<Integer> s2=new Stack<>();

    public void enqueue(int x){
        while(!s1.isEmpty()) {
            s2.push(s1.peek());
            s1.pop();
        }
        s1.push(x);
        
   
        while(!s2.isEmpty()) {
            s1.push(s2.peek());
            s2.pop();
        }

   
    }

    int dequeue(){
        return s1.pop();
    }

    int top()
    {
        if(s1.isEmpty()) return -1;
        return s1.peek();
    }

    int size(){
        if(s1.isEmpty()) return -1;
        return s1.size();
    }

}
public class queue_stack {

    public static void main(String[] args){
            Queue1 q=new Queue1();
            q.enqueue(5);
            q.enqueue(3);
            q.enqueue(2);
            q.enqueue(4);
        
            System.out.print(q.dequeue()+" ");
            System.out.print(q.dequeue()+" ");
            System.out.print(q.dequeue()+" ");
            System.out.print(q.dequeue()+" ");
            System.out.println();

          
        
    }
    
}
