package practice;

public class MyApp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student stuArr[] = new Student[10];
		stuArr[0] = new Student("Tiku Hazra",new Date(1,4,2003),new Address("parul","arambagh","Hooghly","WB","India"),78,89,45);
		stuArr[1]  = new Student("Indu Ghojumdar",new Date(7,12,2004),new Address("Dighara","arambagh","Hooghly","WB","India"),88,69,47);
		stuArr[2]  = new Student("Vuchu Hazra",new Date(10,10,1995),new Address("Santiniketan Palli","arambagh","Hooghly","WB","India"),58,39,42);


		for(int i=0; i<3; i++) {
			System.out.println(stuArr[i]);
		}
	}

}
