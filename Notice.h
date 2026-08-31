/**
 * @brief Notice object class that houses notification types
 * 
 * enum notifications
 */

#ifndef NOTICE_H
#define NOTICE_H

enum Notice {
    OPEN,
    CLOSE,
    MAX_CAPACITY,
    EVACUATE,
    STAGE_EVENT,
    CLEAN_REQUIRED,
};

#endif