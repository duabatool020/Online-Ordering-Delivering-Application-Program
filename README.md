# Online-Ordering-Delivering-Application-Program
The program Solves the following Problem Given below:<br>
Implement an object oriented program with an <b>abstract base class</b> ElectronicDevice with data
member to store the price (in $), the year of manufacture and the weight (in grams) of the
electronic device. Add a parameterized constructor in the class, a <b>pure virtual function</b>
deliveryCharges() and another <b>pure virtual function</b> isDutyFree().<br>
<b>Derive</b> a class ComputerNotebook from ElectronicDevice, provide a parameterized
constructor in the class and <b>override</b> the functions deliveryCharges() and isDutyFree().<br>
The function deliveryCharges() returns the total cost of delivering the computer and is
charged at 2$ per gram (weight) of the device.<br> The function isDutyFree()should return true if
the price of the computer notebook is less than 1000$. The function should return false otherwise.<br>
<b>Derive</b> another class MobilePhone from ElectronicDevice. Add a parameterized constructor
in the class to set the data members.<br> The deliveryCharges()function of the MobilePhone
class should return a fixed cost of 10$ while the function isDutyFree()should return true if
the mobile phone was manufactured before the year 2018. The function should return false
otherwise.<br>
Demonstrate the functionality of your polymorphic class hierarchy by implementing an online
ordering and delivery application<br>
<br><br>
<b>Note: </b>The UML class diagram of class has also been provided in the repository.
