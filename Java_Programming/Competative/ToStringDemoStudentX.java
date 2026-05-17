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
        return "Name: "+this.Name+" Age: "+this.Age+" Marks: "+this.Marks;
    }
}

public class ToStringDemoStudentX
{
    public static void main(String A[])
    {
        Student sobj = new Student("Amit",30,90);
        
        System.out.println(sobj);

        
    }
    
}
