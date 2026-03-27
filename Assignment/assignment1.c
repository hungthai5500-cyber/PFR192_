#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct Product
typedef struct {
    int product_id;
    char product_name[50];
    float price;
    int quantity;
} Product;

// Hàm 1: Ghi sản phẩm mới (ghi đè)
void writeProducts() {
    FILE *fp = fopen("products.bin", "wb"); // mở file nhị phân ghi đè
    if (!fp) { printf("ERROR!\n"); return; }

    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);

    Product p;
    for (int i = 0; i < n; i++) {
        printf("\nProduct %d ID: ", i + 1);
        scanf("%d", &p.product_id);
        getchar(); // loại bỏ newline
        printf("Product Name: ");
        fgets(p.product_name, 50, stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0; // loại bỏ newline
        printf("Price: ");
        scanf("%f", &p.price);
        printf("Quantity: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(Product), 1, fp); // ghi struct vào file
    }

    fclose(fp);
    printf("\nProducts saved successfully.\n");
}

// Hàm 2: Thêm sản phẩm mới
void appendProducts() {
    FILE *fp = fopen("products.bin", "ab"); // mở file thêm
    if (!fp) { printf("ERROR!\n"); return; }

    int n;
    printf("Enter number of products to append: ");
    scanf("%d", &n);

    Product p;
    for (int i = 0; i < n; i++) {
        printf("\nProduct %d ID: ", i + 1);
        scanf("%d", &p.product_id);
        getchar();
        printf("Product Name: ");
        fgets(p.product_name, 50, stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0;
        printf("Price: ");
        scanf("%f", &p.price);
        printf("Quantity: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(Product), 1, fp);
    }

    fclose(fp);
    printf("\nProducts appended successfully.\n");
}

// Hàm 3: Hiển thị sản phẩm
void displayProducts() {
    FILE *fp = fopen("products.bin", "rb");
    if (!fp) { printf("ERROR!\n"); return; }

    Product p;
    printf("\n%-10s %-20s %-10s %-10s\n", "ID", "Name", "Price", "Quantity");
    while (fread(&p, sizeof(Product), 1, fp)) {
        printf("%-10d %-20s %-10.2f %-10d\n", p.product_id, p.product_name, p.price, p.quantity);
    }

    fclose(fp);
}

// Hàm 4: Sửa sản phẩm
void modifyProduct() {
    FILE *fp = fopen("products.bin", "rb+");
    if (!fp) { printf("ERROR!\n"); return; }

    int id;
    printf("Enter Product ID to modify: ");
    scanf("%d", &id);

    Product p;
    int found = 0;
    while (fread(&p, sizeof(Product), 1, fp)) {
        if (p.product_id == id) {
            printf("Product found. Enter new details:\n");
            getchar();
            printf("New Name: ");
            fgets(p.product_name, 50, stdin);
            p.product_name[strcspn(p.product_name, "\n")] = 0;
            printf("New Price: ");
            scanf("%f", &p.price);
            printf("New Quantity: ");
            scanf("%d", &p.quantity);

            fseek(fp, -sizeof(Product), SEEK_CUR); // quay lại vị trí struct
            fwrite(&p, sizeof(Product), 1, fp);    // ghi đè
            found = 1;
            printf("\nProduct updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("\nProduct ID not found.\n");
    }

    fclose(fp);
}

// Menu
int main() {
    int choice;
    do {
        printf("\nProduct Management System\n");
        printf("1. Write Products\n");
        printf("2. Append Products\n");
        printf("3. Display Products\n");
        printf("4. Modify Product\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: writeProducts(); break;
            case 2: appendProducts(); break;
            case 3: displayProducts(); break;
            case 4: modifyProduct(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}