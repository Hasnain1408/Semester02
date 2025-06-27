package TransectionManagement;

import java.util.ArrayList;

public class Bank {
	ArrayList<Account> accounts = new ArrayList<Account>();
	
	public void add(Account account) {
		accounts.add(account);
			
	}
	
	public void remove(int accountID) {
		 
		for(Account ac : accounts) {
			if(accountID == ac.getAccountID())
				accounts.remove(ac);
			return;
		}
		System.err.println("This account doesn't exist !!");
		
	}

}
