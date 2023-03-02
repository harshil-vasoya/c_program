#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int give_answer(int QuesID)
{
    int QuesNumber;
    QuesNumber = ((QuesID / 100) - 1) * 10 + QuesID % 100 - 1;
    int Answer_matrix[120] = {1, 4, 2, 3, 3, 1, 4, 2, 3, 3,  //L1
                              1, 1, 1, 2, 4, 1, 1, 1, 2, 4,  //L2
                              3, 4, 2, 1, 2, 3, 4, 2, 1, 2,  //L3
                              3, 2, 4, 3, 1, 3, 2, 4, 3, 1,  //L4
                              4, 2, 3, 2, 2, 4, 2, 3, 2, 2,  //L5
                              2, 4, 1, 2, 1, 2, 4, 1, 2, 1,  //L6
                              1, 4, 4, 4, 1, 1, 4, 4, 4, 1,  //L7
                              4, 1, 2, 3, 1, 4, 1, 2, 3, 1,  //L8
                              3, 1, 2, 4, 4, 3, 1, 2, 4, 4,  //L9
                              4, 2, 3, 2, 1, 4, 2, 3, 2, 1,  //L10
                              2, 4, 1, 3, 1, 2, 4, 1, 3, 1,  //L11
                              1, 3, 3, 1, 4, 1, 3, 3, 1, 4}; //L12

    return Answer_matrix[QuesNumber];
}

void incorrect_answer(int QuesID)
{
    system("color 40");
    printf("Incorrect Answer\n");
    printf("Correct answer is Option %d\n", give_answer(QuesID));
}

void correct_answer(int QuesID)
{
    system("color 20");
    printf("Correct Answer\n");
}

int check_answer(int QuesID, int Option)
{
    int QuesNumber;
    QuesNumber = ((QuesID / 100) - 1) * 10 + QuesID % 100 - 1;
    int Answer_matrix[120] = {1, 4, 2, 3, 3, 1, 4, 2, 3, 3,  //L1
                              1, 1, 1, 2, 4, 1, 1, 1, 2, 4,  //L2
                              3, 4, 2, 1, 2, 3, 4, 2, 1, 2,  //L3
                              3, 2, 4, 3, 1, 3, 2, 4, 3, 1,  //L4
                              4, 2, 3, 2, 2, 4, 2, 3, 2, 2,  //L5
                              2, 4, 1, 2, 1, 2, 4, 1, 2, 1,  //L6
                              1, 4, 4, 4, 1, 1, 4, 4, 4, 1,  //L7
                              4, 1, 2, 3, 1, 4, 1, 2, 3, 1,  //L8
                              3, 1, 2, 4, 4, 3, 1, 2, 4, 4,  //L9
                              4, 2, 3, 2, 1, 4, 2, 3, 2, 1,  //L10
                              2, 4, 1, 3, 1, 2, 4, 1, 3, 1,  //L11
                              1, 3, 3, 1, 4, 1, 3, 3, 1, 4}; //L12

    if (Answer_matrix[QuesNumber] == Option)
    {
        return 1;
    }

    return 0;
}

