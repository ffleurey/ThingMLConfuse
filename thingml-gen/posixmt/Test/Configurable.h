/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing Configurable
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef Configurable_H_
#define Configurable_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"
#include "runtime.h"

/*****************************************************************************
 * Headers for type : Configurable
 *****************************************************************************/

#include "runtime.h"

// BEGIN: Code from the c_header annotation Configurable
#include <confuse.h>
// END: Code from the c_header annotation Configurable

// Definition of the sessions stuct:

// Definition of the instance stuct:
struct Configurable_Instance {
bool active;
bool alive;
// Variables for the ID of the ports of the instance
struct instance_fifo fifo;

// Instances of different sessions

// Variables for the current instance state
int initState;
int Configurable_State;
// Variables for the properties of the instance
char * Configurable_config_file_name_var;
char * Configurable_greetings_var;
int16_t Configurable_times_var;

};
// Message enqueue

// Fork Sessions

// ProcessMessageQueue
int Configurable_processMessageQueue(struct Configurable_Instance * _instance);

// Run
void Configurable_run(struct Configurable_Instance * _instance);

// Declaration of callbacks for incoming messages:

// Definition of the states:
#define CONFIGURABLE_STATE 0
#define CONFIGURABLE_NULL_MAIN_STATE 1



#ifdef __cplusplus
}
#endif

#endif //Configurable_H_
