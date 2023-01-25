


import java.util.*;


class StringX 
{
    public int Check_Rotations( String str ,String Word)
    {
        int iCount=0;
        int index=0;
        for(int i=0; i+Word.length()<=str.length(); i++)    //i+sub.length() is used to reduce comparisions
        {
            index=str.indexOf(Word,i);
            if(index>=0)
            {
                iCount++;
                i=index;
                index=-1;
            }
        }
        
        return iCount;
    }

}

class Java45_2
{
    public static void main(String args[]) 
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter string");
        String str = sobj.nextLine();

        System.out.println("Please enter the word which want to check in the string");
        String Word = sobj.nextLine();

        StringX  obj = new StringX();

        int iRet = obj.Check_Rotations( str , Word);

        System.out.println("The word "+Word+" is occures "+iRet+" times in given string "+str);
    

        

        sobj.close();
        
     }
}

/*
Please enter string
I am Nayan naik, Nayan is It Engineer
Please enter the word which want to check in the string
Nayan
The word Nayan is occures 2 times in given string I am Nayan naik, Nayan is It Engineer



 */