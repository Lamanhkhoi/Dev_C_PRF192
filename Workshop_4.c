/*
Ten: lam Anh Khoi
MSSV: SE203458
*/
#include <stdio.h>
#include <stdlib.h>

// Constants
#define MAX_DAYS 100

// Struct definition
typedef struct {
    int sales[MAX_DAYS];
    int days[MAX_DAYS];
    int count;
} SalesData;

// Function prototypes
SalesData inputSales();
void displaySales(SalesData data);
SalesData sortAscending(SalesData data);
SalesData sortDescending(SalesData data);
void searchGreaterThan(SalesData data, int target);

int main() {
    SalesData data;
    int choice, target;

    do {
        printf("\n=== Enhanced Sales Data Management Menu ===\n");
        printf("1. Input Sales Data\n");
        printf("2. Display Sales Data\n");
        printf("3. Sort Sales Data in Ascending Order\n");
        printf("4. Sort Sales Data in Descending Order\n");
        printf("5. Search for Sales Greater Than a Target\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                data = inputSales();
                break;
            case 2:
                displaySales(data);
                break;
            case 3:
                data = sortAscending(data);
                printf("Sales data sorted in ascending order:\n");
                displaySales(data);
                break;
            case 4:
                data = sortDescending(data);
                printf("Sales data sorted in descending order:\n");
                displaySales(data);
                break;
            case 5:
                printf("Enter the target sales value: ");
                scanf("%d", &target);
                searchGreaterThan(data, target);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    system("pause");
    return 0;
}

// Function to input sales data
SalesData inputSales() {
    SalesData NewData;
    int n,i;
    do{
    	printf("Enter number of days to input (1-%d):= ", MAX_DAYS);
    	scanf("%d", &n);
    	if (n <= 0 || n > MAX_DAYS){
    		printf("Invaild number. Please try again!!!\n");
		}
	}while (n <= 0 || n > MAX_DAYS);
	
	NewData.count = n;
	printf("--- Enter sale data ---\n");
	for ( i = 0; i < NewData.count; i++){
		printf("Day %d (Sales Value):= ",i+1);
		scanf("%d",&NewData.sales[i]);
		NewData.days[i] = i + 1;
	}
	printf("Data input succesfully!!!\n");
	return NewData;
}

// Function to display sales data
void displaySales(SalesData data) {
    if (data.count == 0){
    	printf("No sales data to display.\n");
    	return;
	}
	
	int i;
	printf("Sales data:\n");
	for ( i = 0; i < data.count; i++){
		printf("Day %d:= %d\n", data.days[i], data.sales[i]);
	}
	printf("-----------------\n");
}

// Function to sort sales data in ascending order
SalesData sortAscending(SalesData data) {
    int i,j;
    for ( i = 0; i < data.count - 1; i++){
    	for ( j = 0; j < data.count - i - 1; j++){
    		if (data.sales[j] > data.sales[j + 1]){
    			int temp_sales = data.sales[j];
    			data.sales[j] = data.sales[j + 1];
    			data.sales[j + 1] = temp_sales;
    			
    			int temp_day = data.days[j];
    			data.days[j] = data.days[j + 1];
    			data.days[j + 1] = temp_day;
			}
		}
	}
	return data;
}

// Function to sort sales data in descending order
SalesData sortDescending(SalesData data) {
    int i,j;
    for ( i = 0; i < data.count - 1; i++){
    	for ( j = 0; j < data.count - i - 1; j++){
    		if (data.sales[j] < data.sales[j + 1]){
    			int temp_sales = data.sales[j];
    			data.sales[j] = data.sales[j + 1];
    			data.sales[j + 1] = temp_sales;
    			
    			int temp_day = data.days[j];
    			data.days[j] = data.days[j + 1];
    			data.days[j + 1] = temp_day;
			}
		}
	}
	return data;
}

// Function to search for values greater than the target
void searchGreaterThan(SalesData data, int target) {
    int Invaild = 0,i;
    printf("--- Sales Greater Than %d ---\n",target);
    for ( i = 0; i < data.count; i++){
    	if ( data.sales[i] > target ){
    		printf("Day %d:= %d\n", data.days[i], data.sales[i]);
    		Invaild = 1;
		}
	}
	
	if ( Invaild = 0 ){
		printf("No sales data found greater than %d", target);
	}
}