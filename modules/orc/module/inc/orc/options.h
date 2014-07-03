/************************************************************
 * <bsn.cl fy=2013 v=epl>
 * 
 *        Copyright 2013, 2014 Big Switch Networks, Inc.       
 * 
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 * 
 *        http://www.eclipse.org/legal/epl-v10.html
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 * 
 * </bsn.cl>
 ************************************************************
 *
 *
 *
 ***********************************************************/

#ifndef OPTIONS_H
#define OPTIONS_H

#include "orc_logger.h"
#include "orc_driver.h"

#ifndef MAX_DRIVER_PATHS
#define MAX_DRIVER_PATHS 256
#endif

#ifndef BUFLEN
#define BUFLEN 4096     /* general, all purpose buffer length */
#endif

typedef struct orc_options_s {
    char * ifnam_prefix;    /* prefix for interface names, "asic" */
    char * driver;          /* driver.gmod no path*/
    int num_driver_paths;   /* number of path entires */
    char * driver_paths[MAX_DRIVER_PATHS];   /* paths to drivers */
    enum Debug_Thresholds debug; /* mininum debug threshold - higher is more */
    orc_driver_t * drv;
    int verbose;
    int ports_only;         /* no L3 copying; only create ports with TX/RX */
} orc_options_t;


/**
 *  Initialize default options structure
 */
int options_init_default( orc_options_t * options);


/**
 * Parse command line args and update options.
 * Will exit(0) if non-sense options are passed
 */
int options_parse( orc_options_t * options, char * argv[], int argc);

#endif
