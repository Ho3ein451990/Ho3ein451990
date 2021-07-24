#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void new_game_menu();
void load_game(char game_name);
void random_identity();
void start_game_menu();
void save_game_map(char game_name);
void game_process();
void detective_action();
void jack_action();
void print_table();
void proccesing_tiles();
void put_char();
void replace();
void rotate();
void move_toby();
void suspects();
void move_holmes();
void move_watson();
void joker();
void token();
int h=0,degree;


typedef struct {
    int number;
    char direction[20];
}info;



struct tile{
    info data;
    struct tile* right;
    struct tile* down;
    struct tile* left;
    struct tile* up;
};
typedef struct tile tile;





int main(){
    printf("Welcome to mr jack pocket game\n");
    printf("this is the overall map\n");
    printf("1    2     3\n");
    printf("4    5     6\n");
    printf("7    8     9\n");
    start_game_menu();
    struct tile* tile_one = (struct tile*)malloc(sizeof(tile));
    struct tile* tile_two = (struct tile*)malloc(sizeof(tile));
    struct tile* tile_three = (struct tile*)malloc(sizeof(tile));
    struct tile* tile_four = (struct tile*)malloc(sizeof(tile));
    struct tile* tile_five = (struct tile*)malloc(sizeof(tile));
    struct tile* tile_six = (struct tile*)malloc(sizeof(tile));
    struct tile* tile_seven = (struct tile*)malloc(sizeof(tile));
    struct tile* tile_eight = (struct tile*)malloc(sizeof(tile));
    struct tile* tile_nine = (struct tile*)malloc(sizeof(tile));
    proccesing_tiles(tile_one , tile_two , tile_three , tile_four , tile_five , tile_six , tile_seven , tile_eight , tile_nine);

    print_table();
    int action,tile;
    srand((time(NULL)));
    int turn  = rand() % 2;
    if(turn == 0){
        printf("choose 1 action\n ");
        printf("1.rotate\n2.move toby\n3.rotate\n4.Suspects");
        scanf("%d",&action);
        if(action == 1) {
            printf("enter the number of the tile you want to rotate and the degree");
            scanf("%d",&tile);
            scanf("%d",&degree);
            if(tile == 1){
                rotate(tile_one,degree);
            }
            if(tile == 2){
                rotate(tile_two,degree);
            }
            if(tile == 3){
                rotate(tile_three,degree);
            }
            if (tile == 4){
                rotate(tile_four,degree);
            }
            if(tile == 5){
                rotate(tile_five,degree);
            }
            if(tile == 6){
                rotate(tile_six,degree);
            }
            if(tile == 7){
                rotate(tile_seven,degree);
            }
            if(tile == 8){
                rotate(tile_eight,degree);
            }
            if(tile == 9){
                rotate(tile_nine,degree);
            }
            else printf("invalid input");
        }
        if(action == 2){
//            move_toby();
        }
        if(action == 3){
            printf("enter the number of the tile you want to rotate and the degree");
            scanf("%d",&tile);
            scanf("%d",&degree);
            if(tile == 1){
                rotate(tile_one,degree);
            }
            if(tile == 2){
                rotate(tile_two,degree);
            }
            if(tile == 3){
                rotate(tile_three,degree);
            }
            if (tile == 4){
                rotate(tile_four,degree);
            }
            if(tile == 5){
                rotate(tile_five,degree);
            }
            if(tile == 6){
                rotate(tile_six,degree);
            }
            if(tile == 7){
                rotate(tile_seven,degree);
            }
            if(tile == 8){
                rotate(tile_eight,degree);
            }
            if(tile == 9){
                rotate(tile_nine,degree);
            }
            else printf("invalid input");
        }
        if(action == 4){
//            suspects();
        }
    }
    if(turn == 1){
        printf("choose 1 action \n");
        printf("1.move_holmes\n2.replace\n3.move_watson\n4.joker\n");
        scanf("%d",&action);
        if(action == 1){
//            move_holmes();
        }
        if(action == 2){
            printf("Choose tow characters to swap\n");
            replace();
        }
        if(action == 3){
//            move_watson();
        }
        if(action == 4){
//            joker();
        }
    }



}









