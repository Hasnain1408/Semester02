import java.util.*;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Please enter the customer information string: ");
		String str=sc.nextLine();
		
		String[] arr = str.split(" ",0);
		
		for(String a : arr)
		 System.out.println(a);
		
		System.out.println(arr[1]);
		
		ArrayList<String>list = new ArrayList<String>(Arrays.asList(arr));
		
		System.out.println(list.get(2));
	}

}
