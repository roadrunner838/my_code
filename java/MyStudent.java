public class MyStudent {
    private int id;
    private String name;
    private String lname;
    private MyDate bDate = new MyDate();
    public MyStudent(){
        SetInfo("_", "_",0,0,0,0);
    }
    public void SetInfo(String n, String ln, int i,int d,int m,int y){
       this.name = n;
        this.lname = ln;
        this.id = i;
        bDate.setDay(d);
        bDate.setMonth(m);
        bDate.setYear(y);
     }
     public String GetInfo(){
        String info = "";
        info =  "id = " + id + ", name = " + name + ", lname =" + lname;
        info = info + ", bearthDate = " +  bDate.GetDate();
        return info;
     }
     public  String GEtlastname(){
        return lname;
     }

    public static void sortBylName(MyStudent[] student) {
        int size =  student.length;
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - 1 - i; j++) {
                if ( student[j].GEtlastname().compareTo( student[j + 1].GEtlastname()) > 0) {
                   MyStudent temp =  student[j];
                    student[j] =  student[j+1];
                    student[j+1] = temp;
                }
            }
        }
    }



}
