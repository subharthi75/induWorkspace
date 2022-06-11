package practice;

public class Address {
	String street;
	String city;
	String district;
	String state;
	String country;
	public Address(String street, String city, String district, String state, String country) {
		this.street = street;
		this.city = city;
		this.district = district;
		this.state = state;
		this.country = country;
	}
	@Override
	public String toString() {
		return "Address [street=" + street + ", city=" + city + ", district=" + district + ", state=" + state
				+ ", country=" + country + "]";
	}
}
