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
// Variables for fifo of the instance
byte c_fifo_array[65535];






void initialize_configuration_Test() {
// Initialize connectors

// Init the ID, state variables and properties for instance c
c_var.Configurable_State = CONFIGURABLE_NULL_MAIN_STATE;
c_var.active = true;
c_var.alive = true;
c_var.Configurable_config_file_name_var = "test.conf";
c_var.Configurable_greetings_var = "UNDEFINED";
c_var.Configurable_times_var = 1;

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

  
  initialize_configuration_Test();

// Network Initialization// End Network Initialization

c_var.fifo.fifo_size = 65535;
c_var.fifo.fifo_head = 0;
c_var.fifo.fifo_tail = 0;
c_var.fifo.fifo = &c_fifo_array;
init_runtime(&(c_var.fifo));
pthread_t thread_c;

c_var.initState = -1;
Configurable_OnEntry(CONFIGURABLE_STATE, &c_var);
pthread_create( &thread_c, NULL, Configurable_run, (void *) &c_var);

  pthread_join( thread_c, NULL);

}