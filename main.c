/* 
 * File:   main.c
 * Author: Lianne Perez
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

/*
 * 
 */
int main(int argc, char** argv) {

    while(1){
        //variables
        
        //while{
        //get input command and gives it to cmd array
        //}
        
        //delimiter for cmd array
        
       //if{
        //indicate if '&' character found, do not wait for child process
        //remove '&' from command line
        //}
        
        //create child process using fork()
        //if{
        //error if child is less than 0
        //} else if {
        // child_pid == 0 do child process and execute command
        //}
        //if{
        //parent process wates for child procces uinless flag is present
        //}
        
        printf("Your Command > \n");
        char command[100];
        fgets(command, 100, stdin);
        
        int last = strlen(command) - 1;
        char l_char = command[last - 1];
        
        // Process ID
        
        pid_t pid[10];
        int i; //counters
        //int count = 0;
        
        for(i = 0; i<1; i++){
            pid_t pid2 = pid;
            pid[i] = pid2;
            
            if(pid2 == 0){
                system(command);
                printf("%d\n", 1);
                exit(0);
            } else
                continue;
        }
        
        if(l_char != '&'){
            for(i = 0; i < 1; i++){
                pid_t pid2 = pid[i];
                wait(NULL);
            }
            printf("Done waiting for child to complete \n");
            } else
                printf("Waiting for child to complete\n");
        }
    }
   


