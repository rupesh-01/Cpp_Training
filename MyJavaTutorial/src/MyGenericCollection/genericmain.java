package MyGenericCollection;
import java.util.Iterator;

public class genericmain {
    public static void main(String[] args) {
        generic<Integer> list = new generic<>();
        list.add(5);
        list.add(2);
        list.add(3);
        /* Iterator<Integer> it = list.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        } */
        for(int val : list){
            System.out.println(val);
        }
    }
}
