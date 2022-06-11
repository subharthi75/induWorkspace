package practice;

public class Date {
	int day;
	int month;
	int year;
	
	
	Date(int d, int m, int y){
		this.day=d;
		this.month=m;
		this.year=y;
	}
	
	@Override
	public String toString() {
		return "Date [day=" + day + ", month=" + month + ", year=" + year + "]";
	}
	

	
	
}