int Question_L1() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("Which of these states is also known for 'Aligarh ke taale', 'Bareilly ka surma' and 'Firozabad ki chudiyan'?\n"); // Change
        printf("1.Uttar Pradesh     \t\t2.Madhya Pardesh \n");                                                                    // Change
        printf("3.Himachal Pradesh  \t\t4.Bihar          \n");                                                                    // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                printf("Hii , How are you \n");
                size_t characters;
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Uttar Predesh:   \t\t2.       \n"); // Change
                printf("3.Himachal Pradesh \t\t4.       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(101, Ans); // Change
        if (isit)
        {
            correct_answer(101); // Change
            return 1;
        }
        else
        {
            incorrect_answer(101); // Change
            return 0;
        }
        break;

    case 2:
        printf("In 2008, Rajasthan Royals became the first winner of which annual sporting event?\n"); // Change
        printf("1.PKL  \t\t2.ISL  \n");                                                                // Change
        printf("3.PHL  \t\t4.IPL  \n");                                                                // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.       \t\t2.     \n"); // Change
                printf("3.PHL    \t\t4.IPL  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(102, Ans); // Change
        if (isit)
        {
            correct_answer(102); // Change
            return 1;
        }
        else
        {
            incorrect_answer(102); // Change
            return 0;
        }
        break;

    case 3:
        printf("What are the terms 3G, 4G and 5G related to?\n");      // Change
        printf("1.Population Generations \t\t2.Phone Networks \n");    // Change
        printf("3.Digital Camera         \t\t4.Grading in Schools\n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.               \t\t2.Phone Networks\n"); // Change
                printf("3.Digital camera \t\t4.              \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(103, Ans); // Change
        if (isit)
        {
            correct_answer(103); // Change
            return 1;
        }
        else
        {
            incorrect_answer(103); // Change
            return 0;
        }
        break;

    case 4:
        printf("Cold brew, Latte, Espresso are all examples of which beverage?\n");
        printf("1.Tea       \t\t2.Fruit Juice\n"); // Change
        printf("3.Coffee    \t\t4.Lassi      \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Tea      \t\t2.        \n"); // Change
                printf("3.Coffee   \t\t4.        \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(104, Ans); // Change
        if (isit)
        {
            correct_answer(104); // Change
            return 1;
        }
        else
        {
            incorrect_answer(104); // Change
            return 0;
        }
        break;

    case 5:
        printf("Pongal is a popular festival of which state?\n"); // Change
        printf("1.Karnataka   \t\t2.Kerala     \n");              // Change
        printf("3.Tamil Nadu  \t\t4.Maharashtra\n");              // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.            \t\t2.Kerala     \n"); // Change
                printf("3.Tamil Nadu  \t\t4.           \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(105, Ans); // Change
        if (isit)
        {
            correct_answer(105); // Change
            return 1;
        }
        else
        {
            incorrect_answer(105); // Change
            return 0;
        }
        break;

    case 6:
        printf("Which of these states is also known for 'Aligarh ke taale', 'Bareilly ka surma' and 'Firozabad ki chudiyan'?\n"); // Change
        printf("1.Uttar Pradesh    \t\t2.Gujarat         \n");                                                                    // Change
        printf("3.Himachal Pradesh \t\t4.Bihar           \n");                                                                    // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Uttar Predesh:   \t\t2.       \n"); // Change
                printf("3.Himachal Pradesh \t\t4.       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(106, Ans); // Change
        if (isit)
        {
            correct_answer(106); // Change
            return 1;
        }
        else
        {
            incorrect_answer(106); // Change
            return 0;
        }
        break;

    case 7:
        printf("In 2008, Rajasthan Royals became the first winner of which annual sporting event?\n"); // Change
        printf("1.PKL  \t\t2.ISL  \n");                                                                // Change
        printf("3.PHL  \t\t4.IPL  \n");                                                                // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.PKL    \t\t2.     \n"); // Change
                printf("3.       \t\t4.IPL  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(107, Ans); // Change
        if (isit)
        {
            correct_answer(107); // Change
            return 1;
        }
        else
        {
            incorrect_answer(107); // Change
            return 0;
        }
        break;

    case 8:
        printf("What are the terms 3G, 4G and 5G related to?\n");      // Change
        printf("1.Population Generations \t\t2.Phone Networks \n");    // Change
        printf("3.Digital Camera         \t\t4.Grading in Schools\n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.               \t\t2.Phone Networks\n"); // Change
                printf("3.Digital camera \t\t4.              \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(108, Ans); // Change
        if (isit)
        {
            correct_answer(108); // Change
            return 1;
        }
        else
        {
            incorrect_answer(108); // Change
            return 0;
        }
        break;

    case 9:
        printf("Cold brew, Latte, Espresso are all examples of which beverage?\n");
        printf("1.Tae       \t\t2.Fruit Juice\n"); // Change
        printf("3.Coffee    \t\t4.Lassi      \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Tea      \t\t2.        \n"); // Change
                printf("3.Coffee   \t\t4.        \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(109, Ans); // Change
        if (isit)
        {
            correct_answer(109); // Change
            return 1;
        }
        else
        {
            incorrect_answer(109); // Change
            return 0;
        }
        break;

    case 10:
        printf("Pongal is a popular festival of which state?\n"); // Change
        printf("1.Gujarat     \t\t2.Kerala     \n");              // Change
        printf("3.Tamil Nadu  \t\t4.Maharashtra\n");              // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.            \t\t2.Kerala     \n"); // Change
                printf("3.Tamil Nadu  \t\t4.           \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(110, Ans); // Change
        if (isit)
        {
            correct_answer(110); // Change
            return 1;
        }
        else
        {
            incorrect_answer(110); // Change
            return 0;
        }
        break;
    }

    return 0;
}

int Question_L2() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("In which state of India is the town of Jamtara located?\n"); // Change
        printf("1.Jharkhand          \t\t2.Odisha     \n");                  // Change
        printf("3.Bihar              \t\t4.West Bemgal\n");                  // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Jharkhand        \t\t2.       \n"); // Change
                printf("3.Bihar            \t\t4.       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(201, Ans); // Change
        if (isit)
        {
            correct_answer(201); // Change
            return 1;
        }
        else
        {
            incorrect_answer(201); // Change
            return 0;
        }
        break;

    case 2:
        printf("In Sept 2020, which iconic motorcycle brand announced that it is shutting down its manufacturing facilities in India?\n"); // Change
        printf("1.Harley Davidson  \t\t2.Triumph  \n");                                                                                    // Change
        printf("3.Indian           \t\t4.Arctic cat  \n");                                                                                 // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Harley Davidson       \t\t2.            \n"); // Change
                printf("3.                      \t\t4.Arctic Cat  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(202, Ans); // Change
        if (isit)
        {
            correct_answer(202); // Change
            return 1;
        }
        else
        {
            incorrect_answer(202); // Change
            return 0;
        }
        break;

    case 3:
        printf("World health day is observed on\n"); // Change
        printf("1.Apr 7        \t\t2.March 8 \n");   // Change
        printf("3.March 15     \t\t4.Apr 28\n");     // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Apr 7               \t\t2.              \n"); // Change
                printf("3.March 15            \t\t4.              \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(203, Ans); // Change
        if (isit)
        {
            correct_answer(203); // Change
            return 1;
        }
        else
        {
            incorrect_answer(203); // Change
            return 0;
        }
        break;

    case 4:
        printf("Which of the following game is played in the court surrounded by four walls?\n");
        printf("1.Lacrose       \t\t2.Squash  \n"); // Change
        printf("3.Boles         \t\t4.Snooker \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.          \t\t2.Squash       \n");  // Change
                printf("3.          \t\t4.Snooker       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(204, Ans); // Change
        if (isit)
        {
            correct_answer(204); // Change
            return 1;
        }
        else
        {
            incorrect_answer(204); // Change
            return 0;
        }
        break;

    case 5:
        printf("Daga and Teja were henchmen of which film character?\n"); // Change
        printf("1.Shakal       \t\t2.Gabbar Singh     \n");               // Change
        printf("3.Kanch Cheene \t\t4.Mogambo          \n");               // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Shakal       \t\t2.                  \n"); // Change
                printf("3.             \t\t4.Mogambo           \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(205, Ans); // Change
        if (isit)
        {
            correct_answer(205); // Change
            return 1;
        }
        else
        {
            incorrect_answer(205); // Change
            return 0;
        }
        break;

    case 6:
        printf("In which state of India is the town of Jamtara located?\n"); // Change
        printf("1.Jharkhand          \t\t2.Odisha     \n");                  // Change
        printf("3.Bihar              \t\t4.West Bemgal\n");                  // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Jharkhand        \t\t2.       \n"); // Change
                printf("3.Bihar            \t\t4.       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(206, Ans); // Change
        if (isit)
        {
            correct_answer(206); // Change
            return 1;
        }
        else
        {
            incorrect_answer(206); // Change
            return 0;
        }
        break;

    case 7:
        printf("In Sept 2020, which iconic motorcycle brand announced that it is shutting down its manufacturing facilities in India?\n"); // Change
        printf("1.Harley Davidson  \t\t2.Triumph  \n");                                                                                    // Change
        printf("3.Indian           \t\t4.Arctic cat  \n");                                                                                 // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Harley Davidson       \t\t2.            \n"); // Change
                printf("3.                      \t\t4.Arctic Cat  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(207, Ans); // Change
        if (isit)
        {
            correct_answer(207); // Change
            return 1;
        }
        else
        {
            incorrect_answer(207); // Change
            return 0;
        }
        break;

    case 8:
        printf("World health day is observed on\n"); // Change
        printf("1.Apr 7        \t\t2.March 8 \n");   // Change
        printf("3.March 15     \t\t4.Apr 28\n");     // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Apr 7               \t\t2.              \n"); // Change
                printf("3.March 15            \t\t4.              \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(208, Ans); // Change
        if (isit)
        {
            correct_answer(208); // Change
            return 1;
        }
        else
        {
            incorrect_answer(208); // Change
            return 0;
        }
        break;

    case 9:
        printf("Which of the following game is played in the court surrounded by four walls?\n");
        printf("1.Lacrose       \t\t2.Squash  \n"); // Change
        printf("3.Boles         \t\t4.Snooker \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.          \t\t2.Squash       \n");  // Change
                printf("3.          \t\t4.Snooker       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(209, Ans); // Change
        if (isit)
        {
            correct_answer(209); // Change
            return 1;
        }
        else
        {
            incorrect_answer(209); // Change
            return 0;
        }
        break;

    case 10:
        printf("Daga and Teja were henchmen of which film character?\n"); // Change
        printf("1.Shakal       \t\t2.Gabbar Singh     \n");               // Change
        printf("3.Kanch Cheene \t\t4.Mogambo          \n");               // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Shakal       \t\t2.                  \n"); // Change
                printf("3.             \t\t4.Mogambo           \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(210, Ans); // Change
        if (isit)
        {
            correct_answer(210); // Change
            return 1;
        }
        else
        {
            incorrect_answer(210); // Change
            return 0;
        }
        break;
    }

    return 0;
}

int Question_L3() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("Which of these does not feature in the five pillars of Islam?\n"); // Change
        printf("1.Salat                \t\t2.Zakat     \n");                       // Change
        printf("3.Hadith               \t\t4.Hajj      \n");                       // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Salat        \t\t2.       \n"); // Change
                printf("3.Hadith       \t\t4.       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(301, Ans); // Change
        if (isit)
        {
            correct_answer(301); // Change
            return 1;
        }
        else
        {
            incorrect_answer(301); // Change
            return 0;
        }
        break;

    case 2:
        printf("Which was the colour of the saree worn by Madhuri Dixit in the song 'Didi tera dewar deewana' ,which triggered a fashion trend in the country?\n"); // Change
        printf("1.Green            \t\t2.Red         \n");                                                                                                          // Change
        printf("3.Yellow           \t\t4.Purple      \n");                                                                                                          // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                      \t\t2.Red            \n"); // Change
                printf("3.                      \t\t4.Purple         \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(302, Ans); // Change
        if (isit)
        {
            correct_answer(302); // Change
            return 1;
        }
        else
        {
            incorrect_answer(302); // Change
            return 0;
        }
        break;

    case 3:
        printf("Who is the author of the book ‘ Amrit Ki Ore’?\n"); // Change
        printf("1.Mukesh Kumar        \t\t2.Narendra Mohan \n");    // Change
        printf("3.Upendra Nath        \t\t4.Nirad Choudhary\n");    // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                     \t\t2.Narendra Mohan \n"); // Change
                printf("3.Upendra Nath         \t\t4.              \n");  // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(303, Ans); // Change
        if (isit)
        {
            correct_answer(303); // Change
            return 1;
        }
        else
        {
            incorrect_answer(303); // Change
            return 0;
        }
        break;

    case 4:
        printf(" Who in the following is one of the owner of IPL team Kings XI Punjab?\n");
        printf("1.Nes Wadiya           \t\t2.Sid Malya   \n");  // Change
        printf("3.Rohan Murti          \t\t4.Tanya Dubash \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Nes Wadiya          \t\t2.Sid Malya       \n"); // Change
                printf("3.                    \t\t4.                \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(304, Ans); // Change
        if (isit)
        {
            correct_answer(304); // Change
            return 1;
        }
        else
        {
            incorrect_answer(304); // Change
            return 0;
        }
        break;

    case 5:
        printf("A diversified equality fund invests in which of the following?\n"); // Change
        printf("1.One sector       \t\t2.Stocks across various sectors     \n");    // Change
        printf("3.One company      \t\t4.Only gold and silver              \n");    // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                \t\t2.Stocks across various sectors     \n"); // Change
                printf("3.One company     \t\t4.                                  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(305, Ans); // Change
        if (isit)
        {
            correct_answer(305); // Change
            return 1;
        }
        else
        {
            incorrect_answer(305); // Change
            return 0;
        }
        break;

    case 6:
        printf("Which of these does not feature in the five pillars of Islam?\n"); // Change
        printf("1.Salat                \t\t2.Zakat     \n");                       // Change
        printf("3.Hadith               \t\t4.Hajj      \n");                       // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Salat        \t\t2.       \n"); // Change
                printf("3.Hadith       \t\t4.       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(306, Ans); // Change
        if (isit)
        {
            correct_answer(306); // Change
            return 1;
        }
        else
        {
            incorrect_answer(306); // Change
            return 0;
        }
        break;

    case 7:
        printf("Which was the colour of the saree worn by Madhuri Dixit in the song 'Didi tera dewar deewana,' which triggered a fashion trend in the country?\n"); // Change
        printf("1.Green            \t\t2.Red         \n");                                                                                                          // Change
        printf("3.Yellow           \t\t4.Purple      \n");                                                                                                          // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                      \t\t2.Red            \n"); // Change
                printf("3.                      \t\t4.Purple         \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(307, Ans); // Change
        if (isit)
        {
            correct_answer(307); // Change
            return 1;
        }
        else
        {
            incorrect_answer(307); // Change
            return 0;
        }
        break;

    case 8:
        printf("Who is the author of the book ‘ Amrit Ki Ore’?\n"); // Change
        printf("1.Mukesh Kumar        \t\t2.Narendra Mohan \n");    // Change
        printf("3.Upendra Nath        \t\t4.Nirad Choudhary\n");    // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                     \t\t2.Narendra Mohan \n"); // Change
                printf("3.Upendra Nath         \t\t4.              \n");  // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(308, Ans); // Change
        if (isit)
        {
            correct_answer(308); // Change
            return 1;
        }
        else
        {
            incorrect_answer(308); // Change
            return 0;
        }
        break;

    case 9:
        printf(" Who in the following is one of the owner of IPL team KIngs XI Punjab?\n");
        printf("1.Nes Wadiya           \t\t2.Sid Malya   \n");  // Change
        printf("3.Rohan Murti          \t\t4.Tanya Dubash \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Nes Wadiya          \t\t2.Sid Malya       \n"); // Change
                printf("3.                    \t\t4.                \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(309, Ans); // Change
        if (isit)
        {
            correct_answer(309); // Change
            return 1;
        }
        else
        {
            incorrect_answer(309); // Change
            return 0;
        }
        break;

    case 10:
        printf("A diversified equality fund invests in which of the following?\n"); // Change
        printf("1.One sector       \t\t2.Stocks across various sectors     \n");    // Change
        printf("3.One company      \t\t4.Only gold and silver              \n");    // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                \t\t2.Stocks across various sectors     \n"); // Change
                printf("3.One company     \t\t4.                                  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(310, Ans); // Change
        if (isit)
        {
            correct_answer(310); // Change
            return 1;
        }
        else
        {
            incorrect_answer(310); // Change
            return 0;
        }
        break;
    }

    return 0;
}

int Question_L4() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("Which of the following will be heavier than 1450 g of iron?\n");    // Change
        printf("1. 1 kg of rice                   \t\t2. 1.4 kg of paper     \n");  // Change
        printf("3. 1.7 kg of cotton               \t\t4. 1.3 kg of husk.      \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. 1Kg of rice           \t\t2.       \n"); // Change
                printf("3. 1.7Kg of cotton       \t\t4.       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(401, Ans); // Change
        if (isit)
        {
            correct_answer(401); // Change
            return 1;
        }
        else
        {
            incorrect_answer(401); // Change
            return 0;
        }
        break;

    case 2:
        printf("Rajat Sharma, Sonia Singh, Rahul Kanwal and Sumit Awasthi are all associated with which profession?\n"); // Change
        printf("1.Astrology          \t\t2.Journalism\n");                                                               // Change
        printf("3.Medicine           \t\t4.Law       \n");                                                               // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                      \t\t2.Journalism            \n"); // Change
                printf("3.                      \t\t4.Law                   \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(402, Ans); // Change
        if (isit)
        {
            correct_answer(402); // Change
            return 1;
        }
        else
        {
            incorrect_answer(402); // Change
            return 0;
        }
        break;

    case 3:
        printf("Bahubali festival is related to\n");    // Change
        printf("1.islam           \t\t2.hinduism  \n"); // Change
        printf("3.buddhism        \t\t4.jainism   \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                     \t\t2.                  \n");    // Change
                printf("3.buddhism             \t\t4.jainism              \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(403, Ans); // Change
        if (isit)
        {
            correct_answer(403); // Change
            return 1;
        }
        else
        {
            incorrect_answer(403); // Change
            return 0;
        }
        break;

    case 4:
        printf("The language of Lakshadweep, a union territory of India is\n");
        printf("1.Tamil                \t\t2.Hindi        \n"); // Change
        printf("3.Malayalam            \t\t4.Telugu       \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                             \t\t2.                \n"); // Change
                printf("3.Malayalam                    \t\t4.Telugu          \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(404, Ans); // Change
        if (isit)
        {
            correct_answer(404); // Change
            return 1;
        }
        else
        {
            incorrect_answer(404); // Change
            return 0;
        }
        break;

    case 5:
        printf("The international literacy day is observed on\n"); // Change
        printf("1.Sep 8       \t\t2.Nov 28              \n");      // Change
        printf("3.May 2       \t\t4.Sep 22              \n");      // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Sep 8                       \t\t2.                                  \n"); // Change
                printf("3.May 2                       \t\t4.                                  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(405, Ans); // Change
        if (isit)
        {
            correct_answer(405); // Change
            return 1;
        }
        else
        {
            incorrect_answer(405); // Change
            return 0;
        }
        break;

    case 6:
        printf("Which of the following will be heavier than 1450 g of iron?\n");    // Change
        printf("1. 1 kg of rice                   \t\t2. 1.4 kg of paper     \n");  // Change
        printf("3. 1.7 kg of cotton               \t\t4. 1.3 kg of husk.      \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. 1Kg of rice           \t\t2.       \n"); // Change
                printf("3. 1.7Kg of cotton       \t\t4.       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(406, Ans); // Change
        if (isit)
        {
            correct_answer(406); // Change
            return 1;
        }
        else
        {
            incorrect_answer(406); // Change
            return 0;
        }
        break;

    case 7:
        printf("Rajat Sharma, Sonia Singh, Rahul Kanwal and Sumit Awasthi are all associated with which profession?\n"); // Change
        printf("1.Astrology          \t\t2.Journalism\n");                                                               // Change
        printf("3.Medicine           \t\t4.Law       \n");                                                               // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                      \t\t2.Journalism            \n"); // Change
                printf("3.                      \t\t4.Law                   \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(407, Ans); // Change
        if (isit)
        {
            correct_answer(407); // Change
            return 1;
        }
        else
        {
            incorrect_answer(407); // Change
            return 0;
        }
        break;

    case 8:
        printf("Bahubali festival is related to\n");    // Change
        printf("1.islam           \t\t2.hinduism  \n"); // Change
        printf("3.buddhism        \t\t4.jainism   \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                     \t\t2.                  \n");    // Change
                printf("3.buddhism             \t\t4.jainism              \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(408, Ans); // Change
        if (isit)
        {
            correct_answer(408); // Change
            return 1;
        }
        else
        {
            incorrect_answer(408); // Change
            return 0;
        }
        break;

    case 9:
        printf("The language of Lakshadweep, a union territory of India is\n");
        printf("1.Tamil                \t\t2.Hindi        \n"); // Change
        printf("3.Malayalam            \t\t4.Telugu       \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                             \t\t2.                \n"); // Change
                printf("3.Malayalam                    \t\t4.Telugu          \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(409, Ans); // Change
        if (isit)
        {
            correct_answer(409); // Change
            return 1;
        }
        else
        {
            incorrect_answer(409); // Change
            return 0;
        }
        break;

    case 10:
        printf("The international literacy day is observed on\n"); // Change
        printf("1.Sep 8       \t\t2.Nov 28              \n");      // Change
        printf("3.May 5       \t\t4.Sep 22              \n");      // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Sep 8                       \t\t2.                                  \n"); // Change
                printf("3.May 2                       \t\t4.                                  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(410, Ans); // Change
        if (isit)
        {
            correct_answer(410); // Change
            return 1;
        }
        else
        {
            incorrect_answer(410); // Change
            return 0;
        }
        break;
    }
    return 0;
}

int Question_L5() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("Which of these songs about rain does not have any rain sequence?\n");      // Change
        printf("1.Tip tip barsa paani (Mohra)     \t\t2.Rimjhim ghire saawan (Manzil)\n"); // Change
        printf("3.Barso re (Guru)                 \t\t4.Ghanan ghanan (Lagaan)       \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                       \t\t2.Rimjhim ghire saawan (Manzil)       \n"); // Change
                printf("3.                       \t\t4.Ghanan ghanan (Lagaan)              \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(501, Ans); // Change
        if (isit)
        {
            correct_answer(501); // Change
            return 1;
        }
        else
        {
            incorrect_answer(501); // Change
            return 0;
        }
        break;

    case 2:
        printf("Which of these is a term for a score used in racquet sports?\n"); // Change
        printf("1.Hate     \t\t2.Love  \n");                                      // Change
        printf("3.Down     \t\t4.Up    \n");                                      // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Hate        \t\t2.Love     \n"); // Change
                printf("3.            \t\t4.         \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(502, Ans); // Change
        if (isit)
        {
            correct_answer(502); // Change
            return 1;
        }
        else
        {
            incorrect_answer(502); // Change
            return 0;
        }
        break;

    case 3:
        printf("Which of these diseases is also known as ‘dimaagi bukhar’?\n"); // Change
        printf("1.Tetanus                       \t\t2.Rabies \n");              // Change
        printf("3.Japanese Encephalities        \t\t4.dengue\n");               // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Tetanus                  \t\t2.              \n"); // Change
                printf("3.Japanese Encephalities   \t\t4.              \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(503, Ans); // Change
        if (isit)
        {
            correct_answer(503); // Change
            return 1;
        }
        else
        {
            incorrect_answer(503); // Change
            return 0;
        }
        break;

    case 4:
        printf(" Ambemohar and ajara ghansal are varieties of what?\n");
        printf("1.Wheat       \t\t2.Rice       \n"); // Change
        printf("3.Bajara      \t\t4.Jawar      \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Wheat       \t\t2.Rice        \n"); // Change
                printf("3.            \t\t4.        \n");     // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(504, Ans); // Change
        if (isit)
        {
            correct_answer(504); // Change
            return 1;
        }
        else
        {
            incorrect_answer(504); // Change
            return 0;
        }
        break;

    case 5:
        printf("Which of these places gets its name form an arabic word meaning desert?\n"); // Change
        printf("1.Gobi        \t\t2.Sahara     \n");                                         // Change
        printf("3.Mojave      \t\t4.Thar       \n");                                         // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.            \t\t2.Sahara     \n"); // Change
                printf("3.            \t\t4.Thar       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(505, Ans); // Change
        if (isit)
        {
            correct_answer(505); // Change
            return 1;
        }
        else
        {
            incorrect_answer(505); // Change
            return 0;
        }
        break;

    case 6:
        printf("Which of these songs about rain does not have any rain sequence?\n");      // Change
        printf("1.Tip tip barsa paani (Mohra)     \t\t2.Rimjhim ghire saawan (Manzil)\n"); // Change
        printf("3.Barso re (Guru)                 \t\t4.Ghanan ghanan (Lagaan)       \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.                       \t\t2.Rimjhim ghire saawan (Manzil)       \n"); // Change
                printf("3.                       \t\t4.Ghanan ghanan (Lagaan)              \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(506, Ans); // Change
        if (isit)
        {
            correct_answer(506); // Change
            return 1;
        }
        else
        {
            incorrect_answer(506); // Change
            return 0;
        }
        break;

    case 7:
        printf("Which of these is a term for a score used in racquet sports?\n"); // Change
        printf("1.Hate     \t\t2.Love  \n");                                      // Change
        printf("3.Down     \t\t4.Up    \n");                                      // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Hate        \t\t2.Love     \n"); // Change
                printf("3.            \t\t4.         \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(507, Ans); // Change
        if (isit)
        {
            correct_answer(507); // Change
            return 1;
        }
        else
        {
            incorrect_answer(507); // Change
            return 0;
        }
        break;

    case 8:
        printf("Which of these diseases is also known as ‘dimaagi bukhar’?\n"); // Change
        printf("1.Tetanus                       \t\t2.Rabies \n");              // Change
        printf("3.Japanese Encephalities        \t\t4.dengue\n");               // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Tetanus                  \t\t2.              \n"); // Change
                printf("3.Japanese Encephalities   \t\t4.              \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(508, Ans); // Change
        if (isit)
        {
            correct_answer(508); // Change
            return 1;
        }
        else
        {
            incorrect_answer(508); // Change
            return 0;
        }
        break;

    case 9:
        printf(" Ambemohar and ajara ghansal are varieties of what?\n");
        printf("1.Wheat       \t\t2.Rice       \n"); // Change
        printf("3.Bajara      \t\t4.Jawar      \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Wheat       \t\t2.Rice        \n"); // Change
                printf("3.            \t\t4.        \n");     // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(509, Ans); // Change
        if (isit)
        {
            correct_answer(509); // Change
            return 1;
        }
        else
        {
            incorrect_answer(509); // Change
            return 0;
        }
        break;

    case 10:
        printf("Which of these places gets its name form an arabic word meaning desert?\n"); // Change
        printf("1.Gobi        \t\t2.Sahara     \n");                                         // Change
        printf("3.Mojave      \t\t4.Thar       \n");                                         // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.            \t\t2.Sahara     \n"); // Change
                printf("3.            \t\t4.Thar       \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(510, Ans); // Change
        if (isit)
        {
            correct_answer(510); // Change
            return 1;
        }
        else
        {
            incorrect_answer(510); // Change
            return 0;
        }
        break;
    }

    return 0;
}

int Question_L6() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("Which novel, made into a TV series by Mira Nair in 2020, revolves around the lives of four Indian families -- the Mehras, the Kapoors, the Khans and the Chatterjis? \n"); // Change
        printf("1. The Great Indian Novel\t\t2. A Suitable Boy\n");                                                                                                                        // Change
        printf("3.  A Fine Balance \t\t4. The Golden Gate\n");                                                                                                                             // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t 2.A Suitable Boy \n"); // Change
                printf("3.\t\t 4. The Golden Gate\n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(601, Ans); // Change
        if (isit)
        {
            correct_answer(601); // Change
            return 1;
        }
        else
        {
            incorrect_answer(601); // Change
            return 0;
        }
        break;

    case 2:
        printf("Which group did Sampat Pal Devi start in Bundelkhand to fight violence against women?\n"); // Change
        printf("1. Narimukt Wahini  \t\t2. Mahila Morcha\n");                                              // Change
        printf("3. Laxmibai Sena \t\t4. Gulabi Gang \n");                                                  // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Narimukt Wahini \t\t2. \n"); // Change
                printf("3.  \t\t4. Gulabi Gang \n");    // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(602, Ans); // Change
        if (isit)
        {
            correct_answer(602); // Change
            return 1;
        }
        else
        {
            incorrect_answer(602); // Change
            return 0;
        }
        break;

    case 3:
        printf("Which person from the field of medicine is known for his 1817 work 'An Essay on the Shaking Palsy'?\n"); // Change
        printf("1. James Parkinson  \t\t 2. Hans Asperger \n");                                                         // Change
        printf("3. Alois Alzheimer  \t\t 4. Thomas Hodgkin \n");                                                        // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. James Parkinson \t\t 2. Hans Asperger\n"); // Change
                printf("3. \t\t4. \n");                               // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(603, Ans); // Change
        if (isit)
        {
            correct_answer(603); // Change
            return 1;
        }
        else
        {
            incorrect_answer(603); // Change
            return 0;
        }
        break;

    case 4:
        printf(" Who is the first pace bowler to take 600 wickets in test cricket? \n");
        printf("1. Stuart Broad \t\t 2. James Anderson \n"); // Change
        printf("3. Dale Steyn  \t\t 4. Glenn McGrath\n");    // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Stuart Broad \t\t 2. James Anderson\n"); // Change
                printf("3.  \t\t4.  \n");                           // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(604, Ans); // Change
        if (isit)
        {
            correct_answer(604); // Change
            return 1;
        }
        else
        {
            incorrect_answer(604); // Change
            return 0;
        }
        break;

    case 5:
        printf(" Located in district Bilaspur in Chhattisgarh, Devrani-Jethani temples are mainly dedicated to whom?\n"); // Change
        printf("1. Lord Shiva  \t\t 2. Lord Kartikeya \n");                                                               // Change
        printf("3. Varundev  \t\t 4. Shanidev\n");                                                                        // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Lord Shiva \t\t2. Lord Kartikeya \n"); // Change
                printf("3. \t\t4.\n");                            // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(605, Ans); // Change
        if (isit)
        {
            correct_answer(605); // Change
            return 1;
        }
        else
        {
            incorrect_answer(605); // Change
            return 0;
        }
        break;

    case 6:
        printf("Which novel, made into a TV series by Mira Nair in 2020, revolves around the lives of four Indian families -- the Mehras, the Kapoors, the Khans and the Chatterjis? \n"); // Change
        printf("1. The Great Indian Novel\t\t2. A Suitable Boy\n");                                                                                                                        // Change
        printf("3.  A Fine Balance \t\t4. The Golden Gate\n");                                                                                                                             // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t 2.A Suitable Boy \n"); // Change
                printf("3.\t\t 4. The Golden Gate\n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(606, Ans); // Change
        if (isit)
        {
            correct_answer(606); // Change
            return 1;
        }
        else
        {
            incorrect_answer(606); // Change
            return 0;
        }
        break;

    case 7:
        printf("Which group did Sampat Pal Devi start in Bundelkhand to fight violence against women?\n"); // Change
        printf("1. Narimukt Wahini  \t\t2. Mahila Morcha\n");                                              // Change
        printf("3. Laxmibai Sena \t\t4. Gulabi Gang \n");                                                  // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Narimukt Wahini \t\t2. \n"); // Change
                printf("3.  \t\t4. Gulabi Gang \n");    // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(607, Ans); // Change
        if (isit)
        {
            correct_answer(607); // Change
            return 1;
        }
        else
        {
            incorrect_answer(607); // Change
            return 0;
        }
        break;

    case 8:
        printf("Which person from the field of medicine is known for his 1817 work 'An Essay on the Shaking Palsy'?\n"); // Change
        printf("1. James Parkinson  \t\t2. Hans Asperger \n");                                                          // Change
        printf("3. Alois Alzheimer  \t\t4. Thomas Hodgkin \n");                                                         // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. James Parkinson \t\t2.Hans Asperger\n"); // Change
                printf("3. \t\t4. \n");                             // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(608, Ans); // Change
        if (isit)
        {
            correct_answer(608); // Change
            return 1;
        }
        else
        {
            incorrect_answer(608); // Change
            return 0;
        }
        break;

    case 9:
        printf(" Who is the first pace bowler to take 600 wickets in test cricket? \n");
        printf("1. Stuart Broad \t\t2. James Anderson \n"); // Change
        printf("3. Dale Steyn  \t\t4. Glenn McGrath\n");    // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Stuart Broad \t\t2. James Anderson\n"); // Change
                printf("3.  \t\t4.  \n");                          // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(609, Ans); // Change
        if (isit)
        {
            correct_answer(609); // Change
            return 1;
        }
        else
        {
            incorrect_answer(609); // Change
            return 0;
        }
        break;

    case 10:
        printf(" Located in district Bilaspur in Chhattisgarh, Devrani-Jethani temples are mainly dedicated to whom?\n"); // Change
        printf("1. Lord Shiva  \t\t2. Lord Kartikeya \n");                                                                // Change
        printf("3. Varundev  \t\t4. Shanidev\n");                                                                         // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Lord Shiva \t\t2. Lord Kartikeya \n"); // Change
                printf("3. \t\t4.\n");                            // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(610, Ans); // Change
        if (isit)
        {
            correct_answer(610); // Change
            return 1;
        }
        else
        {
            incorrect_answer(610); // Change
            return 0;
        }
        break;
    }
    return 0;
}

int Question_L7() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("Where in Singapore did Netaji Subhash Chandra Bose make the first proclamation of an Azad Hind government?\n"); // Change
        printf("1. Cathay cinema hall\t\t2.Fort Canning park\n");                                                               // Change
        printf("3. National University of Singapore \t\t4. National Gallery of Singapore\n");                                   // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Cathay cinema hall\t\t 2. \n");            // Change
                printf("3. \t\t 4. National Gallery of Singapore\n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(701, Ans); // Change
        if (isit)
        {
            correct_answer(701); // Change
            return 1;
        }
        else
        {
            incorrect_answer(701); // Change
            return 0;
        }
        break;

    case 2:
        printf("The 2020 film Gul Makai is a biopic of which of these personalities?\n"); // Change
        printf("1. Benazir Bhutto  \t\t2. Aisha Chaudhary\n");                            // Change
        printf("3. Greta Thunberg  \t\t4. Malala Yousafzai \n");                          // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. Aisha Chaudhary\n");    // Change
                printf("3.  \t\t4. Malala Yousafzai \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(702, Ans); // Change
        if (isit)
        {
            correct_answer(702); // Change
            return 1;
        }
        else
        {
            incorrect_answer(702); // Change
            return 0;
        }
        break;

    case 3:
        printf("Eastern Sporting Union, Rising Student's Club and Sethu FC have all been champions of which of these tournaments?\n"); // Change
        printf("1.Hockey India League  \t\t2. Hero Gold Cup \n");                                                                      // Change
        printf("3. SAFF Cup \t\t4. Indian Women's League \n");                                                                         // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.\t\t2.  Hero Gold Cup\n");          // Change
                printf("3. \t\t4. Indian Women's League \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(703, Ans); // Change
        if (isit)
        {
            correct_answer(703); // Change
            return 1;
        }
        else
        {
            incorrect_answer(703); // Change
            return 0;
        }
        break;

    case 4:
        printf(" Which of these cities did not host IPL 2020 matches? \n");
        printf("1. Abu Dhabi \t\t2. Dubai \n");   // Change
        printf("3. Sharjah  \t\t4. Fujairah \n"); // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Abu Dhabi  \t\t2. \n"); // Change
                printf("3. \t\t4. Fujairah  \n");  // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(704, Ans); // Change
        if (isit)
        {
            correct_answer(704); // Change
            return 1;
        }
        else
        {
            incorrect_answer(704); // Change
            return 0;
        }
        break;

    case 5:
        printf("The Sultan Azlan Shah cup is an international men’s field hockey tournament held in which country?\n"); // Change
        printf("1. Malaysia  \t\t2. Thailand \n");                                                                      // Change
        printf("3. Indonesia \t\t4.  Brunei\n");                                                                        // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Malaysia\t\t2. Lt Col Ardeshir Tarapore \n"); // Change
                printf("3. \t\t4. Brunei\n");                            // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(705, Ans); // Change
        if (isit)
        {
            correct_answer(705); // Change
            return 1;
        }
        else
        {
            incorrect_answer(705); // Change
            return 0;
        }
        break;

    case 6:
        printf("Where in Singapore did Netaji Subhash Chandra Bose make the first proclamation of an Azad Hind government?\n"); // Change
        printf("1. Cathay cinema hall\t\t2.Fort Canning park\n");                                                               // Change
        printf("3. National University of Singapore \t\t4. National Gallery of Singapore\n");                                   // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Cathay cinema hall\t\t 2. \n");            // Change
                printf("3. \t\t 4. National Gallery of Singapore\n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(706, Ans); // Change
        if (isit)
        {
            correct_answer(706); // Change
            return 1;
        }
        else
        {
            incorrect_answer(706); // Change
            return 0;
        }
        break;

    case 7:
        printf("The 2020 film Gul Makai is a biopic of which of these personalities?\n"); // Change
        printf("1. Benazir Bhutto  \t\t2. Aisha Chaudhary\n");                            // Change
        printf("3. Greta Thunberg  \t\t4. Malala Yousafzai \n");                          // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. Aisha Chaudhary\n");    // Change
                printf("3.  \t\t4. Malala Yousafzai \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(707, Ans); // Change
        if (isit)
        {
            correct_answer(707); // Change
            return 1;
        }
        else
        {
            incorrect_answer(707); // Change
            return 0;
        }
        break;

    case 8:
        printf("Eastern Sporting Union, Rising Student's Club and Sethu FC have all been champions of which of these tournaments?\n"); // Change
        printf("1.Hockey India League  \t\t2. Hero Gold Cup \n");                                                                      // Change
        printf("3. SAFF Cup \t\t4. Indian Women’s League \n");                                                                         // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.\t\t2.  Hero Gold Cup\n");          // Change
                printf("3. \t\t4. Indian Women’s League \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(708, Ans); // Change
        if (isit)
        {
            correct_answer(708); // Change
            return 1;
        }
        else
        {
            incorrect_answer(708); // Change
            return 0;
        }
        break;

    case 9:
        printf(" Which of these cities did not host IPL 2020 matches? \n");
        printf("1. Abu Dhabi \t\t2. Dubai \n");   // Change
        printf("3. Sharjah  \t\t4. Fujairah \n"); // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Abu Dhabi  \t\t2. \n"); // Change
                printf("3. \t\t4. Fujairah  \n");  // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(709, Ans); // Change
        if (isit)
        {
            correct_answer(709); // Change
            return 1;
        }
        else
        {
            incorrect_answer(709); // Change
            return 0;
        }
        break;

    case 10:
        printf("The Sultan Azlan Shah cup is an international men’s field hockey tournament held in which country?\n"); // Change
        printf("1. Malaysia  \t\t2. Thailand \n");                                                                      // Change
        printf("3. Indonesia \t\t4.  Brunei\n");                                                                        // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Malaysia\t\t2. Lt Col Ardeshir Tarapore \n"); // Change
                printf("3. \t\t4. Brunei\n");                            // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(710, Ans); // Change
        if (isit)
        {
            correct_answer(710); // Change
            return 1;
        }
        else
        {
            incorrect_answer(710); // Change
            return 0;
        }
        break;
    }

    return 0;
}

int Question_L8() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("Dadra, Nagar Haveli, Daman and the island of Diu were all under which European colonial power?\n"); // Change
        printf("1. Denmark\t\t2. France\n");                                                                        // Change
        printf("3. Britain \t\t4. Portugal\n");                                                                     // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t 2. \n");               // Change
                printf("3. Britain\t\t 4.Portugal\n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(801, Ans); // Change
        if (isit)
        {
            correct_answer(801); // Change
            return 1;
        }
        else
        {
            incorrect_answer(801); // Change
            return 0;
        }
        break;

    case 2:
        printf("The trophy which is awarded to the winners of the women's singles at the Australian open is named after which legendary tennis star?\n"); // Change
        printf("1. Daphne Akhurst  \t\t2.  Margaret Court\n");                                                                                            // Change
        printf("3. Evonne Goolagong Cawley  \t\t4. Lesley Bowrey\n");                                                                                     // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Daphne Akhurst \t\t2. Margaret Court\n"); // Change
                printf("3.  \t\t4. \n");                             // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(802, Ans); // Change
        if (isit)
        {
            correct_answer(802); // Change
            return 1;
        }
        else
        {
            incorrect_answer(802); // Change
            return 0;
        }
        break;

    case 3:
        printf("Which of the following dynasties did the Kanva dynasty overthrow to come to power around 73 BCE in Magadha?\n"); // Change
        printf("1. Maurya Dynasty  \t\t2. Shunga Dynasty \n");                                                                   // Change
        printf("3. Pala Dynasty\t\t4. Chera Dynasty \n");                                                                        // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.\t\t2.Shunga Dynasty\n");   // Change
                printf("3. \t\t4. Chera Dynasty \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(803, Ans); // Change
        if (isit)
        {
            correct_answer(803); // Change
            return 1;
        }
        else
        {
            incorrect_answer(803); // Change
            return 0;
        }
        break;

    case 4:
        printf(" According to many historians, which of these rulers of the Maurya dynasty was also known as Amitraghata? \n");
        printf("1. Ashoka \t\t2. Brihadratha \n");            // Change
        printf("3. Bindusara  \t\t4. Chandragupta Maurya\n"); // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. AShoka \t\t2. \n");     // Change
                printf("3. Bindusara \t\t4.  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(804, Ans); // Change
        if (isit)
        {
            correct_answer(804); // Change
            return 1;
        }
        else
        {
            incorrect_answer(804); // Change
            return 0;
        }
        break;

    case 5:
        printf("What is the name of the indigenously developed anti-radiation missile, successfully tested by DRDO in October 2020?\n"); // Change
        printf("1. Rudram  \t\t2. Nirbhay  \n");                                                                                         // Change
        printf("3. Mahadev  \t\t4. Shivam \n");                                                                                          // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Rudram \t\t2. Nirbhay \n"); // Change
                printf("3. \t\t4.\n");                 // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(805, Ans); // Change
        if (isit)
        {
            correct_answer(805); // Change
            return 1;
        }
        else
        {
            incorrect_answer(805); // Change
            return 0;
        }
        break;
    case 6:
        printf("Dadra, Nagar Haveli, Daman and the island of Diu were all under which European colonial power?\n"); // Change
        printf("1. Denmark\t\t2. France\n");                                                                        // Change
        printf("3. Britain \t\t4. Portugal\n");                                                                     // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t 2. \n");               // Change
                printf("3. Britain\t\t 4.Portugal\n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(806, Ans); // Change
        if (isit)
        {
            correct_answer(806); // Change
            return 1;
        }
        else
        {
            incorrect_answer(806); // Change
            return 0;
        }
        break;

    case 7:
        printf("The trophy which is awarded to the winners of the women's singles at the Australian open is named after which legendary tennis star?\n"); // Change
        printf("1. Daphne Akhurst  \t\t2.  Margaret Court\n");                                                                                            // Change
        printf("3. Evonne Goolagong Cawley  \t\t4. Lesley Bowrey\n");                                                                                     // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Daphne Akhurst \t\t2. Margaret Court\n"); // Change
                printf("3.  \t\t4. \n");                             // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(807, Ans); // Change
        if (isit)
        {
            correct_answer(807); // Change
            return 1;
        }
        else
        {
            incorrect_answer(807); // Change
            return 0;
        }
        break;

    case 8:
        printf("Which of the following dynasties did the Kanva dynasty overthrow to come to power around 73 BCE in Magadha?\n"); // Change
        printf("1. Maurya Dynasty  \t\t2. Shunga Dynasty \n");                                                                   // Change
        printf("3. Pala Dynasty\t\t4. Chera Dynasty \n");                                                                        // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.\t\t2.Shunga Dynasty\n");   // Change
                printf("3. \t\t4. Chera Dynasty \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(808, Ans); // Change
        if (isit)
        {
            correct_answer(808); // Change
            return 1;
        }
        else
        {
            incorrect_answer(808); // Change
            return 0;
        }
        break;

    case 9:
        printf(" According to many historians, which of these rulers of the Maurya dynasty was also known as Amitraghata? \n");
        printf("1. Ashoka \t\t2. Brihadratha \n");            // Change
        printf("3. Bindusara  \t\t4. Chandragupta Maurya\n"); // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. AShoka \t\t2. \n");     // Change
                printf("3. Bindusara \t\t4.  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(809, Ans); // Change
        if (isit)
        {
            correct_answer(809); // Change
            return 1;
        }
        else
        {
            incorrect_answer(809); // Change
            return 0;
        }
        break;

    case 10:
        printf("What is the name of the indigenously developed anti-radiation missile, successfully tested by DRDO in October 2020?\n"); // Change
        printf("1. Rudram  \t\t2. Nirbhay  \n");                                                                                         // Change
        printf("3. Mahadev  \t\t4. Shivam \n");                                                                                          // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Rudram \t\t2. Nirbhay \n"); // Change
                printf("3. \t\t4.\n");                 // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(810, Ans); // Change
        if (isit)
        {
            correct_answer(810); // Change
            return 1;
        }
        else
        {
            incorrect_answer(810); // Change
            return 0;
        }
        break;
    }

    return 0;
}

int Question_L9() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("Agni Ki Udaan is the Hindi translation of which personality's autobiography?\n"); // Change
        printf("1. Homi Jehagir Bhabha\t\t2. Kalpana Chawla\n");                                  // Change
        printf("3. APJ Abdul Kalam \t\t4. Vikram Sarabhai\n");                                    // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t 2. \n");                              // Change
                printf("3. APJ Abdul Kalam\t\t 4.Vikram Sarabhai\n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(901, Ans); // Change
        if (isit)
        {
            correct_answer(901); // Change
            return 1;
        }
        else
        {
            incorrect_answer(901); // Change
            return 0;
        }
        break;

    case 2:
        printf("Who became the first chancellor of the Aligarh Muslim University in 1920?\n"); // Change
        printf("1. Sultan Jahan Begum  \t\t2. Maulana Abul Kalam Azad\n");                     // Change
        printf("3. Sir Syed Ahmad Khan  \t\t4. Mir Usman Ali Khan \n");                        // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Sultan Jahan Begum \t\t2. Maulana Abul Kalam Azad\n"); // Change
                printf("3.  \t\t4. \n");                                          // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(902, Ans); // Change
        if (isit)
        {
            correct_answer(902); // Change
            return 1;
        }
        else
        {
            incorrect_answer(902); // Change
            return 0;
        }
        break;

    case 3:
        printf("Identify this flower, which weights around 11 kg and is the world’s largest flower\n"); // Change
        printf("1. Pasidonia  \t\t2. Rafflesia \n");                                                    // Change
        printf("3. Pando \t\t4. Moonflower \n");                                                        // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.\t\t2. Rafflesia\n");    // Change
                printf("3. \t\t4. Moonflower \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(903, Ans); // Change
        if (isit)
        {
            correct_answer(903); // Change
            return 1;
        }
        else
        {
            incorrect_answer(903); // Change
            return 0;
        }
        break;

    case 4:
        printf(" In November 2020 Priyanca Radhakrishnan became a minister in which country? \n");
        printf("1. Fiji \t\t2. Singapore \n");      // Change
        printf("3. Jamaica  \t\t4. New Zealand\n"); // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Fiji  \t\t2. \n");       // Change
                printf("3. \t\t4. New Zealand \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(904, Ans); // Change
        if (isit)
        {
            correct_answer(904); // Change
            return 1;
        }
        else
        {
            incorrect_answer(904); // Change
            return 0;
        }
        break;

    case 5:
        printf("Who was awarded the Param Vir Chakra for his bravery on 18 November 1962 at Rezang La in Ladakh?\n"); // Change
        printf("1. Major Dhan Singh Thapa  \t\t2. Lt Col Ardeshir Tarapore \n");                                      // Change
        printf("3. Subedar Joginder Singh  \t\t4. Major Shaitan Singh \n");                                           // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. Lt Col Ardeshir Tarapore \n"); // Change
                printf("3. \t\t4.Major Shaitan Singh\n");        // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(905, Ans); // Change
        if (isit)
        {
            correct_answer(905); // Change
            return 1;
        }
        else
        {
            incorrect_answer(905); // Change
            return 0;
        }
        break;

    case 6:
        printf("Agni Ki Udaan is the Hindi translation of which personality's autobiography?\n"); // Change
        printf("1. Homi Jehagir Bhabha\t\t2. Kalpana Chawla\n");                                  // Change
        printf("3. APJ Abdul Kalam \t\t4. Vikram Sarabhai\n");                                    // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t 2. \n");                              // Change
                printf("3. APJ Abdul Kalam\t\t 4.Vikram Sarabhai\n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(906, Ans); // Change
        if (isit)
        {
            correct_answer(906); // Change
            return 1;
        }
        else
        {
            incorrect_answer(906); // Change
            return 0;
        }
        break;

    case 7:
        printf("Who became the first chancellor of the Aligarh Muslim University in 1920?\n"); // Change
        printf("1. Sultan Jahan Begum  \t\t2. Maulana Abul Kalam Azad\n");                     // Change
        printf("3. Sir Syed Ahmad Khan  \t\t4. Mir Usman Ali Khan \n");                        // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Sultan Jahan Begum \t\t2. Maulana Abul Kalam Azad\n"); // Change
                printf("3.  \t\t4. \n");                                          // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(907, Ans); // Change
        if (isit)
        {
            correct_answer(907); // Change
            return 1;
        }
        else
        {
            incorrect_answer(907); // Change
            return 0;
        }
        break;

    case 8:
        printf("Identify this flower, which weights around 11 kg and is the world’s largest flower\n"); // Change
        printf("1. Pasidonia  \t\t2. Rafflesia \n");                                                    // Change
        printf("3. Pando \t\t4. Moonflower \n");                                                        // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.\t\t2. Rafflesia\n");    // Change
                printf("3. \t\t4. Moonflower \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(908, Ans); // Change
        if (isit)
        {
            correct_answer(908); // Change
            return 1;
        }
        else
        {
            incorrect_answer(908); // Change
            return 0;
        }
        break;

    case 9:
        printf(" In November 2020 Priyanca Radhakrishnan became a minister in which country? \n");
        printf("1. Fiji \t\t2. Singapore \n");      // Change
        printf("3. Jamaica  \t\t4. New Zealand\n"); // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Fiji  \t\t2. \n");       // Change
                printf("3. \t\t4. New Zealand \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(909, Ans); // Change
        if (isit)
        {
            correct_answer(909); // Change
            return 1;
        }
        else
        {
            incorrect_answer(909); // Change
            return 0;
        }
        break;

    case 10:
        printf("Who was awarded the Param Vir Chakra for his bravery on 18 November 1962 at Rezang La in Ladakh?\n"); // Change
        printf("1. Major Dhan Singh Thapa  \t\t2. Lt Col Ardeshir Tarapore \n");                                      // Change
        printf("3. Subedar Joginder Singh  \t\t4. Major Shaitan Singh \n");                                           // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. Lt Col Ardeshir Tarapore \n"); // Change
                printf("3. \t\t4.Major Shaitan Singh\n");        // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(910, Ans); // Change
        if (isit)
        {
            correct_answer(910); // Change
            return 1;
        }
        else
        {
            incorrect_answer(910); // Change
            return 0;
        }
        break;
    }

    return 0;
}

int Question_L10() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("During the Battle of Kurukshetra, Krishna deceived the Kauravas by hiding the sun behind clouds to enable Arjuna to kill whom?\n"); // Change
        printf("1. Shakuni  \t\t2. Dronacharya \n");                                                                                                // Change
        printf("3. Dushasana  \t\t4. Jayadratha \n");                                                                                               // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t 2. Dronacharya\n"); // Change
                printf("3. \t\t 4. Jayadratha\n");  // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1001, Ans); // Change
        if (isit)
        {
            correct_answer(1001); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1001); // Change
            return 0;
        }
        break;

    case 2:
        printf("Which of these actresses once won a National Film Award for best female playback singer?\n"); // Change
        printf("1. Deepika Chikhlia  \t\t2. Roopa Ganguly\n");                                                // Change
        printf("3. Neena Gupta  \t\t4. Kirron Kher \n");                                                      // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. Roopa Ganguly\n"); // Change
                printf("3. \t\t4. Kirron Kher \n");  // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1002, Ans); // Change
        if (isit)
        {
            correct_answer(1002); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1002); // Change
            return 0;
        }
        break;

    case 3:
        printf("Bilapur was the capital of which kingdom until it was captured by the Marathas in the 18th century?\n"); // Change
        printf("1. Pata Kingdom \t\t2. Gauda Kingdom  \n");                                                              // Change
        printf("3. Gond Kingdom \t\t4. Bahamani Kingdom  \n");                                                           // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. Gauda Kingdom\n");  // Change
                printf("3. Gond Kingdom \t\t4.  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1003, Ans); // Change
        if (isit)
        {
            correct_answer(1003); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1003); // Change
            return 0;
        }
        break;

    case 4:
        printf("According to the Shiv Purana, due to whose curse did Lord Vishnu take the form of a stone and live near the Gandaki river?\n");
        printf("1.Devi laxmi  \t\t2. Devi Tulsi  \n");        // Change
        printf("3. Bhagwan Shiva  \t\t4. Bhagwan Brahma \n"); // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Devi laxmi  \t\t2. Devi Tulsi \n"); // Change
                printf("3.  \t\t4.   \n");                     // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1004, Ans); // Change
        if (isit)
        {
            correct_answer(1004); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1004); // Change
            return 0;
        }
        break;

    case 5:
        printf("“Lilavati's Daughters' a book published by IAOS Bengaluru features about 100 essays on which of these groups of people?\n"); // Change
        printf("1. Indian women scientists \t\t2.Indian women historians \n");                                                               // Change
        printf("3. Indian women architects  \t\t4. Indian women poets  \n");                                                                 // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Indian women scientists\t\t2.  \n"); // Change
                printf("3.  \t\t4.Indian women poets \n");      // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1005, Ans); // Change
        if (isit)
        {
            correct_answer(1005); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1005); // Change
            return 0;
        }
        break;

    case 6:
        printf("During the Battle of Kurukshetra, Krishna deceived the Kauravas by hiding the sun behind clouds to enable Arjuna to kill whom?\n"); // Change
        printf("1. Shakuni  \t\t2. Dronacharya \n");                                                                                                // Change
        printf("3. Dushasana  \t\t4. Jayadratha \n");                                                                                               // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t 2. Dronacharya\n"); // Change
                printf("3. \t\t 4. Jayadratha\n");  // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1006, Ans); // Change
        if (isit)
        {
            correct_answer(1006); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1006); // Change
            return 0;
        }
        break;

    case 7:
        printf("Which of these actresses once won a National Film Award for best female playback singer?\n"); // Change
        printf("1. Deepika Chikhlia  \t\t2. Roopa Ganguly\n");                                                // Change
        printf("3. Neena Gupta  \t\t4. Kirron Kher \n");                                                      // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. Roopa Ganguly\n"); // Change
                printf("3. \t\t4. Kirron Kher \n");  // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1007, Ans); // Change
        if (isit)
        {
            correct_answer(1007); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1007); // Change
            return 0;
        }
        break;

    case 8:
        printf("Bilapur was the capital of which kingdom until it was captured by the Marathas in the 18th century?\n"); // Change
        printf("1. Pata Kingdom \t\t2. Gauda Kingdom  \n");                                                              // Change
        printf("3. Gond Kingdom \t\t4. Bahamani Kingdom  \n");                                                           // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. Gauda Kingdom\n");  // Change
                printf("3. Gond Kingdom \t\t4.  \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1008, Ans); // Change
        if (isit)
        {
            correct_answer(1008); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1008); // Change
            return 0;
        }
        break;

    case 9:
        printf("According to the Shiv Purana, due to whose curse did Lord Vishnu take the form of a stone and live near the Gandaki river?\n");
        printf("1.Devi laxmi  \t\t2. Devi Tulsi  \n");        // Change
        printf("3. Bhagwan Shiva  \t\t4. Bhagwan Brahma \n"); // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Devi laxmi  \t2. Devi Tulsi \n"); // Change
                printf("3.  \t\t4.   \n");                     // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1009, Ans); // Change
        if (isit)
        {
            correct_answer(1009); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1009); // Change
            return 0;
        }
        break;

    case 10:
        printf("“Lilavati's Daughters' a book published by IAOS Bengaluru features about 100 essays on which of these groups of people?\n"); // Change
        printf("1. Indian women scientists \t\t2.Indian women historians \n");                                                               // Change
        printf("3. Indian women architects  \t\t4. Indian women poets  \n");                                                                 // Change
        printf("Enter -1 for life line\n");
        scanf("%d", &Ans);
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Indian women scientists\t\t2.  \n"); // Change
                printf("3.  \t\t4.Indian women poets \n");      // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1010, Ans); // Change
        if (isit)
        {
            correct_answer(1010); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1010); // Change
            return 0;
        }
        break;
    }
    return 0;
}

int Question_L11() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("Which company is the world's largest manufacturer of vaccines by number of doses produced (volume)?\n"); // Change
        printf("1. Biocon  \t\t2. Serum Institute \n");                                                                  // Change
        printf("3. Indian Immunologicals  \t\t4. Bharat Biotech \n");                                                    // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t 2. Serum Institute :\n");     // Change
                printf("3. Indian Immunologicals:\t\t 4.\n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1101, Ans); // Change
        if (isit)
        {
            correct_answer(1101); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1101); // Change
            return 0;
        }
        break;

    case 2:
        printf("Who is the first woman and also former astronaut to reach the deepest point of the ocean, Mariana trench?\n"); // Change
        printf("1. Sally Ride           \t\t2. Valentina Tereshkova\n");                                                       // Change
        printf("3. Svetlana Savitskaya  \t\t4. Kathryn D Sullivan \n");                                                        // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. \n");                                        // Change
                printf("3. Svetlana Savitskaya \t\t4. Kathryn D Sullivan \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1102, Ans); // Change
        if (isit)
        {
            correct_answer(1102); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1102); // Change
            return 0;
        }
        break;

    case 3:
        printf("Vikram Batra, Manoj Kumar Pandey, Yogender Singh Yadav and Sanjay Kumar are all names associated with which war?\n"); // Change
        printf("1. 1999 \t\t2. 1965  \n");                                                                                            // Change
        printf("3. 1962 \t\t4. 1971  \n");                                                                                            // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. 1999\t\t2.\n");   // Change
                printf("3. \t\t4. 1971 \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1103, Ans); // Change
        if (isit)
        {
            correct_answer(1103); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1103); // Change
            return 0;
        }
        break;

    case 4:
        printf("Which of these countries has not hosted both the summer and winter olympic games? \n");
        printf("1. France \t\t2. Japan  \n");  // Change
        printf("3. Australia  \t\t4. USA \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.   \t\t2. \n");              // Change
                printf("3. Australia \t\t4.  USA \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1104, Ans); // Change
        if (isit)
        {
            correct_answer(1104); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1104); // Change
            return 0;
        }
        break;

    case 5:
        printf("Which British army captain rediscovered the Khajuraho temples in 1838?\n"); // Change
        printf("1. Charles Boycott \t\t2.T S Burt \n");                                     // Change
        printf("3. Charles Staveley  \t\t4. R A Davidson  \n");                             // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Charles Boycott\t\t2.  \n");  // Change
                printf("3. Charles Staveley \t\t4. \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1105, Ans); // Change
        if (isit)
        {
            correct_answer(1105); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1105); // Change
            return 0;
        }
        break;

    case 6:
        printf("Which company is the world's largest manufacturer of vaccines by number of doses produced (volume)?\n"); // Change
        printf("1. Biocon  \t\t2. Serum Institute \n");                                                                  // Change
        printf("3. Indian Immunologicals  \t\t4. Bharat Biotech \n");                                                    // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is 2\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t 2. Serum Institute :\n");     // Change
                printf("3. Indian Immunologicals:\t\t 4.\n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 2\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1106, Ans); // Change
        if (isit)
        {
            correct_answer(1106); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1106); // Change
            return 0;
        }
        break;

    case 7:
        printf("Who is the first woman and also former astronaut to reach the deepest point of the ocean, Mariana trench?\n"); // Change
        printf("1. Sally Ride  \t\t2. Valentina Tereshkova\n");                                                                // Change
        printf("3. Svetlana Savitskaya  \t\t4. Kathryn D Sullivan \n");                                                        // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. \n");                                        // Change
                printf("3. Svetlana Savitskaya \t\t4. Kathryn D Sullivan \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1107, Ans); // Change
        if (isit)
        {
            correct_answer(1107); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1107); // Change
            return 0;
        }
        break;

    case 8:
        printf("Vikram Batra, Manoj Kumar Pandey, Yogender Singh Yadav and Sanjay Kumar are all names associated with which war?\n"); // Change
        printf("1. 1999 \t\t2. 1965  \n");                                                                                            // Change
        printf("3. 1962 \t\t4. 1971  \n");                                                                                            // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. 1999\t\t2.\n");   // Change
                printf("3. \t\t4. 1971 \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1108, Ans); // Change
        if (isit)
        {
            correct_answer(1108); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1108); // Change
            return 0;
        }
        break;
    case 9:
        printf("Which of these countries has not hosted both the summer and winter olympic games? \n");
        printf("1. France \t\t2. Japan  \n");  // Change
        printf("3. Australia  \t\t4. USA \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.   \t\t2. \n");              // Change
                printf("3. Australia \t\t4.  USA \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1109, Ans); // Change
        if (isit)
        {
            correct_answer(1109); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1109); // Change
            return 0;
        }
        break;

    case 10:
        printf("Which British army captain rediscovered the Khajuraho temples in 1838?\n"); // Change
        printf("1. Charles Boycott \t\t2.T S Burt \n");                                     // Change
        printf("3. Charles Staveley  \t\t4. R A Davidson  \n");                             // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Charles Boycott\t\t2.  \n");  // Change
                printf("3. Charles Staveley \t\t4. \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1110, Ans); // Change
        if (isit)
        {
            correct_answer(1110); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1110); // Change
            return 0;
        }
        break;
    }

    return 0;
}

int Question_L12() //Change
{
    int Ques, Ans, isit;
    srand(time(0));
    Ques = (rand() % 10) + 1;
    switch (Ques)
    {
    case 1:
        printf("In which state did a politician named P Subhas Chandra Bose become deputy chief minister in 2019?\n"); // Change
        printf("1.Andhra Pradesh : \t\t2.West Bengal :\n");                                                            // Change
        printf("3.Telngana : \t\t4.Karnataka  :\n");                                                                   // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Andhra Pradesh \t\t 2. :\n"); // Change
                printf("3.Telangana:\t\t 4.\n");        // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1201, Ans); // Change
        if (isit)
        {
            correct_answer(1201); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1201); // Change
            return 0;
        }
        break;

    case 2:
        printf("Which Indian hockey player holds the record for the most number of goals scored in an Olympic final?\n"); // Change
        printf("1. Gurbux Singh  \t\t2. Leslie Claudius\n");                                                              // Change
        printf("3. Balbir Singh Senior  \t\t4. Keshav Dutt \n");                                                          // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. Leslie Claudius\n");      // Change
                printf("3. Balbir Singh Senior \t\t4. \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1202, Ans); // Change
        if (isit)
        {
            correct_answer(1202); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1202); // Change
            return 0;
        }
        break;

    case 3:
        printf("American-born Alexander Boris de Pfeffel Johnsoon became prime minister of which country in 2019?\n"); // Change
        printf("1. South Africa  \t\t2. Australia \n");                                                                // Change
        printf("3. United Kingdom \t\t4. Canada \n");                                                                  // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.\t\t2.\n");                       // Change
                printf("3.United Kingdom \t\t4.Canada \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1203, Ans); // Change
        if (isit)
        {
            correct_answer(1203); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1203); // Change
            return 0;
        }
        break;

    case 4:
        printf("Which of these are indigenous people of the Andaman islands, one of the last old stone age tribes of india? \n");
        printf("1. Jarawa \t\t2.Toda \n");    // Change
        printf("3. Kota  \t\t4. Paniyan \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Jarawa  \t\t2. \n"); // Change
                printf("3. \t\t4. Paniyan \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1204, Ans); // Change
        if (isit)
        {
            correct_answer(1204); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1204); // Change
            return 0;
        }
        break;

    case 5:
        printf("Which was the world’s first nuclear powered aircraft carrier?\n"); // Change
        printf("1. USS Nimitz \t\t2. USs John F Kennedy \n");                      // Change
        printf("3. USS Kitty Hawk  \t\tUSS Enterprise \n");                        // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. USs John F Kennedy \n"); // Change
                printf("3. \t\tUSS Enterprise\n");         // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1205, Ans); // Change
        if (isit)
        {
            correct_answer(1205); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1205); // Change
            return 0;
        }
        break;

    case 6:
        printf("In which state did a politician named P Subhas Chandra Bose become deputy chief minister in 2019?\n"); // Change
        printf("1.Andhra Pradesh : \t\t2.West Bengal :\n");                                                            // Change
        printf("3.Telngana : \t\t4.Karnataka  :\n");                                                                   // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.Andhra Pradesh \t\t 2. :\n"); // Change
                printf("3.Telangana:\t\t 4.\n");        // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1206, Ans); // Change
        if (isit)
        {
            correct_answer(1206); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1206); // Change
            return 0;
        }
        break;
    case 7:
        printf("Which Indian hockey player holds the record for the most number of goals scored in an Olympic final?\n"); // Change
        printf("1. Gurbux Singh  \t\t2. Leslie Claudius\n");                                                              // Change
        printf("3. Balbir Singh Senior  \t\t4. Keshav Dutt \n");                                                          // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. Leslie Claudius\n");      // Change
                printf("3. Balbir Singh Senior \t\t4. \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1207, Ans); // Change
        if (isit)
        {
            correct_answer(1207); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1207); // Change
            return 0;
        }
        break;

    case 8:
        printf("American-born Alexander Boris de Pfeffel Johnsoon became prime minister of which country in 2019?\n"); // Change
        printf("1. South Africa  \t\t2. Australia \n");                                                                // Change
        printf("3. United Kingdom \t\t4. Canada \n");                                                                  // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 3\n");
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1.\t\t2.\n");                       // Change
                printf("3.United Kingdom \t4.Canada \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 3\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1208, Ans); // Change
        if (isit)
        {
            correct_answer(1208); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1208); // Change
            return 0;
        }
        break;

    case 9:
        printf("Which of these are indigenous people of the Andaman islands, one of the last old stone age tribes of india? \n");
        printf("1. Jarawa \t\t2.Toda \n");    // Change
        printf("3. Kota  \t\t4. Paniyan \n"); // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 1\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. Jarawa  \t2. \n");   // Change
                printf("3. \t\t4. Paniyan \n"); // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 1\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1209, Ans); // Change
        if (isit)
        {
            correct_answer(1209); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1209); // Change
            return 0;
        }
        break;
    case 10:
        printf("Which was the world’s first nuclear powered aircraft carrier?\n"); // Change
        printf("1. USS Nimitz \t\t2. USs John F Kennedy \n");                      // Change
        printf("3. USS Kitty Hawk  \t\tUSS Enterprise \n");                        // Change
        printf("Enter -1 for life line\n");
        printf("Enter 7 to quit \n");
        scanf("%d", &Ans);
        if (Ans == 7)
        {
            return 101;
        }
        if (Ans == -1)
        {
            printf("------------------------------------------------\n");
            printf("Enter\n");
            printf("1 for Phone-o-friend\n");
            printf("2 for 50-50\n");
            printf("3 for Expert Advice\n");
            int LL;
            scanf("%d", &LL);
            if (LL == 1)
            {
                char buffer[32];
                char *b = buffer;
                size_t bufsize = 32;
                size_t characters;
                printf("Hii , How are you \n");
                characters = getline(&b, &bufsize, stdin);
                printf("Whats the Question\n");
                characters = getline(&b, &bufsize, stdin);
                printf("I think Answer is Option 4\n"); // Change
                characters = getline(&b, &bufsize, stdin);
            }

            else if (LL == 2)
            {
                printf("New Options are\n");
                printf("1. \t\t2. USs John F Kennedy \n"); // Change
                printf("3. \t\tUSS Enterprise\n");         // Change
            }

            else if (LL == 3)
            {
                printf("According To Expert Advice Correct Answer is : Option 4\n"); // Change
            }

            else if (LL != 1 && LL != 2 && LL != 3)
            {
                printf("Incorrect Option Selected\n");
                printf("Lifeline locked\n");
            }
        }
        printf("Whats Your Answer?\n");
        scanf("%d", &Ans);
        isit = check_answer(1210, Ans); // Change
        if (isit)
        {
            correct_answer(1210); // Change
            return 1;
        }
        else
        {
            incorrect_answer(1210); // Change
            return 0;
        }
        break;
    }

    return 0;
}

int main()
{

    printf("*********************************************************************\n");
    printf("*                                                                   *\n");
    printf("*                  ** WELCOME TO THE KBC GAME **                    *\n");
    printf("*                 -------------------------------                   *\n");
    printf("*                                By                                 *\n");
    printf("*                                                                   *\n");
    printf("*                            GROUP 32                               *\n");
    printf("*                                                                   *\n");
    printf("*Group Members(Alphabitically) - TALPADA FORAM JITESHBHAI           *\n");
    printf("*                                TEJAS MADHAV GUNDALE               *\n");
    printf("*                                TEJ VIR                            *\n");
    printf("*                                TIRTH JOSHI                        *\n");
    printf("*                                TUSHAR MAITHANI                    *\n");
    printf("*********************************************************************\n");

    char name[30], NAME[30];
    printf("Give your first name\n ");
    gets(name);
    printf("\n\n");
    strcpy(NAME, name);
    //puts(name);
    printf("Hello! %s \nLets Start Game....!!\a\n\n", NAME);

    printf("Given Below are instructions for the game!\n\n");

    printf("There are total 12 questions.\n");
    printf("With every correct answer level of dificulty will increase.\n");
    printf("There are two checkpoints at level 5 and 7.\n");
    printf("If your answer is incorrect you will get money of Last Level Achieved\n");
    printf("If your quit you will get money of Last Question Answered\n");
    printf("You have three Lifelines--\n");
    printf("1) Phone-o-friend\n");
    printf("2) 50-50\n");
    printf("3) Expert Advice\n");
    printf("Life lines can be used multiple times during the game.\n");
    printf("In a question you can use only one lifeline.\n");
    printf("You can quit game anytime by pressing 7.\n\n");
    printf("Press Enter to  start game! \n\n");
    getchar();

    system("color 07");

    int level = 0, money, quit = 0, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12;
    Q1 = Question_L1();
    if (Q1)
    {
        if (Q1 == 101)
        {
            quit = 1;
            goto result;
        }
        system("color 07");
        printf("\n\n**********************\n\n");
        level++;
        Q2 = Question_L2();
        if (Q2)
        {
            if (Q2 == 101)
            {
                quit = 1;
                goto result;
            }
            system("color 07");
            printf("\n\n**********************\n\n");
            level++;
            Q3 = Question_L3();
            if (Q3)
            {
                if (Q3 == 101)
                {
                    quit = 1;
                    goto result;
                }
                system("color 07");
                printf("\n\n**********************\n\n");
                level++;
                Q4 = Question_L4();
                if (Q4)
                {
                    if (Q4 == 101)
                    {
                        quit = 1;
                        goto result;
                    }
                    system("color 07");
                    printf("\n\n**********************\n\n");
                    level++;
                    Q5 = Question_L5();
                    if (Q5)
                    {
                        if (Q5 == 101)
                        {
                            quit = 1;
                            goto result;
                        }
                        system("color 07");
                        printf("\n\n**********************\n\n");
                        level++;
                        Q6 = Question_L6();
                        if (Q6)
                        {
                            if (Q6 == 101)
                            {
                                quit = 1;
                                goto result;
                            }
                            system("color 07");
                            printf("\n\n**********************\n\n");
                            level++;
                            Q7 = Question_L7();
                            if (Q7)
                            {
                                if (Q7 == 101)
                                {
                                    quit = 1;
                                    goto result;
                                }
                                system("color 07");
                                printf("\n\n**********************\n\n");
                                level++;
                                Q8 = Question_L8();
                                if (Q8)
                                {
                                    if (Q8 == 101)
                                    {
                                        quit = 1;
                                        goto result;
                                    }
                                    system("color 07");
                                    printf("\n\n**********************\n\n");
                                    level++;
                                    Q9 = Question_L9();
                                    if (Q9)
                                    {
                                        if (Q9 == 101)
                                        {
                                            quit = 1;
                                            goto result;
                                        }
                                        system("color 07");
                                        printf("\n\n**********************\n\n");
                                        level++;
                                        Q10 = Question_L10();
                                        if (Q10)
                                        {
                                            if (Q10 == 101)
                                            {
                                                quit = 1;
                                                goto result;
                                            }
                                            system("color 07");
                                            printf("\n\n**********************\n\n");
                                            level++;
                                            Q11 = Question_L11();
                                            if (Q11)
                                            {
                                                if (Q11 == 101)
                                                {
                                                    quit = 1;
                                                    goto result;
                                                }
                                                system("color 07");
                                                printf("\n\n**********************\n\n");
                                                level++;
                                                Q12 = Question_L12();
                                                if (Q12)
                                                {
                                                    if (Q12)
                                                    {
                                                        quit = 1;
                                                        goto result;
                                                    }
                                                    system("color 07");
                                                    printf("\n\n**********************\n\n");
                                                    level++;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

result:

    if (quit)
    {
        switch (level)
        {
        case 0:
            money = 0;
            break;

        case 1:
            money = 1000;
            break;

        case 2:
            money = 2000;
            break;

        case 3:
            money = 5000;
            break;

        case 4:
            money = 10000;
            break;

        case 5:
            money = 25000;
            break;

        case 6:
            money = 50000;
            break;

        case 7:
            money = 100000;
            break;

        case 8:
            money = 500000;
            break;

        case 9:
            money = 1000000;
            break;

        case 10:
            money = 2500000;
            break;

        case 11:
            money = 10000000;
            break;

        case 12:
            money = 50000000;
            break;

        default:
            break;
        }
    }
    else
    {
        if (level == 0 || level == 1 || level == 2 || level == 3 || level == 4)
        {
            money = 0;
        }
        if (level == 5 || level == 6 || level == 7)
        {
            money = 25000;
        }
        if (level > 7)
        {
            money = 500000;
        }
    }

    printf("\n-------------------------------------------------------\a\n");
    printf("Level = %d\n", level);
    printf("Total Money Earned = %d \n", money);
    printf("-------------------------------------------------------\n");
    system("color 07");
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("Thanks For playing!!\a\n");
    return 0;
}
