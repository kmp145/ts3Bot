#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "main.h"


int main(){
/*struct ClientUIFunctions {
	void (*onConnectStatusChangeEvent)              (uint64 serverConnectionHandlerID, int newStatus, unsigned int errorNumber);
*/
/*
unsigned int ts3client_initClientLib(const struct ClientUIFunctions* functionPointers, const struct ClientUIFunctionsRare* functionRarePointers, int usedLogTypes, const char* logFileFolder, const char* resourcesFolder);
*/
	fprintf(stdout, "It works!\n");
	
	/* Create struct */
	struct ClientUIFunctions clUIFuncs;

	/* Initialize clUIFuncs to 0 */
	memset(&clUIFuncs, 0 , sizeof(struct ClientUIFunctions));

	/* Assign those function pointers */
	clUIFuncs.onConnectStatusChangeEvent = 5;
}
