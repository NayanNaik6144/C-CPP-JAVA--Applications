class Base
{

    public int A,B;
    public Base(int No1 , int No2)
    {
        this.A= No1 ;
        this.B = No2 ;
    }

    public void fun()
    {
        System.out.println("Inside BAse fun");
        System.out.println("Value of A form fun method is :"+this.A);
    
    }
}

class Derived extends Base
{
    public int X,Y ;
    public Derived (int No1 ,int No2 ,int k , int l)
    {
        super(k ,l) ;
        this.X=No1;
        this.Y=No2;

    }
    public void gun()
    {
        System.out.println("Inside Derived  gun");
        System.out.println("Value of A form fun method is :"+super.A);
        super.fun();
    }
    

}

class SupperDemo
{
    public static void main(String a[])
    {
        Derived dobj = new Derived(11,21,51 ,101);
        dobj.gun();

    }


} 