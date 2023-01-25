

import java.util.*;

class StringX 
{
    public boolean Check_Rotations(String str1 ,String str2)
    {
        boolean bFlag= true;
        if(str1.length() != str2.length())
        {  
            bFlag = false;
            return bFlag;
            
        }  
        else 
        {  
            //Concatenate str1 with str1 and store it in str1  
            str1 = str1.concat(str1);  
              
            //Check whether str2 is present in str1  
            if(str1.indexOf(str2) != -1) 
            {
                return bFlag;
            }  
            else  
            {
                bFlag = false;
                return bFlag;
            }
                
        }  
        
    }

}

class Java45_1
{
    public static void main(String args[]) 
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter First string");
        String str1 = sobj.nextLine();

        System.out.println("Please enter Second string");
        String str2 = sobj.nextLine();

        StringX  obj = new StringX();

        Boolean bRet = obj.Check_Rotations( str1 ,str2);

        if(bRet == true)
        {
            System.out.println("Yes, Given two string are rotations of each other");
        }
        else
        {
            System.out.println("No, Given two string are rotations of each other");
        }

        

        sobj.close();
        
     }
}

/*
Please enter First string
ABCD
Please enter Second string
BCDA
Yes, Given two string are rotations of each other

C:\Users\Nayan\Desktop\PP\Java>java Java45_1
Please enter First string
abcdefg
Please enter Second string
cdefgab
Yes, Given two string are rotations of each other



 */