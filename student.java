import java.util.Scanner;

public class student {

    Scanner input=new Scanner(System.in);

    private
        String[] fName ;
        String[] lName ;
    private
     int n;
    int[]id;
    int[]age;
    public student() {
        System.out.print("enter the size  ");
        n=input.nextInt();
        fName=new String[n];
        lName=new String[n];
        id=new int[n];
        age= new int[n];

        for (int i = 0; i < fName.length; i++) {
            System.out.print("enter the firstname  "+(i+1)+":");
            fName[i]=input.next();
            System.out.print("enter the lastname  "+(i+1)+":");
            lName[i]=input.next();
            System.out.print("enter the id "+(i+1)+":");
            id[i]=input.nextInt();
            System.out.print("enter the age "+(i+1)+":");
            age[i]=input.nextInt();
        }
    }
    public void print(){
        for (int i=0;i< fName.length;i++) {
       System.out.println("firstname:\t"+fName[i]+'\t'+"lastname:\t"+lName[i]+'\t'+"age:\t"+age[i]+'\t'+"id:\t"+id[i]);
        }

    }
}
