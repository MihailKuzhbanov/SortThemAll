#include <iostream>
#include <ctime>

using namespace std;

int qtt, max;

void GetArrayParameters(int& quantity, int& maxValue)
{
	while (true)
	{
		cout << "Enter array size: " << endl;
		cin >> quantity;
		{
			if (!cin.fail()) break;
			else
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "You have entered wrong array size" << endl;
			}
		}
	}
	while (true)
	{
		cout << "Enter max value: " << endl;
		cin >> maxValue;
		{
			if (!cin.fail()) break;
			else
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "You have entered wrong max value" << endl;
			}
		}
	}
}

void FillArray(int* nums)
{
	srand(time(0));
	if (nums == nullptr) cout << "Error: memory could not be allocated";
	else
	{
		for (int i = 0; i < qtt; i++)
		{
			nums[i] = rand() % (max+1);
		}
	}
}

void ShowArray(int* nums)
{
	for (int i = 0; i < qtt; i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
}

void BubbleSortArray(int* nums)
{
	int temp;
	for (int i = 0; i < qtt - 1; i++)
	{

		for (int i = 0; i < qtt - 1; i++)
		{
			if (nums[i] > nums[i + 1])
			{
				temp = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = temp;
			}
		}
	}
}

void InsertionSortArray(int* nums)
{

}

int main()
{
	
	int* num;
	GetArrayParameters(qtt, max);
	num = new int[qtt];
	FillArray(num);
	ShowArray(num);
	BubbleSortArray(num);
	//InsertionSortArray(num);
	ShowArray(num);
	system("pause");
}