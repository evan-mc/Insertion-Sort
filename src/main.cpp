#include <iostream>
#include <vector>

template<typename Iter>
void insertionSort(Iter start, Iter end);

template<typename Iter>
void resort(Iter start, Iter end);

int main()
{
	std::vector<double> nums = { 4.5, 1.2, 5.7, 6.3, 2.1, 3.5, 2.2, 5.5 };
	insertionSort(std::begin(nums), std::end(nums));
	for (const auto elem : nums)
		std::cout << elem << " ";
	system("pause");
	return 0;
}

template<typename Iter>
void insertionSort(Iter start, Iter end)
{
	Iter begin = start;
	++start;

	while(start != end)
	{
		if (*start < *(start-1))
		{
			resort(start, begin);
		}

		++start;
	}
}

template<typename Iter>
void resort(Iter start, Iter end)
{
	auto temp = *start;

	while (start != end && temp < *(start-1))
	{
		*start = *(start - 1);
		--start;
	}

	*start = temp;
}
