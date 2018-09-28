#include <iostream>
#include <string>
using namespace std;

int main()
{
int ID;
string result;

cout << "Please scan your bar code >>> ";
cin >> ID;

ID = toupper(ID);

	switch (ID)
	{
	case 102094:
		result = "John Brosius\n";
		break;
	case 316338:
		result = "Logan Dewilfond\n";
		break;
	case 138082:
		result = "Jack reis\n";
		break;
	case 313011:
		result = "Aaron Lang\n";
		break;
	case 154824:
		result = "Kaden Graap\n";
		break;
	case 137428:
		result = "Mason Hancock\n";
		break; 
	case 137220:
		result = "Adam Gibson\n";
		break; 
	case 145884:
		result = "Michael france\n";
		break;
	case 306632:
		result = "Evan Raker\n";
		break;
	case 154827:
		result = "Austin Leuenhagen\n";
		break;
	case 155706:
		result = "Joey Chalupa\n";
		break;
	case 134125:
		result = "Jimmy Pham Ho\n";
		break;
	case 318682:
		result = "Jacob Grady\n";
		break;
	case 155980:
		result = "Chayton Lofgren\n";
		break;
	case 137292:
		result = "Brandon Richards\n";
		break;
	case 137112:
		result = "Adam Burton\n";
		break;
		default:
			result = "";
	}//end switch
	cout << result;
	system("pause");
	return 0;
}//end of main
