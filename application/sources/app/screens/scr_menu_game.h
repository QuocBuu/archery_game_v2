#ifndef __SCR_MENU_GAME_H__
#define __SCR_MENU_GAME_H__

#include "fsm.h"
#include "port.h"
#include "message.h"
#include "timer.h"

#include "sys_ctrl.h"
#include "sys_dbg.h"

#include "app.h"
#include "app_dbg.h"
#include "task_list.h"
#include "task_display.h"
#include "view_render.h"

#include "buzzer.h"

#include "scr_charts_game.h"
#include "scr_game_setting.h"
#include "scr_archery_game.h"

// 'Exit_icon', 16x16px
static const unsigned char PROGMEM exit_icon [] = {
	0x00, 0x00, 0x7f, 0x80, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xd8, 0xff, 0xcc, 0xff, 0xc6, 0xfc, 0x3f, 
	0xfc, 0x3f, 0xff, 0xc6, 0xff, 0xcc, 0xff, 0xd8, 0xff, 0xc0, 0xff, 0xc0, 0x7f, 0x80, 0x00, 0x00
};

// 'ARCHERY_icon', 15x15px
static const unsigned char PROGMEM archery_icon [] = {
    0x04, 0x00, 0x02, 0x00, 0x01, 0x00, 0x04, 0xc0, 0x00, 0x40, 0x08, 0x40, 0x00, 0x00, 0x1f, 0xf0, 
	0x00, 0x00, 0x08, 0x40, 0x00, 0x40, 0x04, 0xc0, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00
};

// 'Cham_Cham', 1x64px
static const unsigned char PROGMEM epd_bitmap_Cham_Cham [] = {
	0x80, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 
	0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 
	0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 
	0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00
};

// 'xep_hang_icon', 16x16px
static const unsigned char PROGMEM chart_icon [] = {
	0x10, 0x00, 0x10, 0x00, 0x6c, 0x00, 0x28, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 
	0x44, 0x00, 0x57, 0xe0, 0x54, 0x20, 0x54, 0x20, 0x54, 0x3e, 0x44, 0x22, 0x44, 0x22, 0x7f, 0xfe
};

// 'setting_icon', 16x16px
static const unsigned char PROGMEM setting_icon [] = {
	0x03, 0xc0, 0x12, 0x48, 0x3e, 0x7c, 0x60, 0x06, 0x20, 0x04, 0x23, 0xc4, 0xe4, 0x27, 0x84, 0x21, 
	0x84, 0x21, 0xe4, 0x27, 0x23, 0xc4, 0x20, 0x04, 0x60, 0x06, 0x3e, 0x7c, 0x12, 0x48, 0x03, 0xc0
};

extern view_dynamic_t dyn_view_item_menu_game;

extern view_screen_t scr_menu_game;
extern void scr_menu_game_handle(ak_msg_t* msg);

#endif //__SCR_MENU_GAME_H__