void start_game_menu(){
    int num;
    printf("1-New game\n2-Load game\n3-Exit");
    scanf("%d",&num);
    if(num==1){
         new_game_menu();
    }
//    if(num == 2){
//        load_game();
//    }
    if(num == 3){
         start_game_menu();
    }
}

void new_game_menu(){
    printf("please enter the name of this game\n");
    char game_name[20];
    scanf("%s",game_name);
    printf("choose which role you want to play? 1-Mr jack/ 2-Detective \n");
    int role;
    scanf("%d",&role);
    if (role == 1){
        printf("Mr jack identity will be defined(detective must close his/her eyes)\n");
       random_identity();

    }

    if (role == 2){
        printf("Your goal is to catch jack at all costs!\n");

    }



}
void random_identity() {  //Mr jack side
    int i,l=1,r=9,count=1,identity;
    srand(time(0));
         identity = (rand() % (r - l + 1)) + l;

    if(identity == 1 ){
        printf("your disguise is Insp.lestrade");
    }
    if(identity == 2 ){
        printf("your disguise is Jeremy bert");

    }if(identity == 3 ){
        printf("your disguise is John pizer");


    }if(identity == 4 ){
        printf("your disguise is John smith");
        }


    if(identity == 5 ){
        printf("your disguise is Joseph lane");


    }if(identity == 6 ){
        printf("your disguise is Madame");


    }if(identity == 7 ){
        printf("your disguise is Miss stealthy ");


    }if(identity == 8 ){
        printf("your disguise is Sgt goodley");
    }
    if (identity == 9){
        printf("your disguise is Williem gull");
    }
    printf("\n");
}

void save_game_map(char map){
    FILE* fptr = NULL;
    fptr = fopen("map.txt","a");
    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        return;
    }
//    fprintf(fptr,"%c",)



}
//void game_process(){
//    int round=1,token;
//    char watson ='W';
//    char sherlock = 'H';
//    char detectivedog = 'D';
//    while (round < 9){
//        if(round %2 == 0){
//            printf("\n");
//            printf("Choose 1 token to continue ");
//            scanf("%d",&token);
//            tokens();
//        }
//        if(round%2!=0){
//
//        }
//        round++;
//    }
//}







void proccesing_tiles(tile* tile_one , tile* tile_two , tile* tile_three , tile* tile_four , tile* tile_five ,tile* tile_six , tile* tile_seven , tile* tile_eight , tile* tile_nine){
    tile_one->right = tile_two;
    tile_one->down = tile_four;
    tile_one->left = NULL;
    tile_one->up = NULL;
    tile_one->data.number = 1;

    tile_two->left = tile_one;
    tile_two->right = tile_three;
    tile_two->down = tile_five;
    tile_two->data.number = 2;
    tile_two->up = NULL;

    tile_three->down=tile_six;
    tile_three->left=tile_two;
    tile_three->data.number =3;
    tile_three->right=NULL;
    tile_three->up = NULL;

    tile_four->left=NULL;
    tile_four->up=tile_one;
    tile_four->down=tile_seven;
    tile_four->data.number = 4;
    tile_four->right=tile_five;

    tile_five->right=tile_six;
    tile_five->up=tile_two;
    tile_five->left=tile_four;
    tile_five->down=tile_eight;
    tile_five->data.number = 5;

    tile_six->right=NULL;
    tile_six->up=tile_three;
    tile_six->down=tile_nine;
    tile_six->left=tile_five;
    tile_six->data.number = 6;

    tile_seven->up=tile_six;
    tile_seven->right=tile_eight;
    tile_seven->down=NULL;
    tile_seven->left=NULL;
    tile_seven->data.number = 7;

    tile_eight->left=tile_seven;
    tile_eight->up=tile_five;
    tile_eight->right=tile_nine;
    tile_eight->down=NULL;
    tile_eight->data.number = 8;

    tile_nine->left=tile_eight;
    tile_nine->up=tile_four;
    tile_nine->down = NULL;
    tile_nine->right = NULL;
    tile_nine->data.number = 9;
}




