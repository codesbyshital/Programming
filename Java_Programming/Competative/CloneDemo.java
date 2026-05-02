class Student implements Cloneable
{
    public String Name;
    public int Age;
    public int Marks;

    Student(String A, int B, int C)
    {
        this.Name = A;
        this.Age = B;
        this.Marks = C;
    }

    public String toString()
    {
        return "Name: "+this.Name+" Age: "+this.Age+" Marks: "+this.Marks;
    }

    public Object clone() throws CloneNotSupportedException     //Overrided method of Object class.
    {
        return super.clone();
    }
}

public class CloneDemo
{
    public static void main(String A[]) throws Exception
    {
        Student sobj = new Student("Amit",30,90);

        Student sobjX = (Student)sobj.clone();
        
        System.out.println(sobj);
        System.out.println(sobjX);
        
        System.out.println(sobj.hashCode());   //Deep copy
        System.out.println(sobjX.hashCode());   // Deep copy
        
    }
    
}
