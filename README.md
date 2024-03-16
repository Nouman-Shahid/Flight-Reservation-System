Introduction:
The Flight Reservation System is a software application designed to simplify the process of booking and managing flight reservations for both passengers and airlines. It provides a user-friendly interface for passengers to add their details, view passenger information, search for specific passengers, delete passengers, and edit flight details. The system aims to streamline the flight reservation process, improve passenger management, and enhance overall efficiency for airlines.

Objectives:
1.	Simplify Passenger Management: The system allows passengers to add their details, including name, flight details, and payment status, to the system. This helps in organizing passenger information effectively.

2.	Efficient Display of Passenger List: The system provides a display function that shows the list of passengers along with their flight details and payment status. This feature allows airlines to have an overview of all passengers.

3.	Passenger Search Functionality: The system enables passengers to search for a specific passenger by name. This feature is useful for quickly retrieving passenger details and providing personalized service.

4.	Passenger Deletion Capability: Passengers have the ability to delete a passenger from the list based on their name. This feature ensures that outdated or irrelevant passenger information can be removed from the system.

5.	Flight Details Editing: Passengers can edit a passenger's flight details if there are any changes or updates. This functionality allows passengers to modify their flight information easily.







Data Structure:
The data structure that would be suitable for this project is a singly linked list. In the project, passengers are represented as nodes in the linked list, where each node contains the passenger's information (name, flight details, payment status), as well as a pointer to the next node in the list. The linked list allows for dynamic allocation and deallocation of memory, which is essential for handling variable numbers of passengers.
	Why we choose Singe Linked list?

1.	Dynamic Size: The linked list allows for efficient handling of a variable number of passengers. New passengers can be added to the end of the list by updating the pointers, and passengers can be deleted by adjusting the pointers accordingly.

2.	Insertion and Deletion: The linked list provides efficient insertion and deletion operations. Adding a new passenger involves traversing the list to find the end and updating the last node's pointer, which can be done in linear time. Deleting a passenger involves adjusting the pointers to bypass the node being deleted, also achievable in linear time.

3.	Easy Traversal: The linked list allows for easy traversal through the list of passengers. The head pointer provides access to the first passenger, and subsequent passengers can be accessed by following the next pointers.
4.	Easy Traversal: The linked list allows for easy traversal through the list of passengers. The head pointer provides access to the first passenger, and subsequent passengers can be accessed by following the next pointers.

5.	Flexibility: The linked list is a flexible data structure that can accommodate frequent modifications and updates. It does not require a fixed size and can grow or shrink as needed, making it suitable for a scenario where passengers can be added, deleted, or modified.

6.	Memory Efficiency: The linked list allocates memory dynamically as nodes are added, reducing memory waste compared to fixed-size data structures like arrays