void print_table(tile* tile_one , tile* tile_two , tile* tile_three , tile* tile_four , tile* tile_five ,tile* tile_six , tile* tile_seven , tile* tile_eight , tile* tile_nine){
    tile* tmp = tile_one;
    srand(time(NULL));
    int chance;

    put_char();
    h++;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if (tmp->right == tile_two && (chance ==1 || chance == 2 )) {
        printf("---");
    }
    else(printf("              "));
    put_char();
    h++;
    tmp=tile_two;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if(tmp->right == tile_three&& (chance ==1 || chance == 2 )){
        printf("---");
    }
    else(printf("            "));
    put_char();
    h++;
    printf("\n");
    tmp = tile_one;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if(tmp->down==tile_four&& (chance ==1 || chance == 2 )){
        printf("    |");
    }
    else printf("");
    printf("            ");
    tmp = tile_two;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if(tmp->down == tile_five&& (chance ==1 || chance == 2 )){
        printf("|");
    }
    else printf("");
    printf("            ");
    tmp = tile_three;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if(tmp->down==tile_six&& (chance ==1 || chance == 2 )){
        printf("|");
    }
    else printf("");
    printf("             ");
    printf("\n");
    put_char();
    h++;
    tmp = tile_four;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if(tmp->right==tile_five&& (chance ==1 || chance == 2 )){
        printf("---");
    }
    else printf("             ");
    put_char();
    h++;
    tmp = tile_five;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if(tmp->right==tile_six&& (chance ==1 || chance == 2 )){
        printf("---");
    }
    else printf("            ");
    put_char();
    h++;
    printf("\n");
    tmp = tile_four;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if(tmp->down==tile_seven&& (chance ==1 || chance == 2 )){
        printf("     |");
    }
    else printf("");
    printf("              ");
    tmp = tile_five;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if(tmp->down==tile_eight&& (chance ==1 || chance == 2 )){
        printf("|");
    }
    else printf("");
    printf("              ");
    tmp = tile_six;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if(tmp->down==tile_nine&& (chance ==1 || chance == 2 )){
        printf("     |");
    }
    printf("");
    printf("               ");
    printf("\n");
    put_char();
    h++;
    tmp = tile_seven;
    chance = (rand() % (3 - 1 + 1)) + 1;
    if(tmp->right==tile_eight&& (chance ==1 || chance == 2 )){
        printf("---");
    }
    else printf("            ");
    put_char();
    h++;
    tmp = tile_eight;
    chance = (rand() % (3- 1 + 1)) + 1;
    if(tmp->right==tile_nine&& (chance ==1 || chance == 2 )){
        printf("---");
    }
    else printf("             ");
    put_char();
    h++;
    printf("\n");




}



void put_char() {
    int used_users[9] = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
    int j=0;

    srand(time(NULL));
    int users_printed_count = 0;
    while (users_printed_count < 9) {
        int repeated = 0;                                           // 0 equall to No and 1 equall to Yes
        int rand_number = rand() % 9;
        //printf("%d" , rand_number);
        for (int i = 0; i < 9; i++) {
            if (used_users[i] == rand_number) {
                repeated = 1;
                break;
            }
        }
        if (repeated == 1) {
            continue;
        }
        if (users_printed_count == 0) {
            used_users[0] = rand_number;

            users_printed_count++;
            continue;
        }
        for (int i = 0; i < 9; i++) {
            if (used_users[i] == -1) {
                used_users[i] = rand_number;

                break;
            }
        }
        users_printed_count++;
    }
    {


        if (used_users[h] == 0) {
            printf(" Insp.lestrade");

        }
        if (used_users[h] == 1) {
            printf(" Jeremy bert");

        }
        if (used_users[h] == 2) {
            printf(" John pizer");

        }
        if (used_users[h] == 3) {
            printf("John smith");

        }


        if (used_users[h] == 4) {
            printf(" Joseph lane");

        }
        if (used_users[h] == 5) {
            printf(" Madame");

        }
        if (used_users[h] == 6) {
            printf(" Miss stealthy ");


        }
        if (used_users[h] == 7) {
            printf(" Sgt goodley");

        }
        if (used_users[h] == 8) {
            printf(" Williem gull");

        }

    }

}


