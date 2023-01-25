
import java.util.*;
import java.util.Map;
import java.util.TreeMap;

class StringX 
{
    public void String_Demo(String str)
    {
        Map<String,Integer> mp=new TreeMap<>();
 
        // Splitting to find the word
        String arr[]=str.split(" ");
 
        // Loop to iterate over the words
        for(int i=0;i<arr.length;i++)
        {
            // Condition to check if the
            // array element is present
            // the hash-map
            if(mp.containsKey(arr[i]))
            {
                mp.put(arr[i], mp.get(arr[i])+1);
            }
            else
            {
                mp.put(arr[i],1);
            }
        }
        
        // Loop to iterate over the
        // elements of the map
        for(Map.Entry<String,Integer> entry:
                    mp.entrySet())
        {
            System.out.println(entry.getKey()+" - "+entry.getValue());
        }

    }

}

class Java45_3
{
    public static void main(String args[]) 
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter string");
        String str = sobj.nextLine();


        StringX  obj = new StringX();

        obj.String_Demo(str);

        
        sobj.close();
        
     }
}

/*
Please enter string
India is my Country , india having 28 states and india is hindu Country
, - 1
28 - 1
Country - 2
India - 1
and - 1
having - 1
hindu - 1
india - 2
is - 2
my - 1
states - 1

 */