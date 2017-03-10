/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *      Implementation for Application Test
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <signal.h>
#include <pthread.h>
#include "thingml_typedefs.h"
#include "runtime.h"
#include "Configurable.h"





/*****************************************************************************
 * Definitions for configuration : Test
 *****************************************************************************/

//Declaration of instance variables
//Instance c
// Variables for the properties of the instance
struct Configurable_Instance c_var;
// Variables for the sessions of the instance




int processMessageQueue() {
fifo_lock();
while (fifo_empty()) fifo_wait();
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
}
return 1;
}


//external Message enqueue

void initialize_configuration_Test() {
// Initialize connectors


// Network Initialization
// End Network Initialization

// Init the ID, state variables and properties for instance c
c_var.active = true;
c_var.Configurable_State = CONFIGURABLE_NULL_MAIN_STATE;
c_var.Configurable_config_file_name_var = "test.conf";
c_var.Configurable_times_var = 1;
c_var.Configurable_greetings_var = "UNDEFINED";

Configurable_OnEntry(CONFIGURABLE_STATE, &c_var);
}




void term(int signum)
{
    

    fflush(stdout);
    fflush(stderr);
    exit(signum);
}


int main(int argc, char *argv[]) {
    struct sigaction action;
    memset(&action, 0, sizeof(struct sigaction));
    action.sa_handler = term;
    sigaction(SIGINT, &action, NULL);
    sigaction(SIGTERM, &action, NULL);

    init_runtime();
    
    initialize_configuration_Test();

    while (1) {
        
// Network Listener// End Network Listener

int emptyEventConsumed = 1;
while (emptyEventConsumed != 0) {
emptyEventConsumed = 0;
}

        processMessageQueue();
  }
}