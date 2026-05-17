class Student
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
        return "Marvellous Pune";
    }
}

public class ToStringDemoStudent
{
    public static void main(String A[])
    {
        Student sobj = new Student("Amit",30,90);
        
        System.out.println(sobj);

        
    }
    
}
