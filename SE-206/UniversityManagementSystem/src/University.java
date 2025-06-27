import java.util.ArrayList;

public class University {

    ArrayList<Person> person = new ArrayList<>();
    ArrayList<Person> voter = new ArrayList<>();
    ArrayList<String> fullname = new ArrayList<>();

    public University( ArrayList<Person>  obj){
        person.addAll(obj);

    }

    public void getFullNames(){
        for(Person p : person){
            fullname.add(p.getFullName());
            System.out.println(p.getFullName());
            fullname.add(", ");
        }
    }
    public Person getOldestPerson(){
        Person oldMan = person.get(0);
        for(Person p : person){
           if(p.getAge() > oldMan.getAge()){
              oldMan = p;
           }
        }
        return oldMan;
    }

    public Person getYoungestPerson(){
        Person YoungestMan = person.get(0);
        for(Person p : person){
            if(p.getAge() <  YoungestMan.getAge()){
                YoungestMan = p;
            }
        }
        return YoungestMan;
    }

    public ArrayList<Person> getVOters() {
        for(Person p : person){
          if(p.canVote()) {
           voter.add(p);
          }
        }
        return voter;
    }

    public int getNumberOfEmployee(){
        int  numOfEmplyee = 0;
        for(Person p : person){
            if(p.getFullName().endsWith("Employee)")) {
               numOfEmplyee++;
            }
        }
        return  numOfEmplyee;
    }
}
