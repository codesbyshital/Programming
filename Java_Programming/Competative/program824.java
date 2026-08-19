/*
    problems on Numbers & digits started:
    
    Automorphic number: whos square ends with exact same digit as the smae digit

    Ex: 25 : 625  : ends with 25 , 
    6 : 36 : ends with 6    

*/ 


class program824
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 141376;   // square of 376

        System.out.println(iNo % 10);
        System.out.println(iNo % 100);
        System.out.println(iNo % 1000);

        

    }
}