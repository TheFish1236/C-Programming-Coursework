// This is a game I created to help my girlfriend memorize the menu at her new job in preparation for her interview.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct MenuItem {
    char item[50];
    char base[50];
    char mix[50];
    char top[100];
    char sauce[50];
};

int ans(char *correctAnswer){
    int attempt = 0;
    char ans[100] = "";

    while (attempt!=3){
        scanf(" %[^\n]", &ans);
        if (strcmp(ans, correctAnswer) == 0){
            printf("Correct!\n");
            return 0;
        } else{
            printf("Wrong!\n");
            attempt+=1;
        }
    }
    printf("%s\n", correctAnswer);
    return 0;
}

int main() {
    srand(time(NULL));
    int run = 0;
    int randInt;

    struct MenuItem menuItems[15] = {
        {"Biscoff Cookie & Cream", "Sweet Cream", "Biscoff Cookie, Cookie Butter", "Biscoff Cookie, Cookie Butter, Cookie Crumble", "Caramel"},
        {"Pina Colada", "Sweet Cream, Coconut Milk", "Pineapple", "Pineapple, Coconut Flake, Cherry", "Condensed Milk"},
        {"Gimme S'mores", "Chocolate", "Graham Cracker", "Graham Cracker, Marshmallow, Hershey Bar", "Chocolate"},
        {"Birthday Cake", "Sweet Cream", "Nilla Wafer, Sprinkle", "Nilla Wafer, Sprinkle", "Caramel"},
        {"Frutti Di Bosco", "Sweet Cream", "Strawberry,  Blueberry", "Strawberry,  Blueberry,  Raspberry", "Strawberry"},
        {"Milk & Cereal", "Sweet Cream", "Cereal", "Froot Loop/Fruity Pebble/Cinnamon Toast Crunch, Air Head, Rainbow Sprinkle", ""},
        {"Mango Sticky Rice", "Sweet Cream, Coconut Milk", "Mango", "Mango, Sticky Rice", "Coconut Milk"},
        {"Tiramisu", "Sweet Cream, Coffee", "Lady Finger", "Lady Finger, Chocolate Sprinkle", "Caramel"},
        {"Strawberry Cheesecake", "Sweet Cream", "Strawberry", "Strawberry, Cheesecake, Rainbow Sprinkle", "Strawberry"},
        {"Choco Dream", "Chocolate", "Chocolate Cookie, Brownie", "Chocolate Cookie, Brownie, Pocky Stick", "Chocolate"},
        {"Cookies & Cream", "Sweet Cream", "Chocolate Cookie", "Chocolate Cookie, Chocolate Sprinkle", "Chocolate"},
        {"Donut", "Sweet Cream", "Donut Bite", "Donut Bite", "Caramel"},
        {"Reese's", "Chocolate", "Reese", "Reese, Chocolate Sprinkle", "Caramel"},
        {"Banana Pudding", "Sweet Cream", "Banana, Nilla Wafer", "Banana Slice, NIlla Wafer", "Caramel"},
        {"Peach & Cream", "Sweet Cream", "Peach", "Peach, White Chocolate Chip, Biscoff Crumble", "Caramel"}
    };
    while (run!=-1){
        randInt = rand() % 15;
        struct MenuItem randItem = menuItems[randInt];
        printf("Random Item\n");
        printf("Item: %s\n", randItem.item);
        printf("Base? ");
        ans(randItem.base);
        printf("Mix-in? ");
        ans(randItem.mix);
        printf("Topping? ");
        ans(randItem.top);
        printf("Sauce? ");
        ans(randItem.sauce);
        printf("Again? (-1 ends): ");
        scanf("%d", &run);
    }
    return 0;

}
