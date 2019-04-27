## GROUP 44 - ENGG1340
This is the readme file for Group 44's (ENGG1340 - Computer Programming 2) repository. The group members are Bevan Varghese and Katyayani Singh. 

### Problem Statement
Management of stock is as important an aspect of a company's functioning as any other. "Supply and demand" is a phrase closely associated with the performance of a brand in the market - without supply, there would be no demand. Our program aims to optimize the process of managing inventory, with the help of a **commodity inventory system**. We aim to build the system such that it allows staff to keep a track of commodity inventory in the company's retail outlets, and efficiently carry out tasks to ensure the smooth running of delivery and sales.
The program has been built in C++.

### Problem Setting
_What our program does?_ Sets up a commodity inventory system for stock management.  
_Whom does it help?_ The inventory management chain of a business on the large scale, all the way down to small family businesses.  
_Why is it helpful?_ Optimises and ensures management of inventory in an efficient manner.  
Since the repository will be open to the public, anyone can get started with this system when the need arises.

### Program Features
The program interface is menu-driven, allowing the user to execute functions according to their will.
#### Required Features
1) **Insert** new commodities with basic information  
2) **Update** commodity information  
3) **Delete** obsolete commodities  
4) **Search** for commodities with different filters
   - serial number
   - commodity name
   - manufacturer name
   - stock status
5) **Automatic updation** of inventory status based on availability  
6) Scan the inventory to **check** if any commodity
   - is out of stock
   - is nearly out of stock
#### Additional Features
1) **Display** the whole inventory in order of **serial number** along with the number of commodities.
2) **Display** the whole inventory in order of **demand** (popularity based on number of sales) along with the number of commodities.
3) **Import** an existing inventory from a .txt file named after the shop.
4) **Export** the updated inventory to a .txt file named after the shop.


### Instructions
#### Reasonable Assumptions
-All data must be _case-sensitive_.

-The user will not insert duplicate items (with manufacturers duplicate) as well. The search/update functions can be used instead.

-The user has git installed on their system.

#### Execution
(i) Clone our repository onto your system. Open up the terminal window and execute the following command:
   > git clone https://github.com/katyayanisingh/Group44ENGG1340

(ii) Navigate to the directory of the repository using the _cd_ command.

(iii) Run the following command to compile and execute the program:
   > make run

To use our sample input file, run the program and enter "sample input" as the shop name.

#### Contact Us
Katyayani Singh: ksingh@connect.hku.hk  
Bevan Varghese: bevanvar@connect.hku.hk
