#ifndef __BOARD_SERVICE_COMMAND_TABLE_MAPPER_H__
#define __BOARD_SERVICE_COMMAND_TABLE_MAPPER_H__

#include "board_service_command.h"

#include "post_write/post_write_service_command_handler.h"

#include "board_service_command_table.h"

#define __BOARD_SERVICE_COMMAND_TABLE(number, function_prototype) \
        [number] = function_prototype,

__BOARD_SERVICE_COMMAND_TABLE(POST_LISTUP_SERVICE_ON_BOARD_EXECUTE, post_listup)
__BOARD_SERVICE_COMMAND_TABLE(POST_WRITE_SERVICE_ON_BOARD_EXECUTE, post_write)
__BOARD_SERVICE_COMMAND_TABLE(POST_READ_SERVICE_ON_BOARD_EXECUTE, post_read)
__BOARD_SERVICE_COMMAND_TABLE(POST_EDIT_SERVICE_ON_BOARD_EXECUTE, post_edit)
__BOARD_SERVICE_COMMAND_TABLE(POST_DELETE_SERVICE_ON_BOARD_EXECUTE, post_delete)

#endif