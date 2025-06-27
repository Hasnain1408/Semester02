public class Person {

    public String firstName;
    public String lastName;
    public int age;

    public Person(String firstName,String lastName, int age ){
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    public Person(Person person) {
    }

    public String getFullName() {
        return firstName +" "+ lastName;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
    public boolean canVote(){

        return age >= 18;
    }


}
