#include <iostream>
#include <string>
using namespace std;

// ---------- Abstract Base Class ----------
class Locker {
protected:
    string lockerID;
    bool isLocked;

    virtual bool authenticate(const string& key) = 0; // only accessible inside class hierarchy

public:
    Locker(string id) : lockerID(id), isLocked(true) {}

    virtual void openLocker() = 0;
    virtual void closeLocker() = 0;

    string getLockerID() const { return lockerID; }

    // Public method: safely access locker using key
    bool tryAccess(const string& key) {
        if (authenticate(key)) {
            openLocker();
            closeLocker();
            return true;
        }
        return false;
    }

    virtual ~Locker() {}
};

// ---------- Derived Class: CustomerLocker ----------
class CustomerLocker : public Locker {
private:
    string pinCode;
    string contents;

protected:
    bool authenticate(const string& key) override {
        return key == pinCode;
    }

public:
    CustomerLocker(string id, string pin, string item)
        : Locker(id), pinCode(pin), contents(item) {}

    void openLocker() override {
        if (!isLocked)
            cout << "Locker already open.\n";
        else {
            isLocked = false;
            cout << "Locker " << lockerID << " opened. Contents: " << contents << endl;
        }
    }

    void closeLocker() override {
        isLocked = true;
        cout << "Locker " << lockerID << " locked.\n";
    }

    string getContents() const { return contents; }
    void setContents(const string& item) { contents = item; }

    void setPinCode(const string& pin) {
        if (pin.length() == 4) pinCode = pin;
        else cout << "Invalid PIN. Must be 4 digits.\n";
    }
};

// ---------- Derived Class: AdminLocker ----------
class AdminLocker : public Locker {
private:
    string masterKey;
    string status;

protected:
    bool authenticate(const string& key) override {
        return key == masterKey;
    }

public:
    AdminLocker(string id, string key)
        : Locker(id), masterKey(key), status("Secured") {}

    void openLocker() override {
        isLocked = false;
        status = "Under Inspection";
        cout << "Admin locker " << lockerID << " opened for inspection.\n";
    }

    void closeLocker() override {
        isLocked = true;
        status = "Secured";
        cout << "Admin locker " << lockerID << " locked securely.\n";
    }

    void setMasterKey(const string& key) { masterKey = key; }
};

// ---------- Class: User ----------
class User {
private:
    string userID;
    string name;
    string role;
    string password;
    Locker* assignedLocker;

public:
    User(string id, string n, string r, string pass, Locker* locker)
        : userID(id), name(n), role(r), assignedLocker(locker) {
        setPassword(pass);
    }

    bool setPassword(const string& pass) {
        if (pass.length() >= 6) {
            password = pass;
            return true;
        }
        cout << "Password too short! Minimum 6 characters.\n";
        return false;
    }

    bool login(const string& pass) const {
        return pass == password;
    }

    Locker* getLocker() const { return assignedLocker; }
    string getName() const { return name; }
    string getRole() const { return role; }

    void accessLocker() {
        string key;
        int attempts = 3;

        while (attempts-- > 0) {
            cout << "Enter " << (role == "Admin" ? "master key: " : "locker PIN: ");
            cin >> key;

            if (assignedLocker->tryAccess(key)) {
                return; // success
            }

            cout << "Incorrect key. Attempts left: " << attempts << endl;
        }
        cout << "Access denied.\n";
    }
};

// ---------- BankVault ----------
class BankVault {
private:
    Locker* lockers[5];
    int count;

public:
    BankVault() : count(0) {}

    void addLocker(Locker* locker) {
        if (count < 5) lockers[count++] = locker;
        else cout << "Vault full.\n";
    }

    Locker* operator[](int index) {
        if (index >= 0 && index < count)
            return lockers[index];
        return nullptr;
    }

    ~BankVault() {
        for (int i = 0; i < count; i++)
            delete lockers[i];
    }
};

// ---------- MAIN ----------
int main() {
    BankVault vault;

    vault.addLocker(new CustomerLocker("C101", "1234", "Gold Jewellery"));
    vault.addLocker(new AdminLocker("A001", "master@2025"));

    User customer("U001", "Neha Sharma", "Customer", "neha123", vault[0]);
    User admin("U002", "Manager Raj", "Admin", "admin@bank", vault[1]);

    string userPass;

    // Customer login
    cout << "Enter password for Neha Sharma: ";
    cin >> userPass;

    if (customer.login(userPass)) {
        cout << "Login successful. Welcome " << customer.getName() << "!\n";
        customer.accessLocker();
    } else cout << "Login failed.\n";

    // Admin login
    cout << "\nAdmin login:\nPassword: ";
    cin >> userPass;

    if (admin.login(userPass)) {
        cout << "Welcome, " << admin.getName() << ".\n";
        admin.accessLocker();
    } else cout << "Login failed.\n";

    return 0;
}
