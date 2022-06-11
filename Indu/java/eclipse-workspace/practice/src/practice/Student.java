package practice;

public class Student {
	String name;
	Date dob;
	Address address;
	int bengali;
	int english;
	int math;
	public Student(String name, Date dob, Address address, int bengali, int english, int math) {
		this.name = name;
		this.dob = dob;
		this.address = address;
		this.bengali = bengali;
		this.english = english;
		this.math = math;
	}
	@Override
	public String toString() {
		return "Student [name=" + name + ", dob=" + dob + ", address=" + address + ", bengali=" + bengali + ", english="
				+ english + ", math=" + math + "]";
	}
}
