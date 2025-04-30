public class MyDate {
    private int day;
    private int month;
    private int year;

    public MyDate(){
        setDay(0);
        setMonth(0);
        setYear(0);
    }
    public int getDay() {
        return day;
    }

    public int getMonth() {
        return month;
    }

    public int getYear() {
        return year;
    }

    public String GetDate(){
        return year + "/" + month + "/" + day;
    }

    public void setDay(int day) {
        this.day = day;
    }

    public void setMonth(int month) {
        this.month = month;
    }

    public void setYear(int year) {
        this.year = year;
    }
}
