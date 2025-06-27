package TransectionManagement;

public class CurrentAccount extends Account{

	public CurrentAccount(double balance) {
		super(balance);
		super.setInterestRate(0.0);
	}

}
