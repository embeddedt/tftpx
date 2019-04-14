/**********************************************
 * Author: ideawu(www.ideawu.net)
 * Date: 2007-06
 * File: client.h
 *********************************************/

#include "tftpx.h"

#define LINE_BUF_SIZE 128

void do_list(int sock, char *dir);
void do_get(char *remote_file, char *local_file);
void do_put(char *filename);
