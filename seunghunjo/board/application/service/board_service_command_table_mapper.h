#ifndef __BOARD_SERVICE_COMMAND_TABLE_MAPPER_H__
#define __BOARD_SERVICE_COMMAND_TABLE_MAPPER_H__

#include "board_service_command.h"
#include "post_menu/post_menu_service_command_handler.h"
#include "post_write/post_write_service_command_handler.h"
#include "board_off/board_off_service_command_handler.h"
#include "post_read/post_read_service_command_handler.h"
#include "post_edit/post_edit_service_command_handler.h"
#include "post_delete/post_delete_service_command_handler.h"

#define __BOARD_SERVICE_COMMAND_TABLE(number, function_prototype) \
        [number] = function_prototype,

__BOARD_SERVICE_COMMAND_TABLE(POST_MENU_SERVICE_ON_BOARD_EXECUTE, post_menu_service)
__BOARD_SERVICE_COMMAND_TABLE(POST_READ_SERVICE_ON_BOARD_EXECUTE, post_read_service)
__BOARD_SERVICE_COMMAND_TABLE(POST_WRITE_SERVICE_ON_BOARD_EXECUTE, post_write_service)
__BOARD_SERVICE_COMMAND_TABLE(POST_EDIT_SERVICE_ON_BOARD_EXECUTE, post_edit_service)
__BOARD_SERVICE_COMMAND_TABLE(POST_DELETE_SERVICE_ON_BOARD_EXECUTE, post_delete_service)
__BOARD_SERVICE_COMMAND_TABLE(BOARD_OFF_SERVICE_EXECUTE, board_off)



#endif