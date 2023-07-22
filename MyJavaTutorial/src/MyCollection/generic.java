package MyCollection;
import java.util.Iterator;

import Sample.sample;

public class generic {
    public static void main(String[] args) {
        sample<Integer> list = new sample<>();
        list.add(null);
        list.add(2);
        list.add(3);
        Iterator<Integer> it = list.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }
    }
}
