#include <iostream>
#include <string>

class Contact {
	std::string fullName;
	long homeNumber;
	long long phoneNumber;
	std::string homeAddress;
public:
	Contact() {
		fullName = "noName";
		homeNumber = 0;
		phoneNumber = 0;
		homeAddress = "Russia";
	}
	Contact(std::string otherName, long otherHomeNumber, long long  otherPhoneNumber, std::string otherHomeAdress) {
		fullName = otherName;
		homeNumber = otherHomeNumber;
		phoneNumber = otherPhoneNumber;
		homeAddress = otherHomeAdress;
	}
	~Contact() {
		std::cout << "Деструктор сработал\n";
	}
	void setFullName(std::string newFullName) {
		fullName = newFullName;
	};
	void SethomeNumber(long newHomeNumber) {
		if (newHomeNumber <= 9999999 && newHomeNumber >= 2000000)
			homeNumber = newHomeNumber;
		else
			std::cout << "Error\n";
	};
	void SetphoneNumber(long long newPhoneNumber) {
		if (newPhoneNumber >= 80000000000 && newPhoneNumber <= 89999999999)
			phoneNumber = newPhoneNumber;
		else
			std::cout << "Error\n";
		phoneNumber = newPhoneNumber ;
	};
	void SetHomeAdress(std::string newHomeAddress) {
			homeAddress = newHomeAddress;
	};
	  

	std::string GethomeAddress() {
		return homeAddress;
	}
	std::string GetFullName() {
		return fullName;
	}
	long long GetHomeNumber() {
		return homeNumber;
	}
	long long GetPhoneNumber() {
		return phoneNumber;
	}

	void print() {
		std::cout << "Full name: " << fullName << "\nHome number: " << homeNumber << "\nPhone number: " << phoneNumber << "\nHome adress: " << homeAddress << std::endl;
	}

};

int main() {
	setlocale(LC_ALL, "Russian");
	Contact Marina;
	Marina.print();
	std::cout << "_____________________________________________________________________\n";
	Contact Pasha;
	Pasha.SetHomeAdress("Russia, SO, EKB, Kosareva, 12");
	Pasha.setFullName("Borisov Pavel Arkad'evich");
	Pasha.SethomeNumber(2334456);
	Pasha.SetphoneNumber(89935467733);
	Pasha.print();
	std::cout << "_____________________________________________________________________\n";
	Contact Misha("Isaev Mihail Victorovich", 2334455, 89923452255, "Russia, SO, EKB, Kosareva, 14");
	std::cout << Misha.GetFullName() << std::endl;
	std::cout << Misha.GethomeAddress() << std::endl;
	std::cout << Misha.GetHomeNumber() << std::endl;
	std::cout << Misha.GetPhoneNumber() << std::endl;
	std::cout << "_____________________________________________________________________\n";
	Contact Serega;
	Serega.SetphoneNumber(89824455668);
	Serega.print();
	return 0;
}