#include <stdio.h>

char user_input[];
int main()
{
    system("cls");
    printf("Welcome to CHERRY.\n");

    while (1)
    {
        printf("user:");
        gets(user_input);
        if (strcmp(user_input,"exit")==0)
        {
            system("cls");
            printf("CHERRY: Ok Sir. \n");
            break;
        }
        else if(strcmp(user_input,"hi")==0)
        {
            printf("Hello Sir..\n");
            printf("Welcome to CHERRY.\n");
            printf("How may I help you? \n");
        }
         else if(strcmp(user_input,"Hi")==0)
        {
            printf("Hello Sir..\n");
            printf("Welcome to CHERRY.\n");
            printf("How may I help you? \n");
        }


        else if(strcmp(user_input,"who designed you")==0)
        {
            printf("\n I was designed and developed by Anik Chawdhury and his team members are\n 1.Samiul Bari\n 2.Sawkot Mahmud\n 3.David Jevers Gourob \n\n.");

        }

         else if(strcmp(user_input,"the reason why you were designed")==0)
        {
            printf("\nI am here because of a Lab Project\n Provided By 'Md. Rayid Hasan Mojumder, Lecturer, Department of EEE, DIU'\n\n");

        }



        else if(strcmp(user_input,"good morning")==0)
        {
            printf("Good Morning Sir..\n");

        }
        else if(strcmp(user_input,"good night")==0)
        {
            printf("Good Night Sir..\n");

        }
        else if(strcmp(user_input,"good afternoon")==0)
        {
            printf("Good Afternoon Sir..");

        }
        else if(strcmp(user_input,"Good eveing")==0)
        {
            printf("Good evening Sir..\n");

        }

        else if(strcmp(user_input,"calculator")==0)
        {
            printf("Okay sir,opening Calculator\n");
            system("calc");
            //system("start https://www.desmos.com/scientific");
        }
        else if(strcmp(user_input,"notepad")==0)
        {
            printf("Okay sir,opening Notepad \n");
          system("Notepad");

        }

        else if(strcmp(user_input,"time")==0)
        {
            time_t t;
            time(&t);
            printf(" Current Time: %s\n",ctime(&t));
        }
          else if(strcmp(user_input,"weather")==0)
        {
            printf("Okay sir,opening Weather \n");
         // system(" start https://weather.com");
        system(" start https://www.google.com/search?q=weather&oq=weather&aqs=edge..69i57j69i59j0i273i433i650j0i273i650j0i131i273i433i650j0i131i433i512j69i60l3.7584j1j1&sourceid=chrome&ie=UTF-8");


        }
        else if(strcmp(user_input,"blc")==0)
        {
            printf("Okay sir,opening BLC \n");
          system("start https://elearn.daffodilvarsity.edu.bd/");

        }
        else if(strcmp(user_input,"dept")==0)
        {
          system("start https://daffodilvarsity.edu.bd/department/eee");

        }
        else if(strcmp(user_input,"googlesite")==0)
        {
          system("start https://sites.google.com/view/anik-chawdhuryportfolio/home");

        }
        else if(strcmp(user_input,"team")==0)
        {
          system("start https://drive.google.com/file/d/1i1lI2i9qxc7RBrLKQm9bY5qtIFR0YCC6/view?usp=share_link");

        }




        else {
            printf("Sorry Sir,it's out of my syllabus. \n");
        }



    }
    getch ();
}

