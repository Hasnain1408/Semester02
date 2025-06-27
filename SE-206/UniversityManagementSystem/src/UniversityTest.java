import java.util.ArrayList;

public class UniversityTest {
    public static void main(String[] args) {
        Person p1 = new Person("Hasnain","Sheikh",20);
        Person p2 = new Student("Sourav","Roy",12);
        Person p3 = new Person("Samiul","Sheikh",20);
        Person p4 = new Employee("Mojid","Chacha",45);

        ArrayList<Person> person = new ArrayList<>();
        person.add(p1);
        person.add(p2);
        person.add(p3);
        person.add(p4);

       University du = new University(person);

        du.getFullNames();
        System.out.println(du.getOldestPerson().getFullName());
        System.out.println(du.getYoungestPerson().getFullName());


        ArrayList<Person> voters = new ArrayList<>();
        voters =du.voter;
        for(Person p : du.getVOters()){
           System.out.println(p.getFullName());
        }

//        for(Person p : voters){
//            System.out.println(p.getFullName());
//        }

        System.out.println(du.getNumberOfEmployee());





    }
}
