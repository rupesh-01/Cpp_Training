package MyGenericCollection;

import java.util.Iterator;

public class generic <T> implements Iterable<T>{
    private T[] myarray;
    private int size;
    public generic(){
        size=0;
        myarray = (T[])new Object[100];
    }
    public void add(T ele){
        myarray[size ++]=ele;
    }
    public T get(int ind){
        return myarray[ind];
    }
    @Override
    public Iterator<T> iterator(){
        return new getIterator(this);
    }
    private class getIterator implements Iterator<T>{
        private generic<T> array;
        int index;
        public getIterator(generic<T> array){
            index=0;
            this.array=array;
        }
        @Override
        public boolean hasNext() {
            return index < array.size; 
        }
        @Override
        public T next() {
            return array.myarray[index ++];
        }
    }



    
}
