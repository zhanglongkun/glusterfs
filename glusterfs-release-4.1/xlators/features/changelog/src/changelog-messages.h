/*
 Copyright (c) 2015 Red Hat, Inc. <http://www.redhat.com>
 This file is part of GlusterFS.

 This file is licensed to you under your choice of the GNU Lesser
 General Public License, version 3 or any later version (LGPLv3 or
 later), or the GNU General Public License, version 2 (GPLv2), in all
 cases as published by the Free Software Foundation.
 */

#ifndef _CHANGELOG_MESSAGES_H_
#define _CHANGELOG_MESSAGES_H_

#include "glfs-message-id.h"

/* To add new message IDs, append new identifiers at the end of the list.
 *
 * Never remove a message ID. If it's not used anymore, you can rename it or
 * leave it as it is, but not delete it. This is to prevent reutilization of
 * IDs by other messages.
 *
 * The component name must match one of the entries defined in
 * glfs-message-id.h.
 */

GLFS_MSGID(CHANGELOG,
        CHANGELOG_MSG_OPEN_FAILED,
        CHANGELOG_MSG_NO_MEMORY,
        CHANGELOG_MSG_VOL_MISCONFIGURED,
        CHANGELOG_MSG_RENAME_ERROR,
        CHANGELOG_MSG_READ_ERROR,
        CHANGELOG_MSG_HTIME_ERROR,
        CHANGELOG_MSG_PTHREAD_MUTEX_INIT_FAILED,
        CHANGELOG_MSG_PTHREAD_COND_INIT_FAILED,
        CHANGELOG_MSG_CHILD_MISCONFIGURED,
        CHANGELOG_MSG_DIR_OPTIONS_NOT_SET,
        CHANGELOG_MSG_CLOSE_ERROR,
        CHANGELOG_MSG_PIPE_CREATION_ERROR,
        CHANGELOG_MSG_DICT_GET_FAILED,
        CHANGELOG_MSG_BARRIER_INFO,
        CHANGELOG_MSG_BARRIER_ERROR,
        CHANGELOG_MSG_GET_TIME_OP_FAILED,
        CHANGELOG_MSG_WRITE_FAILED,
        CHANGELOG_MSG_PTHREAD_ERROR,
        CHANGELOG_MSG_INODE_NOT_FOUND,
        CHANGELOG_MSG_FSYNC_OP_FAILED,
        CHANGELOG_MSG_TOTAL_LOG_INFO,
        CHANGELOG_MSG_SNAP_INFO,
        CHANGELOG_MSG_SELECT_FAILED,
        CHANGELOG_MSG_FCNTL_FAILED,
        CHANGELOG_MSG_BNOTIFY_INFO,
        CHANGELOG_MSG_ENTRY_BUF_INFO,
        CHANGELOG_MSG_NOT_ACTIVE,
        CHANGELOG_MSG_LOCAL_INIT_FAILED,
        CHANGELOG_MSG_NOTIFY_REGISTER_FAILED,
        CHANGELOG_MSG_PROGRAM_NAME_REG_FAILED,
        CHANGELOG_MSG_HANDLE_PROBE_ERROR,
        CHANGELOG_MSG_SET_FD_CONTEXT,
        CHANGELOG_MSG_FREEUP_FAILED,
        CHANGELOG_MSG_HTIME_INFO,
        CHANGELOG_MSG_RPC_SUBMIT_REPLY_FAILED,
        CHANGELOG_MSG_RPC_BUILD_ERROR,
        CHANGELOG_MSG_RPC_CONNECT_ERROR,
        CHANGELOG_MSG_RPC_START_ERROR,
        CHANGELOG_MSG_BUFFER_STARVATION_ERROR,
        CHANGELOG_MSG_SCAN_DIR_FAILED,
        CHANGELOG_MSG_FSETXATTR_FAILED,
        CHANGELOG_MSG_FGETXATTR_FAILED,
        CHANGELOG_MSG_CLEANUP_ON_ACTIVE_REF,
        CHANGELOG_MSG_DISPATCH_EVENT_FAILED,
        CHANGELOG_MSG_PUT_BUFFER_FAILED,
        CHANGELOG_MSG_PTHREAD_COND_WAIT_FAILED,
        CHANGELOG_MSG_PTHREAD_CANCEL_FAILED,
        CHANGELOG_MSG_INJECT_FSYNC_FAILED,
        CHANGELOG_MSG_CREATE_FRAME_FAILED,
        CHANGELOG_MSG_FSTAT_OP_FAILED,
        CHANGELOG_MSG_LSEEK_OP_FAILED,
        CHANGELOG_MSG_STRSTR_OP_FAILED,
        CHANGELOG_MSG_UNLINK_OP_FAILED,
        CHANGELOG_MSG_DETECT_EMPTY_CHANGELOG_FAILED,
        CHANGELOG_MSG_READLINK_OP_FAILED,
        CHANGELOG_MSG_EXPLICIT_ROLLOVER_FAILED
);

#endif /* !_CHANGELOG_MESSAGES_H_ */