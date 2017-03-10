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

/*****************************************************************************
 * Headers for type : Configurable
 *****************************************************************************/


// BEGIN: Code from the c_header annotation Configurable
#include <confuse.h>
// END: Code from the c_header annotation Configurable

// Definition of the instance struct:
struct Configurable_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
// Variables for the current instance state
int Configurable_State;
// Variables for the properties of the instance
char * Configurable_config_file_name_var;
int16_t Configurable_times_var;
char * Configurable_greetings_var;

};
// Declaration of prototypes outgoing messages:
void Configurable_OnEntry(int state, struct Configurable_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define CONFIGURABLE_STATE 0
#define CONFIGURABLE_NULL_MAIN_STATE 1



#ifdef __cplusplus
}
#endif

#endif //Configurable_H_
