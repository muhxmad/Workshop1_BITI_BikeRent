Step by step to use Insolusi Coding GUI *step really needed to compile and run the program

Step 1 :Checking Your System
System Requirement:
Windows 10 and Windows 8.1
Select the Start  button, then select Settings > System > About .
At the right, under Device specifications, see System type.

Windows 7
Select the Start button , right-click Computer, and then select Properties.
Under System, see the system type.

Step 2:Download Visual Studio 2019 content*
Under Desktop & Mobile 
-Dekstop development with C++

Step 2.1: Download Xampp* 

Step 3:Download ODBC connector*
Please install ODBC based on System Type bits Operating System (check step 1)
for 64-bit install mysql-connector-odbc-8.0.20-winx64.msi
for 32-bit install mysql-connector-odbc-8.0.20-win32.msi 
as provided in folder.

Step 4:in phpMyAdmin create and name as "cpp_insolusi_db" database then import cpp_insolusi_db.sql file given.*

Step 5:
After intalling ODBC, next is to set the odbc connector 
used this video as reference: https://www.youtube.com/watch?v=K3GZidOwGmM

and SET the detail given below after click configure button:- *xampp need to start for this step


Data Source Name: insolusoDatabase
Description:
Tcp/IP Server: localhost 	Port:3306
User: root
Password:
Database:cpp_insolusi_db *bring out the list from xampp

after set as above click the button Test
Should bring message box "connection is succesful" 

Step 6*
Open insolusi folder and run program insolusi.sln

Enjoy~

if occur any problem please contact muhammadfahmi98kamaruddin@gmail.com