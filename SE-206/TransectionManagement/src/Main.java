package TransectionManagement;

public class Main {

	public static void main(String[] args) {
		Account savingaccount = new SavingAccount(1000);
		savingaccount.withdraw(1200);

		Account currentaccount = new CurrentAccount(1000);
		currentaccount.withdraw(1200);
		System.out.println(currentaccount.getBalance());
	}

}
