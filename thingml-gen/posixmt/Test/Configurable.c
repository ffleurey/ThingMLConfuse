/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing Configurable
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "Configurable.h"

/*****************************************************************************
 * Implementation for type : Configurable
 *****************************************************************************/


// BEGIN: Code from the c_global annotation Configurable
cfg_t *cfg;
// END: Code from the c_global annotation Configurable

// Declaration of prototypes:
//Prototypes: State Machine
void Configurable_OnExit(int state, struct Configurable_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
void f_Configurable_createConfiguration(struct Configurable_Instance *_instance);
void f_Configurable_freeConfiguration(struct Configurable_Instance *_instance);
void f_Configurable_readConfiguration(struct Configurable_Instance *_instance);
void f_Configurable_writeConfiguration(struct Configurable_Instance *_instance);
void f_Configurable_terminate(struct Configurable_Instance *_instance);
void f_Configurable_printGreetings(struct Configurable_Instance *_instance);
// Declaration of functions:
// Definition of function createConfiguration
void f_Configurable_createConfiguration(struct Configurable_Instance *_instance) {
cfg_opt_t opts[] =
	    {
	        CFG_STR("greetings"	, "Lets go to lunch!"	, CFGF_NONE),
	        CFG_INT("times"		, 3						, CFGF_NONE),
	        CFG_END()
	    };
cfg = cfg_init(opts, CFGF_NONE);
}
// Definition of function freeConfiguration
void f_Configurable_freeConfiguration(struct Configurable_Instance *_instance) {
cfg_free(cfg);
}
// Definition of function readConfiguration
void f_Configurable_readConfiguration(struct Configurable_Instance *_instance) {
fprintf(stdout, "Reading configuration file.\n");
if(cfg_parse(cfg, _instance->Configurable_config_file_name_var) == CFG_PARSE_ERROR) {
fprintf(stdout, "Error(s) in config file.\n");

}
_instance->Configurable_greetings_var = cfg_getstr(cfg, "greetings");
_instance->Configurable_times_var = cfg_getint(cfg, "times");
}
// Definition of function writeConfiguration
void f_Configurable_writeConfiguration(struct Configurable_Instance *_instance) {
if(_instance->Configurable_greetings_var != cfg_getstr(cfg, "greetings")) {
cfg_setstr(cfg, "greetings", _instance->Configurable_greetings_var);

}
cfg_setint(cfg, "times", _instance->Configurable_times_var);
FILE *fp = fopen(_instance->Configurable_config_file_name_var, "w");
cfg_print(cfg, fp);
fclose(fp);
}
// Definition of function terminate
void f_Configurable_terminate(struct Configurable_Instance *_instance) {
f_Configurable_writeConfiguration(_instance);
f_Configurable_freeConfiguration(_instance);
exit(0);
}
// Definition of function printGreetings
void f_Configurable_printGreetings(struct Configurable_Instance *_instance) {
printf("%s\n",_instance->Configurable_greetings_var);
}

// On Entry Actions:
void Configurable_OnEntry(int state, struct Configurable_Instance *_instance) {
switch(state) {
case CONFIGURABLE_STATE:{
_instance->Configurable_State = CONFIGURABLE_NULL_MAIN_STATE;
f_Configurable_createConfiguration(_instance);
f_Configurable_readConfiguration(_instance);
Configurable_OnEntry(_instance->Configurable_State, _instance);
break;
}
case CONFIGURABLE_NULL_MAIN_STATE:{
;int16_t i = 0;
while(i < _instance->Configurable_times_var) {
f_Configurable_printGreetings(_instance);
i = i + 1;

}
_instance->Configurable_times_var = _instance->Configurable_times_var + 1;
f_Configurable_terminate(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void Configurable_OnExit(int state, struct Configurable_Instance *_instance) {
switch(state) {
case CONFIGURABLE_STATE:{
Configurable_OnExit(_instance->Configurable_State, _instance);
break;}
case CONFIGURABLE_NULL_MAIN_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:

// Observers for outgoing messages:


// Enqueue incoming messages:
// Message enqueue

// Session functions:

// Message Process Queue:
int Configurable_processMessageQueue(struct Configurable_Instance * _instance) {
fifo_lock(&(_instance->fifo));
if (fifo_empty(&(_instance->fifo))) fifo_wait(&(_instance->fifo));
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue(&(_instance->fifo)) << 8;

code += fifo_dequeue(&(_instance->fifo));

// Switch to call the appropriate handler
switch(code) {
}
return 1;
}

// Thing main:
void Configurable_run(struct Configurable_Instance * _instance) {
if(_instance->initState != -1) {
Configurable_OnEntry(_instance->initState, _instance);
}
    while(1){
        Configurable_processMessageQueue(_instance);
    }
}


