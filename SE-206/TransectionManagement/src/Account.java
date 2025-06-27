package TransectionManagement;

public class Account {
	
	private int accountID;
	

	private double balance;
	private double interestRate;
	
	public Account(double balance) {
		this.balance = balance;
	}
	
	public void applyInterest() {
		balance += balance * interestRate;
	}
	
	public void withdraw(double amount) {
		balance -= amount;
	}
	public int getAccountID() {
		return accountID;
	}

	public double getBalance() {
		return balance;
	}

	public void setInterestRate(double interestRate) {
		this.interestRate = interestRate;
	}
	

}
