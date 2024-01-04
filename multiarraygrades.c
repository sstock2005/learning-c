	// https://www.learn-c.org/en/Multidimensional_Arrays
	
	#include <stdio.h>

	int main() {

        int grades[2][5]; // 5 students with 2 subject marks each
		float average; // create average
		int i; // create int i
		int j; // create int j

        // subject 1
		grades[0][0] = 80; // student 1
		grades[0][1] = 70; // student 2
		grades[0][2] = 65; // student 3
		grades[0][3] = 89; // student 4
		grades[0][4] = 90; // student 5

        // subject 2
		grades[1][0] = 85; // student 1
		grades[1][1] = 80; // student 2
		grades[1][2] = 80; // student 3
		grades[1][3] = 82; // student 4
		grades[1][4] = 87; // student 5

		// For each subject
		for (i = 0; i < 2; i++) // there are two subjects
		{
			average = 0; // reset subject average
			// For each student
			for (j = 0; j < 5; j++) // There are 5 students
			{
				average += grades[i][j]; // Add grades to average
			}

			average = average / 5; // Calculate median of average

			printf("The average marks obtained in subject %d is: %.2f\n", i, average); // print results
		}

		return 0;
	}