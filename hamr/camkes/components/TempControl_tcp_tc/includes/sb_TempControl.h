// Do not edit this file as it will be overwritten if HAMR codegen is rerun

#ifndef SB_TEMPCONTROL_H
#define SB_TEMPCONTROL_H

#include <sb_types.h>

bool sb_currentTemp_read(union_art_DataContent * value);

bool sb_tempChanged_dequeue(void);

bool sb_fanAck_dequeue(union_art_DataContent *);

bool sb_fanCmd_enqueue(const union_art_DataContent *);

#endif // SB_TEMPCONTROL_H