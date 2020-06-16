//Question 2 - Create a BankAccount class having Balance as an attribute and add 
//copy constructor to it.The constructor should accept a BankAccount object as an 
//argument.It should assign to the balance field, the value in the argument’s balance 
//field.As a result, the new object will be copy of the argument object
class BankAccount
{
	int Balance;
public:
	BankAccount(int x)
	{
		Balance = x;
	}
	BankAccount(const BankAccount& ba)
	{
		Balance = ba.Balance;
	}
	int getBalance()
	{
		return Balance;
	}
};