/*void token(){
    int action;
    srand((time(NULL)));
    int turn  = rand() % 2;
    if(turn == 0){
        printf("choose 1 action\n ");
        printf("1.rotate\n2.move toby\n3.rotate\n4.Suspects");
        scanf("%d",&action);
        if(action == 1) {
            rotate();
        }
        if(action == 2){
//            move_toby();
        }
        if(action == 3){
            rotate();
        }
        if(action == 4){
//            suspects();
        }
    }
    if(turn == 1){
        printf("choose 1 action \n");
        printf("1.move_holmes\n2.replace\n3.move_watson\n4.joker\n");
        scanf("%d",&action);
        if(action == 1){
//            move_holmes();
        }
        if(action == 2){
            printf("Choose tow characters to swap\n");
            replace();
        }
        if(action == 3){
//            move_watson();
        }
        if(action == 4){
//            joker();
        }
    }

}*/
void replace(tile* tile_a,tile* tile_b){
    tile* tile_tmp = (struct tile*)malloc(sizeof(tile));
     tile_tmp->right = tile_a->right ;
    tile_a->right = tile_b->right;
    tile_b->right = tile_tmp->right;

    tile_tmp->left= tile_a->left ;
    tile_a->left = tile_b->left;
    tile_b->left = tile_tmp->left;

    tile_tmp->up = tile_a->up ;
    tile_a->up = tile_b->up;
    tile_b->up = tile_tmp->up;

    tile_tmp->down = tile_a->down ;
    tile_a->down = tile_b->down;
    tile_b->down = tile_tmp->down;

}
void rotate(tile* tile_a,int degree){
    if(degree == 90){
        printf("do you want to rotate 1.clockwise \n 2.counter clock wise");
        int dir;
        scanf("%d",&dir);
        if(dir == 1){
            tile* tile_tmp = (struct tile*)malloc(sizeof(tile));
            tile_tmp->right = tile_a->right;
            tile_a->right = tile_a->down;
            tile_a->down = tile_tmp->right;

            tile_tmp->down = tile_a->down;
            tile_a->down = tile_a->up;
            tile_a->up = tile_tmp->down;

            tile_tmp->down = tile_a->down;
            tile_a->down = tile_a->left;
            tile_a->left = tile_tmp->down;
        }
        if (dir == 2){
            tile* tile_tmp = (struct tile*)malloc(sizeof(tile));
            tile_tmp->right = tile_a->right;
            tile_a->right = tile_a->up;
            tile_a->up = tile_tmp->right;

            tile_tmp->up = tile_a->up;
            tile_a->up = tile_a->down;
            tile_a->down = tile_tmp->up;

            tile_tmp->up = tile_a->up;
            tile_a->up = tile_a->left;
            tile_a->left = tile_tmp->up;
        }


    }
    if(degree == 180){
        tile* tile_tmp = (struct tile*)malloc(sizeof(tile));
        tile_tmp->right = tile_a->right;
        tile_a->right = tile_a->left;
        tile_a->left = tile_tmp->right;

        tile_tmp->up = tile_a->up;
        tile_a->up = tile_a->down;
        tile_a->down = tile_tmp->up;
    }

}
