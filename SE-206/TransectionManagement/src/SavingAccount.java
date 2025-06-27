package TransectionManagement;

public class SavingAccount extends Account {

	public SavingAccount(double balance) {
		super(balance);
		super.setInterestRate(0.04);
	}

	@Override
	public void withdraw(double amount) {
		if (amount < super.getBalance()) {
			super.withdraw(amount);
		}
		else {
			System.err.println("Please enter a valid amount less than " +super.getBalance());
		}
	}

}
