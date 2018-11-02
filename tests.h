#pragma once

std::vector<int> reverse_this(const std::vector<int>& nums);
int find_max(const std::vector<int>& nums);
int find_min(const std::vector<int>& nums);
void print_this(const std::vector<int>& nums);
void print_backwards(const std::vector<int>& nums);


bool test_reverse(const std::vector<int>& input, const std::vector<int>& check){
	return input == check;
}

bool test_max(const int& input, const int& check) {
	return input == check;
}

bool test_min(const int& input, const int& min) {
	return input == min;
}


void execute_tests() {
	// TEST REVERSE

	std::vector<int>
		input1{ 1,2,3,4,5 },
		input2{ 10,30,25,-10,3 },
		input3{},
		input4{ 0 };

	print_this(input1);
	print_backwards(input1);
	print_this(input2);
	print_backwards(input2);
	print_this(input3);
	print_backwards(input3);
	print_this(input4);
	print_backwards(input4);

	if (test_reverse(reverse_this(input1), { 5,4,3,2,1 })) {
		std::cout << "REVERSE WORKS FOR INPUT1\n\n";
	}
	else {
		std::cout << "REVERSE FAILS FOR INPUT2\n\n";
	}

	if (test_reverse(reverse_this(input2), { 3,-10,25,30,10 })) {
		std::cout << "REVERSE WORKS FOR INPUT2\n\n";
	}
	else {
		std::cout << "REVERSE FAILS FOR INPUT2\n\n";
	}

	if (test_reverse(reverse_this(input3), {})) {
		std::cout << "REVERSE WORKS FOR INPUT3\n\n";
	}
	else {
		std::cout << "REVERSE FAILS FOR INPUT3\n\n";
	}

	if (test_reverse(reverse_this(input4), { 0 })) {
		std::cout << "REVERSE WORKS FOR INPUT4\n\n";
	}
	else {
		std::cout << "REVERSE WORKS FOR INPUT5\n\n";
	}

	// TEST MAX
	if (test_max(find_max(input1), 5)) {
		std::cout << "FIND_MAX WORKS FOR INPUT1\n\n";
	}
	else {
		std::cout << "FIND_MAX FAILS FOR INPUT1\n\n";
	}

	if (test_max(find_max(input2), 30)) {
		std::cout << "FIND_MAX WORKS FOR INPUT2\n\n";
	}
	else {
		std::cout << "FIND_MAX FAILS FOR INPUT2\n\n";
	}

	if (test_max(find_max(input3), -1)) {
		std::cout << "FIND_MAX WORKS FOR INPUT3\n\n";
	}
	else {
		std::cout << "FIND_MAX FAILS FOR INPUT3\n\n";
	}

	if (test_max(find_max(input4), 0)) {
		std::cout << "FIND_MAX WORKS FOR INPUT4\n\n";
	}
	else {
		std::cout << "FIND_MAX FAILS FOR INPUT4\n\n";
	}

	// TEST MIN
	if (test_min(find_min(input1), 1)) {
		std::cout << "FIND_MIN WORKS FOR INPUT1\n\n";
	}
	else {
		std::cout << "FIND_MIN FAILS FOR INPUT1\n\n";
	}

	if (test_min(find_min(input2), -10)) {
		std::cout << "FIND_MIN WORKS FOR INPUT2\n\n";
	}
	else {
		std::cout << "FIND_MIN FAILS FOR INPUT2\n\n";
	}

	if (test_min(find_min(input3), -1)) {
		std::cout << "FIND_MIN WORKS FOR INPUT3\n\n";
	}
	else {
		std::cout << "FIND_MIN FAILS FOR INPUT3\n\n";
	}

	if (test_min(find_min(input4), 0)) {
		std::cout << "FIND_MIN WORKS FOR INPUT4\n\n";
	}
	else {
		std::cout << "FIND_MIN FAILS FOR INPUT4\n\n";
	}
}
