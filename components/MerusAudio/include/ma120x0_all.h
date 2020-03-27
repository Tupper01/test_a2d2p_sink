/*---------------------------------------------------------------------------------------*/
/*   Merus Audio MA120x0 register map                                                    */
/*                                                                                       */
/*   Provides : Defines for registers and symbols in merus audio amplifiers              */
/*              Macros for set and get content of symbols                                */
/*              Read-modify-write on write to symbols less then 8 bits                   */
/*                                                                                       */
/*   Symbols is a collection of 1 to 8 bits within a single address                      */
/*                                                                                       */
/*   Provided as is for internal use only - do not copy - do not share                   */
/*                                                                                       */
/*   Timestamp                        :                         Thu Feb 23 23:06:51 2017 */
/*   Created from database            :                     ma12070_register_spec_rev6_1 */
/*   Errors and updates please contact:       Jorgen Kragh Jakobsen, jkj@merus-audio.com */
/*---------------------------------------------------------------------------------------*/

#include <stdint.h>


#ifndef _MA120X0_H_ 
#define _MA120X0_H_ 


//------------------------------------------------------------------------------manualPM---
// Select Manual PowerMode control 
#define MA_manualPM__a 0
#define MA_manualPM__len 1
#define MA_manualPM__mask 0x40
#define MA_manualPM__shift 0x06
#define MA_manualPM__reset 0x00
#define set_obj_MA_manualPM(o,y) ({ uint8_t __ret = o.read(0); o.write(0,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_manualPM(y) ({ uint8_t __ret = ma_read_byte(0); ma_write_byte(0,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_manualPM(o) (o.read(0) & 0x40)>>6 
#define get_MA_manualPM() ( ma_read_byte(0) & 0x40)>>6 
//------------------------------------------------------------------------------PM_man---
// Manual selected power mode 
#define MA_PM_man__a 0
#define MA_PM_man__len 2
#define MA_PM_man__mask 0x30
#define MA_PM_man__shift 0x04
#define MA_PM_man__reset 0x03
#define set_obj_MA_PM_man(o,y) ({ uint8_t __ret = o.read(0); o.write(0,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define set_MA_PM_man(y) ({ uint8_t __ret = ma_read_byte(0); ma_write_byte(0,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define get_obj_MA_PM_man(o) (o.read(0) & 0x30)>>4 
#define get_MA_PM_man() ( ma_read_byte(0) & 0x30)>>4 
//------------------------------------------------------------------------------PM_max---
// Highest Powermode in Auto power mode 
#define MA_PM_max__a 0
#define MA_PM_max__len 2
#define MA_PM_max__mask 0x0c
#define MA_PM_max__shift 0x02
#define MA_PM_max__reset 0x03
#define set_obj_MA_PM_max(o,y) ({ uint8_t __ret = o.read(0); o.write(0,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define set_MA_PM_max(y) ({ uint8_t __ret = ma_read_byte(0); ma_write_byte(0,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define get_obj_MA_PM_max(o) (o.read(0) & 0x0c)>>2 
#define get_MA_PM_max() ( ma_read_byte(0) & 0x0c)>>2 
//------------------------------------------------------------------------------PM_min---
// Lowest Powermode in Auto power mode 
#define MA_PM_min__a 0
#define MA_PM_min__len 2
#define MA_PM_min__mask 0x03
#define MA_PM_min__shift 0x00
#define MA_PM_min__reset 0x01
#define set_obj_MA_PM_min(o,y) ({ uint8_t __ret = o.read(0); o.write(0,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_PM_min(y) ({ uint8_t __ret = ma_read_byte(0); ma_write_byte(0,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_PM_min(o) (o.read(0) & 0x03)>>0 
#define get_MA_PM_min() ( ma_read_byte(0) & 0x03)>>0 
//------------------------------------------------------------------------------sw_en_force---
// High to force switchContorllers to drive switches 
#define MA_sw_en_force__a 0
#define MA_sw_en_force__len 1
#define MA_sw_en_force__mask 0x80
#define MA_sw_en_force__shift 0x07
#define MA_sw_en_force__reset 0x00
#define set_obj_MA_sw_en_force(o,y) ({ uint8_t __ret = o.read(0); o.write(0,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_sw_en_force(y) ({ uint8_t __ret = ma_read_byte(0); ma_write_byte(0,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_sw_en_force(o) (o.read(0) & 0x80)>>7 
#define get_MA_sw_en_force() ( ma_read_byte(0) & 0x80)>>7 
//------------------------------------------------------------------------------Mthr_1to2---
// Mod. index threshold value for PM1=>PM2 change. 
#define MA_Mthr_1to2__a 1
#define MA_Mthr_1to2__len 8
#define MA_Mthr_1to2__mask 0xff
#define MA_Mthr_1to2__shift 0x00
#define MA_Mthr_1to2__reset 0x3c
#define set_obj_MA_Mthr_1to2(o,y) o.write(1,y);
#define set_MA_Mthr_1to2(y) ma_write_byte(1,y);
#define get_obj_MA_Mthr_1to2(o) (o.read(1) & 0xff)>>0 
#define get_MA_Mthr_1to2() ( ma_read_byte(1) & 0xff)>>0 
//------------------------------------------------------------------------------Mthr_2to1---
// Mod. index threshold value for PM2=>PM1 change. 
#define MA_Mthr_2to1__a 2
#define MA_Mthr_2to1__len 8
#define MA_Mthr_2to1__mask 0xff
#define MA_Mthr_2to1__shift 0x00
#define MA_Mthr_2to1__reset 0x32
#define set_obj_MA_Mthr_2to1(o,y) o.write(2,y);
#define set_MA_Mthr_2to1(y) ma_write_byte(2,y);
#define get_obj_MA_Mthr_2to1(o) (o.read(2) & 0xff)>>0 
#define get_MA_Mthr_2to1() ( ma_read_byte(2) & 0xff)>>0 
//------------------------------------------------------------------------------Mthr_2to3---
// Mod. index threshold value for PM2=>PM3 change. 
#define MA_Mthr_2to3__a 3
#define MA_Mthr_2to3__len 8
#define MA_Mthr_2to3__mask 0xff
#define MA_Mthr_2to3__shift 0x00
#define MA_Mthr_2to3__reset 0x5a
#define set_obj_MA_Mthr_2to3(o,y) o.write(3,y);
#define set_MA_Mthr_2to3(y) ma_write_byte(3,y);
#define get_obj_MA_Mthr_2to3(o) (o.read(3) & 0xff)>>0 
#define get_MA_Mthr_2to3() ( ma_read_byte(3) & 0xff)>>0 
//------------------------------------------------------------------------------Mthr_3to2---
// Mod. index threshold value for PM3=>PM2 change. 
#define MA_Mthr_3to2__a 4
#define MA_Mthr_3to2__len 8
#define MA_Mthr_3to2__mask 0xff
#define MA_Mthr_3to2__shift 0x00
#define MA_Mthr_3to2__reset 0x50
#define set_obj_MA_Mthr_3to2(o,y) o.write(4,y);
#define set_MA_Mthr_3to2(y) ma_write_byte(4,y);
#define get_obj_MA_Mthr_3to2(o) (o.read(4) & 0xff)>>0 
#define get_MA_Mthr_3to2() ( ma_read_byte(4) & 0xff)>>0 
//------------------------------------------------------------------------------DPsteps---
// Gate drive signaling length 
#define MA_DPsteps__a 5
#define MA_DPsteps__len 3
#define MA_DPsteps__mask 0x07
#define MA_DPsteps__shift 0x00
#define MA_DPsteps__reset 0x03
#define set_obj_MA_DPsteps(o,y) ({ uint8_t __ret = o.read(5); o.write(5,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_DPsteps(y) ({ uint8_t __ret = ma_read_byte(5); ma_write_byte(5,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_DPsteps(o) (o.read(5) & 0x07)>>0 
#define get_MA_DPsteps() ( ma_read_byte(5) & 0x07)>>0 
//------------------------------------------------------------------------------inp_afir_test_en---
// Enable inp afir prbs gerator and checker  
#define MA_inp_afir_test_en__a 5
#define MA_inp_afir_test_en__len 1
#define MA_inp_afir_test_en__mask 0x08
#define MA_inp_afir_test_en__shift 0x03
#define MA_inp_afir_test_en__reset 0x00
#define set_obj_MA_inp_afir_test_en(o,y) ({ uint8_t __ret = o.read(5); o.write(5,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_inp_afir_test_en(y) ({ uint8_t __ret = ma_read_byte(5); ma_write_byte(5,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_inp_afir_test_en(o) (o.read(5) & 0x08)>>3 
#define get_MA_inp_afir_test_en() ( ma_read_byte(5) & 0x08)>>3 
//------------------------------------------------------------------------------inp_afir_test_ctrl---
// Control afir bist. "00" > disable, "01" => JKJ mode. 
#define MA_inp_afir_test_ctrl__a 5
#define MA_inp_afir_test_ctrl__len 2
#define MA_inp_afir_test_ctrl__mask 0x30
#define MA_inp_afir_test_ctrl__shift 0x04
#define MA_inp_afir_test_ctrl__reset 0x00
#define set_obj_MA_inp_afir_test_ctrl(o,y) ({ uint8_t __ret = o.read(5); o.write(5,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define set_MA_inp_afir_test_ctrl(y) ({ uint8_t __ret = ma_read_byte(5); ma_write_byte(5,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define get_obj_MA_inp_afir_test_ctrl(o) (o.read(5) & 0x30)>>4 
#define get_MA_inp_afir_test_ctrl() ( ma_read_byte(5) & 0x30)>>4 
//------------------------------------------------------------------------------debug_gpo---
// General porpuse outputs from dig core 
#define MA_debug_gpo__a 6
#define MA_debug_gpo__len 4
#define MA_debug_gpo__mask 0x0f
#define MA_debug_gpo__shift 0x00
#define MA_debug_gpo__reset 0x00
#define set_obj_MA_debug_gpo(o,y) ({ uint8_t __ret = o.read(6); o.write(6,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_debug_gpo(y) ({ uint8_t __ret = ma_read_byte(6); ma_write_byte(6,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_debug_gpo(o) (o.read(6) & 0x0f)>>0 
#define get_MA_debug_gpo() ( ma_read_byte(6) & 0x0f)>>0 
//------------------------------------------------------------------------------out_spare---
// Spare output  
#define MA_out_spare__a 6
#define MA_out_spare__len 4
#define MA_out_spare__mask 0xf0
#define MA_out_spare__shift 0x04
#define MA_out_spare__reset 0x00
#define set_obj_MA_out_spare(o,y) ({ uint8_t __ret = o.read(6); o.write(6,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define set_MA_out_spare(y) ({ uint8_t __ret = ma_read_byte(6); ma_write_byte(6,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define get_obj_MA_out_spare(o) (o.read(6) & 0xf0)>>4 
#define get_MA_out_spare() ( ma_read_byte(6) & 0xf0)>>4 
//------------------------------------------------------------------------------dcu1_dis---
// Disable DCU 1 
#define MA_dcu1_dis__a 7
#define MA_dcu1_dis__len 1
#define MA_dcu1_dis__mask 0x80
#define MA_dcu1_dis__shift 0x07
#define MA_dcu1_dis__reset 0x00
#define set_obj_MA_dcu1_dis(o,y) ({ uint8_t __ret = o.read(7); o.write(7,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_dcu1_dis(y) ({ uint8_t __ret = ma_read_byte(7); ma_write_byte(7,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_dcu1_dis(o) (o.read(7) & 0x80)>>7 
#define get_MA_dcu1_dis() ( ma_read_byte(7) & 0x80)>>7 
//------------------------------------------------------------------------------remote_nset---
// Remote nset control 
#define MA_remote_nset__a 7
#define MA_remote_nset__len 4
#define MA_remote_nset__mask 0x0f
#define MA_remote_nset__shift 0x00
#define MA_remote_nset__reset 0x00
#define set_obj_MA_remote_nset(o,y) ({ uint8_t __ret = o.read(7); o.write(7,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_remote_nset(y) ({ uint8_t __ret = ma_read_byte(7); ma_write_byte(7,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_remote_nset(o) (o.read(7) & 0x0f)>>0 
#define get_MA_remote_nset() ( ma_read_byte(7) & 0x0f)>>0 
//------------------------------------------------------------------------------pvdd_uvlo_dis---
// High to disable/override Pvdd UVLO 
#define MA_pvdd_uvlo_dis__a 7
#define MA_pvdd_uvlo_dis__len 1
#define MA_pvdd_uvlo_dis__mask 0x20
#define MA_pvdd_uvlo_dis__shift 0x05
#define MA_pvdd_uvlo_dis__reset 0x00
#define set_obj_MA_pvdd_uvlo_dis(o,y) ({ uint8_t __ret = o.read(7); o.write(7,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_pvdd_uvlo_dis(y) ({ uint8_t __ret = ma_read_byte(7); ma_write_byte(7,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_pvdd_uvlo_dis(o) (o.read(7) & 0x20)>>5 
#define get_MA_pvdd_uvlo_dis() ( ma_read_byte(7) & 0x20)>>5 
//------------------------------------------------------------------------------dcu0_dis---
// Disable DCU 0 
#define MA_dcu0_dis__a 7
#define MA_dcu0_dis__len 1
#define MA_dcu0_dis__mask 0x40
#define MA_dcu0_dis__shift 0x06
#define MA_dcu0_dis__reset 0x00
#define set_obj_MA_dcu0_dis(o,y) ({ uint8_t __ret = o.read(7); o.write(7,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_dcu0_dis(y) ({ uint8_t __ret = ma_read_byte(7); ma_write_byte(7,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_dcu0_dis(o) (o.read(7) & 0x40)>>6 
#define get_MA_dcu0_dis() ( ma_read_byte(7) & 0x40)>>6 
//------------------------------------------------------------------------------hvb_uvp_dis---
// High to disable gate driver supply ("hvboot) UVP 
#define MA_hvb_uvp_dis__a 7
#define MA_hvb_uvp_dis__len 1
#define MA_hvb_uvp_dis__mask 0x10
#define MA_hvb_uvp_dis__shift 0x04
#define MA_hvb_uvp_dis__reset 0x00
#define set_obj_MA_hvb_uvp_dis(o,y) ({ uint8_t __ret = o.read(7); o.write(7,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_hvb_uvp_dis(y) ({ uint8_t __ret = ma_read_byte(7); ma_write_byte(7,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_hvb_uvp_dis(o) (o.read(7) & 0x10)>>4 
#define get_MA_hvb_uvp_dis() ( ma_read_byte(7) & 0x10)>>4 
//------------------------------------------------------------------------------pwmClkDiv_nom---
// PWM default clock divider value 
#define MA_pwmClkDiv_nom__a 8
#define MA_pwmClkDiv_nom__len 8
#define MA_pwmClkDiv_nom__mask 0xff
#define MA_pwmClkDiv_nom__shift 0x00
#define MA_pwmClkDiv_nom__reset 0x26
#define set_obj_MA_pwmClkDiv_nom(o,y) o.write(8,y);
#define set_MA_pwmClkDiv_nom(y) ma_write_byte(8,y);
#define get_obj_MA_pwmClkDiv_nom(o) (o.read(8) & 0xff)>>0 
#define get_MA_pwmClkDiv_nom() ( ma_read_byte(8) & 0xff)>>0 
//------------------------------------------------------------------------------dpwm_Nhigh---
// Number of high clock cycles in PWM cycle 
#define MA_dpwm_Nhigh__a 9
#define MA_dpwm_Nhigh__len 8
#define MA_dpwm_Nhigh__mask 0xff
#define MA_dpwm_Nhigh__shift 0x00
#define MA_dpwm_Nhigh__reset 0x15
#define set_obj_MA_dpwm_Nhigh(o,y) o.write(9,y);
#define set_MA_dpwm_Nhigh(y) ma_write_byte(9,y);
#define get_obj_MA_dpwm_Nhigh(o) (o.read(9) & 0xff)>>0 
#define get_MA_dpwm_Nhigh() ( ma_read_byte(9) & 0xff)>>0 
//------------------------------------------------------------------------------useDPWM---
// High to use dpwm, low to use internel test pwm 
#define MA_useDPWM__a 10
#define MA_useDPWM__len 1
#define MA_useDPWM__mask 0x01
#define MA_useDPWM__shift 0x00
#define MA_useDPWM__reset 0x00
#define set_obj_MA_useDPWM(o,y) ({ uint8_t __ret = o.read(10); o.write(10,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_useDPWM(y) ({ uint8_t __ret = ma_read_byte(10); ma_write_byte(10,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_useDPWM(o) (o.read(10) & 0x01)>>0 
#define get_MA_useDPWM() ( ma_read_byte(10) & 0x01)>>0 
//------------------------------------------------------------------------------pwr_en---
// Manual power stage enable, if applicable. 
#define MA_pwr_en__a 10
#define MA_pwr_en__len 1
#define MA_pwr_en__mask 0x10
#define MA_pwr_en__shift 0x04
#define MA_pwr_en__reset 0x00
#define set_obj_MA_pwr_en(o,y) ({ uint8_t __ret = o.read(10); o.write(10,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_pwr_en(y) ({ uint8_t __ret = ma_read_byte(10); ma_write_byte(10,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_pwr_en(o) (o.read(10) & 0x10)>>4 
#define get_MA_pwr_en() ( ma_read_byte(10) & 0x10)>>4 
//------------------------------------------------------------------------------use_smart_unmute---
// Use smart unmute if 1, controlled by external pin nmute 
#define MA_use_smart_unmute__a 10
#define MA_use_smart_unmute__len 1
#define MA_use_smart_unmute__mask 0x20
#define MA_use_smart_unmute__shift 0x05
#define MA_use_smart_unmute__reset 0x00
#define set_obj_MA_use_smart_unmute(o,y) ({ uint8_t __ret = o.read(10); o.write(10,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_use_smart_unmute(y) ({ uint8_t __ret = ma_read_byte(10); ma_write_byte(10,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_use_smart_unmute(o) (o.read(10) & 0x20)>>5 
#define get_MA_use_smart_unmute() ( ma_read_byte(10) & 0x20)>>5 
//------------------------------------------------------------------------------ocp_latch_en---
// High to use permanently latching level-2 OCP 
#define MA_ocp_latch_en__a 10
#define MA_ocp_latch_en__len 1
#define MA_ocp_latch_en__mask 0x02
#define MA_ocp_latch_en__shift 0x01
#define MA_ocp_latch_en__reset 0x00
#define set_obj_MA_ocp_latch_en(o,y) ({ uint8_t __ret = o.read(10); o.write(10,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define set_MA_ocp_latch_en(y) ({ uint8_t __ret = ma_read_byte(10); ma_write_byte(10,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define get_obj_MA_ocp_latch_en(o) (o.read(10) & 0x02)>>1 
#define get_MA_ocp_latch_en() ( ma_read_byte(10) & 0x02)>>1 
//------------------------------------------------------------------------------enableCMctrl---
// High to enable BTL-mode CM control system 
#define MA_enableCMctrl__a 10
#define MA_enableCMctrl__len 1
#define MA_enableCMctrl__mask 0x08
#define MA_enableCMctrl__shift 0x03
#define MA_enableCMctrl__reset 0x01
#define set_obj_MA_enableCMctrl(o,y) ({ uint8_t __ret = o.read(10); o.write(10,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_enableCMctrl(y) ({ uint8_t __ret = ma_read_byte(10); ma_write_byte(10,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_enableCMctrl(o) (o.read(10) & 0x08)>>3 
#define get_MA_enableCMctrl() ( ma_read_byte(10) & 0x08)>>3 
//------------------------------------------------------------------------------rssMethod---
// RSS algorithm setting; 0=single-cycle, 1=phase-swap 
#define MA_rssMethod__a 10
#define MA_rssMethod__len 1
#define MA_rssMethod__mask 0x04
#define MA_rssMethod__shift 0x02
#define MA_rssMethod__reset 0x01
#define set_obj_MA_rssMethod(o,y) ({ uint8_t __ret = o.read(10); o.write(10,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define set_MA_rssMethod(y) ({ uint8_t __ret = ma_read_byte(10); ma_write_byte(10,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define get_obj_MA_rssMethod(o) (o.read(10) & 0x04)>>2 
#define get_MA_rssMethod() ( ma_read_byte(10) & 0x04)>>2 
//------------------------------------------------------------------------------vcf_prot_dis---
// 0: use prot. 1: disable vcf prot in DCUs 
#define MA_vcf_prot_dis__a 10
#define MA_vcf_prot_dis__len 1
#define MA_vcf_prot_dis__mask 0x40
#define MA_vcf_prot_dis__shift 0x06
#define MA_vcf_prot_dis__reset 0x00
#define set_obj_MA_vcf_prot_dis(o,y) ({ uint8_t __ret = o.read(10); o.write(10,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_vcf_prot_dis(y) ({ uint8_t __ret = ma_read_byte(10); ma_write_byte(10,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_vcf_prot_dis(o) (o.read(10) & 0x40)>>6 
#define get_MA_vcf_prot_dis() ( ma_read_byte(10) & 0x40)>>6 
//------------------------------------------------------------------------------lf_clamp_en---
// High (default) to enable LF int2+3 clamping on clip 
#define MA_lf_clamp_en__a 10
#define MA_lf_clamp_en__len 1
#define MA_lf_clamp_en__mask 0x80
#define MA_lf_clamp_en__shift 0x07
#define MA_lf_clamp_en__reset 0x00
#define set_obj_MA_lf_clamp_en(o,y) ({ uint8_t __ret = o.read(10); o.write(10,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_lf_clamp_en(y) ({ uint8_t __ret = ma_read_byte(10); ma_write_byte(10,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_lf_clamp_en(o) (o.read(10) & 0x80)>>7 
#define get_MA_lf_clamp_en() ( ma_read_byte(10) & 0x80)>>7 
//------------------------------------------------------------------------------enableBal---
// Enable Cfly balancing 
#define MA_enableBal__a 11
#define MA_enableBal__len 1
#define MA_enableBal__mask 0x80
#define MA_enableBal__shift 0x07
#define MA_enableBal__reset 0x01
#define set_obj_MA_enableBal(o,y) ({ uint8_t __ret = o.read(11); o.write(11,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_enableBal(y) ({ uint8_t __ret = ma_read_byte(11); ma_write_byte(11,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_enableBal(o) (o.read(11) & 0x80)>>7 
#define get_MA_enableBal() ( ma_read_byte(11) & 0x80)>>7 
//------------------------------------------------------------------------------modMode---
// Modulation mode (0 peak-mode, single-edge 1:un-latched dual egde  2:latched dual-edge ) 
#define MA_modMode__a 11
#define MA_modMode__len 2
#define MA_modMode__mask 0x60
#define MA_modMode__shift 0x05
#define MA_modMode__reset 0x02
#define set_obj_MA_modMode(o,y) ({ uint8_t __ret = o.read(11); o.write(11,(__ret&0x9f)|((y<<5)&0x60)); }) 
#define set_MA_modMode(y) ({ uint8_t __ret = ma_read_byte(11); ma_write_byte(11,(__ret&0x9f)|((y<<5)&0x60)); }) 
#define get_obj_MA_modMode(o) (o.read(11) & 0x60)>>5 
#define get_MA_modMode() ( ma_read_byte(11) & 0x60)>>5 
//------------------------------------------------------------------------------doStretch---
// 1 Enable PWM stretch algorithme, 0 disable 
#define MA_doStretch__a 11
#define MA_doStretch__len 1
#define MA_doStretch__mask 0x10
#define MA_doStretch__shift 0x04
#define MA_doStretch__reset 0x00
#define set_obj_MA_doStretch(o,y) ({ uint8_t __ret = o.read(11); o.write(11,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_doStretch(y) ({ uint8_t __ret = ma_read_byte(11); ma_write_byte(11,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_doStretch(o) (o.read(11) & 0x10)>>4 
#define get_MA_doStretch() ( ma_read_byte(11) & 0x10)>>4 
//------------------------------------------------------------------------------lf_disable_dac---
// High to disable loopfilter unmute dac 
#define MA_lf_disable_dac__a 11
#define MA_lf_disable_dac__len 1
#define MA_lf_disable_dac__mask 0x08
#define MA_lf_disable_dac__shift 0x03
#define MA_lf_disable_dac__reset 0x00
#define set_obj_MA_lf_disable_dac(o,y) ({ uint8_t __ret = o.read(11); o.write(11,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_lf_disable_dac(y) ({ uint8_t __ret = ma_read_byte(11); ma_write_byte(11,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_lf_disable_dac(o) (o.read(11) & 0x08)>>3 
#define get_MA_lf_disable_dac() ( ma_read_byte(11) & 0x08)>>3 
//------------------------------------------------------------------------------mode_itrim---
// enable debug output0 equal 10x trimmed ibias output 
#define MA_mode_itrim__a 12
#define MA_mode_itrim__len 1
#define MA_mode_itrim__mask 0x01
#define MA_mode_itrim__shift 0x00
#define MA_mode_itrim__reset 0x00
#define set_obj_MA_mode_itrim(o,y) ({ uint8_t __ret = o.read(12); o.write(12,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_mode_itrim(y) ({ uint8_t __ret = ma_read_byte(12); ma_write_byte(12,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_mode_itrim(o) (o.read(12) & 0x01)>>0 
#define get_MA_mode_itrim() ( ma_read_byte(12) & 0x01)>>0 
//------------------------------------------------------------------------------calib_start---
// Restart calib algorithm 
#define MA_calib_start__a 13
#define MA_calib_start__len 1
#define MA_calib_start__mask 0x20
#define MA_calib_start__shift 0x05
#define MA_calib_start__reset 0x00
#define set_obj_MA_calib_start(o,y) ({ uint8_t __ret = o.read(13); o.write(13,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_calib_start(y) ({ uint8_t __ret = ma_read_byte(13); ma_write_byte(13,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_calib_start(o) (o.read(13) & 0x20)>>5 
#define get_MA_calib_start() ( ma_read_byte(13) & 0x20)>>5 
//------------------------------------------------------------------------------mode_calib---
// High to let calib block control ctrim and ftrim (for automatic trimming) 
#define MA_mode_calib__a 13
#define MA_mode_calib__len 1
#define MA_mode_calib__mask 0x40
#define MA_mode_calib__shift 0x06
#define MA_mode_calib__reset 0x00
#define set_obj_MA_mode_calib(o,y) ({ uint8_t __ret = o.read(13); o.write(13,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_mode_calib(y) ({ uint8_t __ret = ma_read_byte(13); ma_write_byte(13,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_mode_calib(o) (o.read(13) & 0x40)>>6 
#define get_MA_mode_calib() ( ma_read_byte(13) & 0x40)>>6 
//------------------------------------------------------------------------------limitD---
// -- High to force PWM transitions in every cycle, low to allow D=0 and 1 
#define MA_limitD__a 13
#define MA_limitD__len 1
#define MA_limitD__mask 0x80
#define MA_limitD__shift 0x07
#define MA_limitD__reset 0x00
#define set_obj_MA_limitD(o,y) ({ uint8_t __ret = o.read(13); o.write(13,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_limitD(y) ({ uint8_t __ret = ma_read_byte(13); ma_write_byte(13,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_limitD(o) (o.read(13) & 0x80)>>7 
#define get_MA_limitD() ( ma_read_byte(13) & 0x80)>>7 
//------------------------------------------------------------------------------debug_add---
// Debug analog mode : 3 bit block address. Digital mode debug_out1 (x2_err) mux select  
#define MA_debug_add__a 14
#define MA_debug_add__len 6
#define MA_debug_add__mask 0x3f
#define MA_debug_add__shift 0x00
#define MA_debug_add__reset 0x00
#define set_obj_MA_debug_add(o,y) ({ uint8_t __ret = o.read(14); o.write(14,(__ret&0xc0)|((y<<0)&0x3f)); }) 
#define set_MA_debug_add(y) ({ uint8_t __ret = ma_read_byte(14); ma_write_byte(14,(__ret&0xc0)|((y<<0)&0x3f)); }) 
#define get_obj_MA_debug_add(o) (o.read(14) & 0x3f)>>0 
#define get_MA_debug_add() ( ma_read_byte(14) & 0x3f)>>0 
//------------------------------------------------------------------------------debug_sub---
// Debug analog mode : 3 bit sub function.  Digital mode debug_out0 (x1_clip) mux select 
#define MA_debug_sub__a 15
#define MA_debug_sub__len 6
#define MA_debug_sub__mask 0x3f
#define MA_debug_sub__shift 0x00
#define MA_debug_sub__reset 0x00
#define set_obj_MA_debug_sub(o,y) ({ uint8_t __ret = o.read(15); o.write(15,(__ret&0xc0)|((y<<0)&0x3f)); }) 
#define set_MA_debug_sub(y) ({ uint8_t __ret = ma_read_byte(15); ma_write_byte(15,(__ret&0xc0)|((y<<0)&0x3f)); }) 
#define get_obj_MA_debug_sub(o) (o.read(15) & 0x3f)>>0 
#define get_MA_debug_sub() ( ma_read_byte(15) & 0x3f)>>0 
//------------------------------------------------------------------------------pwmClkHigh---
// PWM set-reset pulse length 
#define MA_pwmClkHigh__a 16
#define MA_pwmClkHigh__len 2
#define MA_pwmClkHigh__mask 0x0c
#define MA_pwmClkHigh__shift 0x02
#define MA_pwmClkHigh__reset 0x01
#define set_obj_MA_pwmClkHigh(o,y) ({ uint8_t __ret = o.read(16); o.write(16,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define set_MA_pwmClkHigh(y) ({ uint8_t __ret = ma_read_byte(16); ma_write_byte(16,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define get_obj_MA_pwmClkHigh(o) (o.read(16) & 0x0c)>>2 
#define get_MA_pwmClkHigh() ( ma_read_byte(16) & 0x0c)>>2 
//------------------------------------------------------------------------------pwmLockCount---
// PWM minimum high-low pulse duration 
#define MA_pwmLockCount__a 16
#define MA_pwmLockCount__len 2
#define MA_pwmLockCount__mask 0x30
#define MA_pwmLockCount__shift 0x04
#define MA_pwmLockCount__reset 0x01
#define set_obj_MA_pwmLockCount(o,y) ({ uint8_t __ret = o.read(16); o.write(16,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define set_MA_pwmLockCount(y) ({ uint8_t __ret = ma_read_byte(16); ma_write_byte(16,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define get_obj_MA_pwmLockCount(o) (o.read(16) & 0x30)>>4 
#define get_MA_pwmLockCount() ( ma_read_byte(16) & 0x30)>>4 
//------------------------------------------------------------------------------sync_dcus---
// High to synchronize dcu0 and dcu1 pwm phases. When low the two dcus are free-running. In spread spectrum mode (set by freqMode) the dcus are always free-running. 
#define MA_sync_dcus__a 16
#define MA_sync_dcus__len 1
#define MA_sync_dcus__mask 0x02
#define MA_sync_dcus__shift 0x01
#define MA_sync_dcus__reset 0x01
#define set_obj_MA_sync_dcus(o,y) ({ uint8_t __ret = o.read(16); o.write(16,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define set_MA_sync_dcus(y) ({ uint8_t __ret = ma_read_byte(16); ma_write_byte(16,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define get_obj_MA_sync_dcus(o) (o.read(16) & 0x02)>>1 
#define get_MA_sync_dcus() ( ma_read_byte(16) & 0x02)>>1 
//------------------------------------------------------------------------------crg_bypass---
// Loop filter clip recovery gater bypass 
#define MA_crg_bypass__a 16
#define MA_crg_bypass__len 1
#define MA_crg_bypass__mask 0x01
#define MA_crg_bypass__shift 0x00
#define MA_crg_bypass__reset 0x00
#define set_obj_MA_crg_bypass(o,y) ({ uint8_t __ret = o.read(16); o.write(16,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_crg_bypass(y) ({ uint8_t __ret = ma_read_byte(16); ma_write_byte(16,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_crg_bypass(o) (o.read(16) & 0x01)>>0 
#define get_MA_crg_bypass() ( ma_read_byte(16) & 0x01)>>0 
//------------------------------------------------------------------------------bal_force_lvl0_scheme---
// High to swap balTypes 2+3 with 4+5. 
#define MA_bal_force_lvl0_scheme__a 16
#define MA_bal_force_lvl0_scheme__len 1
#define MA_bal_force_lvl0_scheme__mask 0x40
#define MA_bal_force_lvl0_scheme__shift 0x06
#define MA_bal_force_lvl0_scheme__reset 0x00
#define set_obj_MA_bal_force_lvl0_scheme(o,y) ({ uint8_t __ret = o.read(16); o.write(16,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_bal_force_lvl0_scheme(y) ({ uint8_t __ret = ma_read_byte(16); ma_write_byte(16,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_bal_force_lvl0_scheme(o) (o.read(16) & 0x40)>>6 
#define get_MA_bal_force_lvl0_scheme() ( ma_read_byte(16) & 0x40)>>6 
//------------------------------------------------------------------------------PMcfg_BTL_A.lf_gain_ol---
// BTL PM cfg A loop gain setting. 0=low, 1=high 
#define MA_PMcfg_BTL_A__lf_gain_ol__a 17
#define MA_PMcfg_BTL_A__lf_gain_ol__len 1
#define MA_PMcfg_BTL_A__lf_gain_ol__mask 0x01
#define MA_PMcfg_BTL_A__lf_gain_ol__shift 0x00
#define MA_PMcfg_BTL_A__lf_gain_ol__reset 0x01
#define set_obj_MA_PMcfg_BTL_A__lf_gain_ol(o,y) ({ uint8_t __ret = o.read(17); o.write(17,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_PMcfg_BTL_A__lf_gain_ol(y) ({ uint8_t __ret = ma_read_byte(17); ma_write_byte(17,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_PMcfg_BTL_A__lf_gain_ol(o) (o.read(17) & 0x01)>>0 
#define get_MA_PMcfg_BTL_A__lf_gain_ol() ( ma_read_byte(17) & 0x01)>>0 
//------------------------------------------------------------------------------PMcfg_BTL_A.freqDiv---
// BTL PM cfg A PWM freq setting. 0=1/1, 1=1/2, 2=1/4 
#define MA_PMcfg_BTL_A__freqDiv__a 17
#define MA_PMcfg_BTL_A__freqDiv__len 2
#define MA_PMcfg_BTL_A__freqDiv__mask 0x06
#define MA_PMcfg_BTL_A__freqDiv__shift 0x01
#define MA_PMcfg_BTL_A__freqDiv__reset 0x00
#define set_obj_MA_PMcfg_BTL_A__freqDiv(o,y) ({ uint8_t __ret = o.read(17); o.write(17,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define set_MA_PMcfg_BTL_A__freqDiv(y) ({ uint8_t __ret = ma_read_byte(17); ma_write_byte(17,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define get_obj_MA_PMcfg_BTL_A__freqDiv(o) (o.read(17) & 0x06)>>1 
#define get_MA_PMcfg_BTL_A__freqDiv() ( ma_read_byte(17) & 0x06)>>1 
//------------------------------------------------------------------------------PMcfg_BTL_A.modType---
// BTL PM cfg A modulation type.  
#define MA_PMcfg_BTL_A__modType__a 17
#define MA_PMcfg_BTL_A__modType__len 2
#define MA_PMcfg_BTL_A__modType__mask 0x18
#define MA_PMcfg_BTL_A__modType__shift 0x03
#define MA_PMcfg_BTL_A__modType__reset 0x01
#define set_obj_MA_PMcfg_BTL_A__modType(o,y) ({ uint8_t __ret = o.read(17); o.write(17,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define set_MA_PMcfg_BTL_A__modType(y) ({ uint8_t __ret = ma_read_byte(17); ma_write_byte(17,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define get_obj_MA_PMcfg_BTL_A__modType(o) (o.read(17) & 0x18)>>3 
#define get_MA_PMcfg_BTL_A__modType() ( ma_read_byte(17) & 0x18)>>3 
//------------------------------------------------------------------------------PMcfg_BTL_B.modType---
//  
#define MA_PMcfg_BTL_B__modType__a 18
#define MA_PMcfg_BTL_B__modType__len 2
#define MA_PMcfg_BTL_B__modType__mask 0x18
#define MA_PMcfg_BTL_B__modType__shift 0x03
#define MA_PMcfg_BTL_B__modType__reset 0x02
#define set_obj_MA_PMcfg_BTL_B__modType(o,y) ({ uint8_t __ret = o.read(18); o.write(18,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define set_MA_PMcfg_BTL_B__modType(y) ({ uint8_t __ret = ma_read_byte(18); ma_write_byte(18,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define get_obj_MA_PMcfg_BTL_B__modType(o) (o.read(18) & 0x18)>>3 
#define get_MA_PMcfg_BTL_B__modType() ( ma_read_byte(18) & 0x18)>>3 
//------------------------------------------------------------------------------PMcfg_BTL_B.freqDiv---
//  
#define MA_PMcfg_BTL_B__freqDiv__a 18
#define MA_PMcfg_BTL_B__freqDiv__len 2
#define MA_PMcfg_BTL_B__freqDiv__mask 0x06
#define MA_PMcfg_BTL_B__freqDiv__shift 0x01
#define MA_PMcfg_BTL_B__freqDiv__reset 0x01
#define set_obj_MA_PMcfg_BTL_B__freqDiv(o,y) ({ uint8_t __ret = o.read(18); o.write(18,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define set_MA_PMcfg_BTL_B__freqDiv(y) ({ uint8_t __ret = ma_read_byte(18); ma_write_byte(18,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define get_obj_MA_PMcfg_BTL_B__freqDiv(o) (o.read(18) & 0x06)>>1 
#define get_MA_PMcfg_BTL_B__freqDiv() ( ma_read_byte(18) & 0x06)>>1 
//------------------------------------------------------------------------------PMcfg_BTL_B.lf_gain_ol---
//  
#define MA_PMcfg_BTL_B__lf_gain_ol__a 18
#define MA_PMcfg_BTL_B__lf_gain_ol__len 1
#define MA_PMcfg_BTL_B__lf_gain_ol__mask 0x01
#define MA_PMcfg_BTL_B__lf_gain_ol__shift 0x00
#define MA_PMcfg_BTL_B__lf_gain_ol__reset 0x01
#define set_obj_MA_PMcfg_BTL_B__lf_gain_ol(o,y) ({ uint8_t __ret = o.read(18); o.write(18,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_PMcfg_BTL_B__lf_gain_ol(y) ({ uint8_t __ret = ma_read_byte(18); ma_write_byte(18,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_PMcfg_BTL_B__lf_gain_ol(o) (o.read(18) & 0x01)>>0 
#define get_MA_PMcfg_BTL_B__lf_gain_ol() ( ma_read_byte(18) & 0x01)>>0 
//------------------------------------------------------------------------------PMcfg_BTL_C.freqDiv---
//  
#define MA_PMcfg_BTL_C__freqDiv__a 19
#define MA_PMcfg_BTL_C__freqDiv__len 2
#define MA_PMcfg_BTL_C__freqDiv__mask 0x06
#define MA_PMcfg_BTL_C__freqDiv__shift 0x01
#define MA_PMcfg_BTL_C__freqDiv__reset 0x01
#define set_obj_MA_PMcfg_BTL_C__freqDiv(o,y) ({ uint8_t __ret = o.read(19); o.write(19,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define set_MA_PMcfg_BTL_C__freqDiv(y) ({ uint8_t __ret = ma_read_byte(19); ma_write_byte(19,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define get_obj_MA_PMcfg_BTL_C__freqDiv(o) (o.read(19) & 0x06)>>1 
#define get_MA_PMcfg_BTL_C__freqDiv() ( ma_read_byte(19) & 0x06)>>1 
//------------------------------------------------------------------------------PMcfg_BTL_C.modType---
//  
#define MA_PMcfg_BTL_C__modType__a 19
#define MA_PMcfg_BTL_C__modType__len 2
#define MA_PMcfg_BTL_C__modType__mask 0x18
#define MA_PMcfg_BTL_C__modType__shift 0x03
#define MA_PMcfg_BTL_C__modType__reset 0x01
#define set_obj_MA_PMcfg_BTL_C__modType(o,y) ({ uint8_t __ret = o.read(19); o.write(19,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define set_MA_PMcfg_BTL_C__modType(y) ({ uint8_t __ret = ma_read_byte(19); ma_write_byte(19,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define get_obj_MA_PMcfg_BTL_C__modType(o) (o.read(19) & 0x18)>>3 
#define get_MA_PMcfg_BTL_C__modType() ( ma_read_byte(19) & 0x18)>>3 
//------------------------------------------------------------------------------PMcfg_BTL_C.lf_gain_ol---
//  
#define MA_PMcfg_BTL_C__lf_gain_ol__a 19
#define MA_PMcfg_BTL_C__lf_gain_ol__len 1
#define MA_PMcfg_BTL_C__lf_gain_ol__mask 0x01
#define MA_PMcfg_BTL_C__lf_gain_ol__shift 0x00
#define MA_PMcfg_BTL_C__lf_gain_ol__reset 0x00
#define set_obj_MA_PMcfg_BTL_C__lf_gain_ol(o,y) ({ uint8_t __ret = o.read(19); o.write(19,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_PMcfg_BTL_C__lf_gain_ol(y) ({ uint8_t __ret = ma_read_byte(19); ma_write_byte(19,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_PMcfg_BTL_C__lf_gain_ol(o) (o.read(19) & 0x01)>>0 
#define get_MA_PMcfg_BTL_C__lf_gain_ol() ( ma_read_byte(19) & 0x01)>>0 
//------------------------------------------------------------------------------PMcfg_BTL_D.modType---
//  
#define MA_PMcfg_BTL_D__modType__a 20
#define MA_PMcfg_BTL_D__modType__len 2
#define MA_PMcfg_BTL_D__modType__mask 0x18
#define MA_PMcfg_BTL_D__modType__shift 0x03
#define MA_PMcfg_BTL_D__modType__reset 0x02
#define set_obj_MA_PMcfg_BTL_D__modType(o,y) ({ uint8_t __ret = o.read(20); o.write(20,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define set_MA_PMcfg_BTL_D__modType(y) ({ uint8_t __ret = ma_read_byte(20); ma_write_byte(20,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define get_obj_MA_PMcfg_BTL_D__modType(o) (o.read(20) & 0x18)>>3 
#define get_MA_PMcfg_BTL_D__modType() ( ma_read_byte(20) & 0x18)>>3 
//------------------------------------------------------------------------------PMcfg_BTL_D.freqDiv---
//  
#define MA_PMcfg_BTL_D__freqDiv__a 20
#define MA_PMcfg_BTL_D__freqDiv__len 2
#define MA_PMcfg_BTL_D__freqDiv__mask 0x06
#define MA_PMcfg_BTL_D__freqDiv__shift 0x01
#define MA_PMcfg_BTL_D__freqDiv__reset 0x02
#define set_obj_MA_PMcfg_BTL_D__freqDiv(o,y) ({ uint8_t __ret = o.read(20); o.write(20,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define set_MA_PMcfg_BTL_D__freqDiv(y) ({ uint8_t __ret = ma_read_byte(20); ma_write_byte(20,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define get_obj_MA_PMcfg_BTL_D__freqDiv(o) (o.read(20) & 0x06)>>1 
#define get_MA_PMcfg_BTL_D__freqDiv() ( ma_read_byte(20) & 0x06)>>1 
//------------------------------------------------------------------------------PMcfg_BTL_D.lf_gain_ol---
//  
#define MA_PMcfg_BTL_D__lf_gain_ol__a 20
#define MA_PMcfg_BTL_D__lf_gain_ol__len 1
#define MA_PMcfg_BTL_D__lf_gain_ol__mask 0x01
#define MA_PMcfg_BTL_D__lf_gain_ol__shift 0x00
#define MA_PMcfg_BTL_D__lf_gain_ol__reset 0x00
#define set_obj_MA_PMcfg_BTL_D__lf_gain_ol(o,y) ({ uint8_t __ret = o.read(20); o.write(20,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_PMcfg_BTL_D__lf_gain_ol(y) ({ uint8_t __ret = ma_read_byte(20); ma_write_byte(20,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_PMcfg_BTL_D__lf_gain_ol(o) (o.read(20) & 0x01)>>0 
#define get_MA_PMcfg_BTL_D__lf_gain_ol() ( ma_read_byte(20) & 0x01)>>0 
//------------------------------------------------------------------------------PMcfg_SE_A.modType---
//  
#define MA_PMcfg_SE_A__modType__a 21
#define MA_PMcfg_SE_A__modType__len 2
#define MA_PMcfg_SE_A__modType__mask 0x18
#define MA_PMcfg_SE_A__modType__shift 0x03
#define MA_PMcfg_SE_A__modType__reset 0x01
#define set_obj_MA_PMcfg_SE_A__modType(o,y) ({ uint8_t __ret = o.read(21); o.write(21,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define set_MA_PMcfg_SE_A__modType(y) ({ uint8_t __ret = ma_read_byte(21); ma_write_byte(21,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define get_obj_MA_PMcfg_SE_A__modType(o) (o.read(21) & 0x18)>>3 
#define get_MA_PMcfg_SE_A__modType() ( ma_read_byte(21) & 0x18)>>3 
//------------------------------------------------------------------------------PMcfg_SE_A.freqDiv---
//  
#define MA_PMcfg_SE_A__freqDiv__a 21
#define MA_PMcfg_SE_A__freqDiv__len 2
#define MA_PMcfg_SE_A__freqDiv__mask 0x06
#define MA_PMcfg_SE_A__freqDiv__shift 0x01
#define MA_PMcfg_SE_A__freqDiv__reset 0x00
#define set_obj_MA_PMcfg_SE_A__freqDiv(o,y) ({ uint8_t __ret = o.read(21); o.write(21,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define set_MA_PMcfg_SE_A__freqDiv(y) ({ uint8_t __ret = ma_read_byte(21); ma_write_byte(21,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define get_obj_MA_PMcfg_SE_A__freqDiv(o) (o.read(21) & 0x06)>>1 
#define get_MA_PMcfg_SE_A__freqDiv() ( ma_read_byte(21) & 0x06)>>1 
//------------------------------------------------------------------------------PMcfg_SE_A.lf_gain_ol---
//  
#define MA_PMcfg_SE_A__lf_gain_ol__a 21
#define MA_PMcfg_SE_A__lf_gain_ol__len 1
#define MA_PMcfg_SE_A__lf_gain_ol__mask 0x01
#define MA_PMcfg_SE_A__lf_gain_ol__shift 0x00
#define MA_PMcfg_SE_A__lf_gain_ol__reset 0x01
#define set_obj_MA_PMcfg_SE_A__lf_gain_ol(o,y) ({ uint8_t __ret = o.read(21); o.write(21,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_PMcfg_SE_A__lf_gain_ol(y) ({ uint8_t __ret = ma_read_byte(21); ma_write_byte(21,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_PMcfg_SE_A__lf_gain_ol(o) (o.read(21) & 0x01)>>0 
#define get_MA_PMcfg_SE_A__lf_gain_ol() ( ma_read_byte(21) & 0x01)>>0 
//------------------------------------------------------------------------------PMcfg_SE_B.lf_gain_ol---
//  
#define MA_PMcfg_SE_B__lf_gain_ol__a 22
#define MA_PMcfg_SE_B__lf_gain_ol__len 1
#define MA_PMcfg_SE_B__lf_gain_ol__mask 0x01
#define MA_PMcfg_SE_B__lf_gain_ol__shift 0x00
#define MA_PMcfg_SE_B__lf_gain_ol__reset 0x00
#define set_obj_MA_PMcfg_SE_B__lf_gain_ol(o,y) ({ uint8_t __ret = o.read(22); o.write(22,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_PMcfg_SE_B__lf_gain_ol(y) ({ uint8_t __ret = ma_read_byte(22); ma_write_byte(22,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_PMcfg_SE_B__lf_gain_ol(o) (o.read(22) & 0x01)>>0 
#define get_MA_PMcfg_SE_B__lf_gain_ol() ( ma_read_byte(22) & 0x01)>>0 
//------------------------------------------------------------------------------PMcfg_SE_B.freqDiv---
//  
#define MA_PMcfg_SE_B__freqDiv__a 22
#define MA_PMcfg_SE_B__freqDiv__len 2
#define MA_PMcfg_SE_B__freqDiv__mask 0x06
#define MA_PMcfg_SE_B__freqDiv__shift 0x01
#define MA_PMcfg_SE_B__freqDiv__reset 0x01
#define set_obj_MA_PMcfg_SE_B__freqDiv(o,y) ({ uint8_t __ret = o.read(22); o.write(22,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define set_MA_PMcfg_SE_B__freqDiv(y) ({ uint8_t __ret = ma_read_byte(22); ma_write_byte(22,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define get_obj_MA_PMcfg_SE_B__freqDiv(o) (o.read(22) & 0x06)>>1 
#define get_MA_PMcfg_SE_B__freqDiv() ( ma_read_byte(22) & 0x06)>>1 
//------------------------------------------------------------------------------PMcfg_SE_B.modType---
//  
#define MA_PMcfg_SE_B__modType__a 22
#define MA_PMcfg_SE_B__modType__len 2
#define MA_PMcfg_SE_B__modType__mask 0x18
#define MA_PMcfg_SE_B__modType__shift 0x03
#define MA_PMcfg_SE_B__modType__reset 0x01
#define set_obj_MA_PMcfg_SE_B__modType(o,y) ({ uint8_t __ret = o.read(22); o.write(22,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define set_MA_PMcfg_SE_B__modType(y) ({ uint8_t __ret = ma_read_byte(22); ma_write_byte(22,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define get_obj_MA_PMcfg_SE_B__modType(o) (o.read(22) & 0x18)>>3 
#define get_MA_PMcfg_SE_B__modType() ( ma_read_byte(22) & 0x18)>>3 
//------------------------------------------------------------------------------balWaitCount_PM1---
// PM1 balancing period. 
#define MA_balWaitCount_PM1__a 23
#define MA_balWaitCount_PM1__len 8
#define MA_balWaitCount_PM1__mask 0xff
#define MA_balWaitCount_PM1__shift 0x00
#define MA_balWaitCount_PM1__reset 0x14
#define set_obj_MA_balWaitCount_PM1(o,y) o.write(23,y);
#define set_MA_balWaitCount_PM1(y) ma_write_byte(23,y);
#define get_obj_MA_balWaitCount_PM1(o) (o.read(23) & 0xff)>>0 
#define get_MA_balWaitCount_PM1() ( ma_read_byte(23) & 0xff)>>0 
//------------------------------------------------------------------------------balWaitCount_PM2---
// PM2 balancing period. 
#define MA_balWaitCount_PM2__a 24
#define MA_balWaitCount_PM2__len 8
#define MA_balWaitCount_PM2__mask 0xff
#define MA_balWaitCount_PM2__shift 0x00
#define MA_balWaitCount_PM2__reset 0x14
#define set_obj_MA_balWaitCount_PM2(o,y) o.write(24,y);
#define set_MA_balWaitCount_PM2(y) ma_write_byte(24,y);
#define get_obj_MA_balWaitCount_PM2(o) (o.read(24) & 0xff)>>0 
#define get_MA_balWaitCount_PM2() ( ma_read_byte(24) & 0xff)>>0 
//------------------------------------------------------------------------------balWaitCount_PM3---
// PM3 balancing period. 
#define MA_balWaitCount_PM3__a 25
#define MA_balWaitCount_PM3__len 8
#define MA_balWaitCount_PM3__mask 0xff
#define MA_balWaitCount_PM3__shift 0x00
#define MA_balWaitCount_PM3__reset 0x1a
#define set_obj_MA_balWaitCount_PM3(o,y) o.write(25,y);
#define set_MA_balWaitCount_PM3(y) ma_write_byte(25,y);
#define get_obj_MA_balWaitCount_PM3(o) (o.read(25) & 0xff)>>0 
#define get_MA_balWaitCount_PM3() ( ma_read_byte(25) & 0xff)>>0 
//------------------------------------------------------------------------------useSpread_PM1---
// PM1 PWM spread-spectrum mode on/off. 
#define MA_useSpread_PM1__a 26
#define MA_useSpread_PM1__len 1
#define MA_useSpread_PM1__mask 0x40
#define MA_useSpread_PM1__shift 0x06
#define MA_useSpread_PM1__reset 0x00
#define set_obj_MA_useSpread_PM1(o,y) ({ uint8_t __ret = o.read(26); o.write(26,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_useSpread_PM1(y) ({ uint8_t __ret = ma_read_byte(26); ma_write_byte(26,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_useSpread_PM1(o) (o.read(26) & 0x40)>>6 
#define get_MA_useSpread_PM1() ( ma_read_byte(26) & 0x40)>>6 
//------------------------------------------------------------------------------DTsteps_PM1---
// PM1 dead time setting [10ns steps]. 
#define MA_DTsteps_PM1__a 26
#define MA_DTsteps_PM1__len 3
#define MA_DTsteps_PM1__mask 0x38
#define MA_DTsteps_PM1__shift 0x03
#define MA_DTsteps_PM1__reset 0x04
#define set_obj_MA_DTsteps_PM1(o,y) ({ uint8_t __ret = o.read(26); o.write(26,(__ret&0xc7)|((y<<3)&0x38)); }) 
#define set_MA_DTsteps_PM1(y) ({ uint8_t __ret = ma_read_byte(26); ma_write_byte(26,(__ret&0xc7)|((y<<3)&0x38)); }) 
#define get_obj_MA_DTsteps_PM1(o) (o.read(26) & 0x38)>>3 
#define get_MA_DTsteps_PM1() ( ma_read_byte(26) & 0x38)>>3 
//------------------------------------------------------------------------------balType_PM1---
// PM1 balancing sensor scheme. 
#define MA_balType_PM1__a 26
#define MA_balType_PM1__len 3
#define MA_balType_PM1__mask 0x07
#define MA_balType_PM1__shift 0x00
#define MA_balType_PM1__reset 0x00
#define set_obj_MA_balType_PM1(o,y) ({ uint8_t __ret = o.read(26); o.write(26,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_balType_PM1(y) ({ uint8_t __ret = ma_read_byte(26); ma_write_byte(26,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_balType_PM1(o) (o.read(26) & 0x07)>>0 
#define get_MA_balType_PM1() ( ma_read_byte(26) & 0x07)>>0 
//------------------------------------------------------------------------------useSpread_PM2---
// PM2 PWM spread-spectrum mode on/off. 
#define MA_useSpread_PM2__a 27
#define MA_useSpread_PM2__len 1
#define MA_useSpread_PM2__mask 0x40
#define MA_useSpread_PM2__shift 0x06
#define MA_useSpread_PM2__reset 0x00
#define set_obj_MA_useSpread_PM2(o,y) ({ uint8_t __ret = o.read(27); o.write(27,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_useSpread_PM2(y) ({ uint8_t __ret = ma_read_byte(27); ma_write_byte(27,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_useSpread_PM2(o) (o.read(27) & 0x40)>>6 
#define get_MA_useSpread_PM2() ( ma_read_byte(27) & 0x40)>>6 
//------------------------------------------------------------------------------DTsteps_PM2---
// PM2 dead time setting [10ns steps]. 
#define MA_DTsteps_PM2__a 27
#define MA_DTsteps_PM2__len 3
#define MA_DTsteps_PM2__mask 0x38
#define MA_DTsteps_PM2__shift 0x03
#define MA_DTsteps_PM2__reset 0x03
#define set_obj_MA_DTsteps_PM2(o,y) ({ uint8_t __ret = o.read(27); o.write(27,(__ret&0xc7)|((y<<3)&0x38)); }) 
#define set_MA_DTsteps_PM2(y) ({ uint8_t __ret = ma_read_byte(27); ma_write_byte(27,(__ret&0xc7)|((y<<3)&0x38)); }) 
#define get_obj_MA_DTsteps_PM2(o) (o.read(27) & 0x38)>>3 
#define get_MA_DTsteps_PM2() ( ma_read_byte(27) & 0x38)>>3 
//------------------------------------------------------------------------------balType_PM2---
// PM2 balancing sensor scheme. 
#define MA_balType_PM2__a 27
#define MA_balType_PM2__len 3
#define MA_balType_PM2__mask 0x07
#define MA_balType_PM2__shift 0x00
#define MA_balType_PM2__reset 0x01
#define set_obj_MA_balType_PM2(o,y) ({ uint8_t __ret = o.read(27); o.write(27,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_balType_PM2(y) ({ uint8_t __ret = ma_read_byte(27); ma_write_byte(27,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_balType_PM2(o) (o.read(27) & 0x07)>>0 
#define get_MA_balType_PM2() ( ma_read_byte(27) & 0x07)>>0 
//------------------------------------------------------------------------------useSpread_PM3---
// PM3 PWM spread-spectrum mode on/off. 
#define MA_useSpread_PM3__a 28
#define MA_useSpread_PM3__len 1
#define MA_useSpread_PM3__mask 0x40
#define MA_useSpread_PM3__shift 0x06
#define MA_useSpread_PM3__reset 0x00
#define set_obj_MA_useSpread_PM3(o,y) ({ uint8_t __ret = o.read(28); o.write(28,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_useSpread_PM3(y) ({ uint8_t __ret = ma_read_byte(28); ma_write_byte(28,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_useSpread_PM3(o) (o.read(28) & 0x40)>>6 
#define get_MA_useSpread_PM3() ( ma_read_byte(28) & 0x40)>>6 
//------------------------------------------------------------------------------DTsteps_PM3---
// PM3 dead time setting [10ns steps]. 
#define MA_DTsteps_PM3__a 28
#define MA_DTsteps_PM3__len 3
#define MA_DTsteps_PM3__mask 0x38
#define MA_DTsteps_PM3__shift 0x03
#define MA_DTsteps_PM3__reset 0x01
#define set_obj_MA_DTsteps_PM3(o,y) ({ uint8_t __ret = o.read(28); o.write(28,(__ret&0xc7)|((y<<3)&0x38)); }) 
#define set_MA_DTsteps_PM3(y) ({ uint8_t __ret = ma_read_byte(28); ma_write_byte(28,(__ret&0xc7)|((y<<3)&0x38)); }) 
#define get_obj_MA_DTsteps_PM3(o) (o.read(28) & 0x38)>>3 
#define get_MA_DTsteps_PM3() ( ma_read_byte(28) & 0x38)>>3 
//------------------------------------------------------------------------------balType_PM3---
// PM3 balancing sensor scheme. 
#define MA_balType_PM3__a 28
#define MA_balType_PM3__len 3
#define MA_balType_PM3__mask 0x07
#define MA_balType_PM3__shift 0x00
#define MA_balType_PM3__reset 0x03
#define set_obj_MA_balType_PM3(o,y) ({ uint8_t __ret = o.read(28); o.write(28,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_balType_PM3(y) ({ uint8_t __ret = ma_read_byte(28); ma_write_byte(28,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_balType_PM3(o) (o.read(28) & 0x07)>>0 
#define get_MA_balType_PM3() ( ma_read_byte(28) & 0x07)>>0 
//------------------------------------------------------------------------------PMprofile---
// PM profile select. Valid presets: 0-1-2-3-4. 5=> custom profile. 
#define MA_PMprofile__a 29
#define MA_PMprofile__len 3
#define MA_PMprofile__mask 0x07
#define MA_PMprofile__shift 0x00
#define MA_PMprofile__reset 0x00
#define set_obj_MA_PMprofile(o,y) ({ uint8_t __ret = o.read(29); o.write(29,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_PMprofile(y) ({ uint8_t __ret = ma_read_byte(29); ma_write_byte(29,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_PMprofile(o) (o.read(29) & 0x07)>>0 
#define get_MA_PMprofile() ( ma_read_byte(29) & 0x07)>>0 
//------------------------------------------------------------------------------PM3_man---
// Custom profile PM3 contents. 0=>A, 1=>B, 2=>C, 3=>D 
#define MA_PM3_man__a 30
#define MA_PM3_man__len 2
#define MA_PM3_man__mask 0x30
#define MA_PM3_man__shift 0x04
#define MA_PM3_man__reset 0x02
#define set_obj_MA_PM3_man(o,y) ({ uint8_t __ret = o.read(30); o.write(30,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define set_MA_PM3_man(y) ({ uint8_t __ret = ma_read_byte(30); ma_write_byte(30,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define get_obj_MA_PM3_man(o) (o.read(30) & 0x30)>>4 
#define get_MA_PM3_man() ( ma_read_byte(30) & 0x30)>>4 
//------------------------------------------------------------------------------PM2_man---
// Custom profile PM2 contents. 0=>A, 1=>B, 2=>C, 3=>D 
#define MA_PM2_man__a 30
#define MA_PM2_man__len 2
#define MA_PM2_man__mask 0x0c
#define MA_PM2_man__shift 0x02
#define MA_PM2_man__reset 0x03
#define set_obj_MA_PM2_man(o,y) ({ uint8_t __ret = o.read(30); o.write(30,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define set_MA_PM2_man(y) ({ uint8_t __ret = ma_read_byte(30); ma_write_byte(30,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define get_obj_MA_PM2_man(o) (o.read(30) & 0x0c)>>2 
#define get_MA_PM2_man() ( ma_read_byte(30) & 0x0c)>>2 
//------------------------------------------------------------------------------PM1_man---
// Custom profile PM1 contents. 0=>A, 1=>B, 2=>C, 3=>D 
#define MA_PM1_man__a 30
#define MA_PM1_man__len 2
#define MA_PM1_man__mask 0x03
#define MA_PM1_man__shift 0x00
#define MA_PM1_man__reset 0x03
#define set_obj_MA_PM1_man(o,y) ({ uint8_t __ret = o.read(30); o.write(30,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_PM1_man(y) ({ uint8_t __ret = ma_read_byte(30); ma_write_byte(30,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_PM1_man(o) (o.read(30) & 0x03)>>0 
#define get_MA_PM1_man() ( ma_read_byte(30) & 0x03)>>0 
//------------------------------------------------------------------------------ctrim_ext---
// High to force ctrim_reg to drive system ctrim bus 
#define MA_ctrim_ext__a 32
#define MA_ctrim_ext__len 1
#define MA_ctrim_ext__mask 0x40
#define MA_ctrim_ext__shift 0x06
#define MA_ctrim_ext__reset 0x00
#define set_obj_MA_ctrim_ext(o,y) ({ uint8_t __ret = o.read(32); o.write(32,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_ctrim_ext(y) ({ uint8_t __ret = ma_read_byte(32); ma_write_byte(32,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_ctrim_ext(o) (o.read(32) & 0x40)>>6 
#define get_MA_ctrim_ext() ( ma_read_byte(32) & 0x40)>>6 
//------------------------------------------------------------------------------ctrim_reg---
// Register bank ctrim setting (for debug.) 
#define MA_ctrim_reg__a 32
#define MA_ctrim_reg__len 6
#define MA_ctrim_reg__mask 0x3f
#define MA_ctrim_reg__shift 0x00
#define MA_ctrim_reg__reset 0x1f
#define set_obj_MA_ctrim_reg(o,y) ({ uint8_t __ret = o.read(32); o.write(32,(__ret&0xc0)|((y<<0)&0x3f)); }) 
#define set_MA_ctrim_reg(y) ({ uint8_t __ret = ma_read_byte(32); ma_write_byte(32,(__ret&0xc0)|((y<<0)&0x3f)); }) 
#define get_obj_MA_ctrim_reg(o) (o.read(32) & 0x3f)>>0 
#define get_MA_ctrim_reg() ( ma_read_byte(32) & 0x3f)>>0 
//------------------------------------------------------------------------------ocp_latch_clear---
// Low-high clears current OCP latched condition. 
#define MA_ocp_latch_clear__a 32
#define MA_ocp_latch_clear__len 1
#define MA_ocp_latch_clear__mask 0x80
#define MA_ocp_latch_clear__shift 0x07
#define MA_ocp_latch_clear__reset 0x00
#define set_obj_MA_ocp_latch_clear(o,y) ({ uint8_t __ret = o.read(32); o.write(32,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_ocp_latch_clear(y) ({ uint8_t __ret = ma_read_byte(32); ma_write_byte(32,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_ocp_latch_clear(o) (o.read(32) & 0x80)>>7 
#define get_MA_ocp_latch_clear() ( ma_read_byte(32) & 0x80)>>7 
//------------------------------------------------------------------------------ftrim_reg---
// Register bank 100MHz VCO trim setting (for debug.) 
#define MA_ftrim_reg__a 33
#define MA_ftrim_reg__len 4
#define MA_ftrim_reg__mask 0x0f
#define MA_ftrim_reg__shift 0x00
#define MA_ftrim_reg__reset 0x07
#define set_obj_MA_ftrim_reg(o,y) ({ uint8_t __ret = o.read(33); o.write(33,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_ftrim_reg(y) ({ uint8_t __ret = ma_read_byte(33); ma_write_byte(33,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_ftrim_reg(o) (o.read(33) & 0x0f)>>0 
#define get_MA_ftrim_reg() ( ma_read_byte(33) & 0x0f)>>0 
//------------------------------------------------------------------------------ftrim_ext---
// High to force resiter ftrim vector to system ftrim (100MHz VCO trim) bus 
#define MA_ftrim_ext__a 33
#define MA_ftrim_ext__len 1
#define MA_ftrim_ext__mask 0x20
#define MA_ftrim_ext__shift 0x05
#define MA_ftrim_ext__reset 0x00
#define set_obj_MA_ftrim_ext(o,y) ({ uint8_t __ret = o.read(33); o.write(33,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_ftrim_ext(y) ({ uint8_t __ret = ma_read_byte(33); ma_write_byte(33,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_ftrim_ext(o) (o.read(33) & 0x20)>>5 
#define get_MA_ftrim_ext() ( ma_read_byte(33) & 0x20)>>5 
//------------------------------------------------------------------------------pll_lock_force---
// High to force pll_lock high 
#define MA_pll_lock_force__a 33
#define MA_pll_lock_force__len 1
#define MA_pll_lock_force__mask 0x10
#define MA_pll_lock_force__shift 0x04
#define MA_pll_lock_force__reset 0x00
#define set_obj_MA_pll_lock_force(o,y) ({ uint8_t __ret = o.read(33); o.write(33,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_pll_lock_force(y) ({ uint8_t __ret = ma_read_byte(33); ma_write_byte(33,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_pll_lock_force(o) (o.read(33) & 0x10)>>4 
#define get_MA_pll_lock_force() ( ma_read_byte(33) & 0x10)>>4 
//------------------------------------------------------------------------------ftrim_offset---
// Extra backup trim for VCO 
#define MA_ftrim_offset__a 33
#define MA_ftrim_offset__len 2
#define MA_ftrim_offset__mask 0xc0
#define MA_ftrim_offset__shift 0x06
#define MA_ftrim_offset__reset 0x00
#define set_obj_MA_ftrim_offset(o,y) ({ uint8_t __ret = o.read(33); o.write(33,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define set_MA_ftrim_offset(y) ({ uint8_t __ret = ma_read_byte(33); ma_write_byte(33,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define get_obj_MA_ftrim_offset(o) (o.read(33) & 0xc0)>>6 
#define get_MA_ftrim_offset() ( ma_read_byte(33) & 0xc0)>>6 
//------------------------------------------------------------------------------pll_div_ext---
// High to use register PLL divider settings 
#define MA_pll_div_ext__a 34
#define MA_pll_div_ext__len 1
#define MA_pll_div_ext__mask 0x01
#define MA_pll_div_ext__shift 0x00
#define MA_pll_div_ext__reset 0x00
#define set_obj_MA_pll_div_ext(o,y) ({ uint8_t __ret = o.read(34); o.write(34,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_pll_div_ext(y) ({ uint8_t __ret = ma_read_byte(34); ma_write_byte(34,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_pll_div_ext(o) (o.read(34) & 0x01)>>0 
#define get_MA_pll_div_ext() ( ma_read_byte(34) & 0x01)>>0 
//------------------------------------------------------------------------------pll_div_fb_reg---
// Register bank PLL FB div setting 
#define MA_pll_div_fb_reg__a 34
#define MA_pll_div_fb_reg__len 1
#define MA_pll_div_fb_reg__mask 0x08
#define MA_pll_div_fb_reg__shift 0x03
#define MA_pll_div_fb_reg__reset 0x00
#define set_obj_MA_pll_div_fb_reg(o,y) ({ uint8_t __ret = o.read(34); o.write(34,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_pll_div_fb_reg(y) ({ uint8_t __ret = ma_read_byte(34); ma_write_byte(34,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_pll_div_fb_reg(o) (o.read(34) & 0x08)>>3 
#define get_MA_pll_div_fb_reg() ( ma_read_byte(34) & 0x08)>>3 
//------------------------------------------------------------------------------pll_div_ref_reg---
// Register bank PLL ref div setting 
#define MA_pll_div_ref_reg__a 34
#define MA_pll_div_ref_reg__len 2
#define MA_pll_div_ref_reg__mask 0x06
#define MA_pll_div_ref_reg__shift 0x01
#define MA_pll_div_ref_reg__reset 0x01
#define set_obj_MA_pll_div_ref_reg(o,y) ({ uint8_t __ret = o.read(34); o.write(34,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define set_MA_pll_div_ref_reg(y) ({ uint8_t __ret = ma_read_byte(34); ma_write_byte(34,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define get_obj_MA_pll_div_ref_reg(o) (o.read(34) & 0x06)>>1 
#define get_MA_pll_div_ref_reg() ( ma_read_byte(34) & 0x06)>>1 
//------------------------------------------------------------------------------pll_debug_adr---
// PLL int. debug address 
#define MA_pll_debug_adr__a 34
#define MA_pll_debug_adr__len 4
#define MA_pll_debug_adr__mask 0xf0
#define MA_pll_debug_adr__shift 0x04
#define MA_pll_debug_adr__reset 0x00
#define set_obj_MA_pll_debug_adr(o,y) ({ uint8_t __ret = o.read(34); o.write(34,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define set_MA_pll_debug_adr(y) ({ uint8_t __ret = ma_read_byte(34); ma_write_byte(34,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define get_obj_MA_pll_debug_adr(o) (o.read(34) & 0xf0)>>4 
#define get_MA_pll_debug_adr() ( ma_read_byte(34) & 0xf0)>>4 
//------------------------------------------------------------------------------fb_data_in0---
// Data for fuse bank 0 programming 
#define MA_fb_data_in0__a 35
#define MA_fb_data_in0__len 1
#define MA_fb_data_in0__mask 0x01
#define MA_fb_data_in0__shift 0x00
#define MA_fb_data_in0__reset 0x00
#define set_obj_MA_fb_data_in0(o,y) ({ uint8_t __ret = o.read(35); o.write(35,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_fb_data_in0(y) ({ uint8_t __ret = ma_read_byte(35); ma_write_byte(35,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_fb_data_in0(o) (o.read(35) & 0x01)>>0 
#define get_MA_fb_data_in0() ( ma_read_byte(35) & 0x01)>>0 
//------------------------------------------------------------------------------fb_adr---
// Fuse bank address for programming 
#define MA_fb_adr__a 35
#define MA_fb_adr__len 6
#define MA_fb_adr__mask 0xfc
#define MA_fb_adr__shift 0x02
#define MA_fb_adr__reset 0x00
#define set_obj_MA_fb_adr(o,y) ({ uint8_t __ret = o.read(35); o.write(35,(__ret&0x03)|((y<<2)&0xfc)); }) 
#define set_MA_fb_adr(y) ({ uint8_t __ret = ma_read_byte(35); ma_write_byte(35,(__ret&0x03)|((y<<2)&0xfc)); }) 
#define get_obj_MA_fb_adr(o) (o.read(35) & 0xfc)>>2 
#define get_MA_fb_adr() ( ma_read_byte(35) & 0xfc)>>2 
//------------------------------------------------------------------------------fb_data_in1---
// Data for fuse bank 1 programming 
#define MA_fb_data_in1__a 35
#define MA_fb_data_in1__len 1
#define MA_fb_data_in1__mask 0x02
#define MA_fb_data_in1__shift 0x01
#define MA_fb_data_in1__reset 0x00
#define set_obj_MA_fb_data_in1(o,y) ({ uint8_t __ret = o.read(35); o.write(35,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define set_MA_fb_data_in1(y) ({ uint8_t __ret = ma_read_byte(35); ma_write_byte(35,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define get_obj_MA_fb_data_in1(o) (o.read(35) & 0x02)>>1 
#define get_MA_fb_data_in1() ( ma_read_byte(35) & 0x02)>>1 
//------------------------------------------------------------------------------fb_write---
// High to start fuse bank write 
#define MA_fb_write__a 36
#define MA_fb_write__len 1
#define MA_fb_write__mask 0x20
#define MA_fb_write__shift 0x05
#define MA_fb_write__reset 0x00
#define set_obj_MA_fb_write(o,y) ({ uint8_t __ret = o.read(36); o.write(36,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_fb_write(y) ({ uint8_t __ret = ma_read_byte(36); ma_write_byte(36,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_fb_write(o) (o.read(36) & 0x20)>>5 
#define get_MA_fb_write() ( ma_read_byte(36) & 0x20)>>5 
//------------------------------------------------------------------------------fb_dm---
// Fuse bank detection mode set 
#define MA_fb_dm__a 36
#define MA_fb_dm__len 1
#define MA_fb_dm__mask 0x01
#define MA_fb_dm__shift 0x00
#define MA_fb_dm__reset 0x00
#define set_obj_MA_fb_dm(o,y) ({ uint8_t __ret = o.read(36); o.write(36,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_fb_dm(y) ({ uint8_t __ret = ma_read_byte(36); ma_write_byte(36,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_fb_dm(o) (o.read(36) & 0x01)>>0 
#define get_MA_fb_dm() ( ma_read_byte(36) & 0x01)>>0 
//------------------------------------------------------------------------------fb_pgm_mode---
// Fuse bank pgoramming mode set 
#define MA_fb_pgm_mode__a 36
#define MA_fb_pgm_mode__len 1
#define MA_fb_pgm_mode__mask 0x02
#define MA_fb_pgm_mode__shift 0x01
#define MA_fb_pgm_mode__reset 0x00
#define set_obj_MA_fb_pgm_mode(o,y) ({ uint8_t __ret = o.read(36); o.write(36,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define set_MA_fb_pgm_mode(y) ({ uint8_t __ret = ma_read_byte(36); ma_write_byte(36,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define get_obj_MA_fb_pgm_mode(o) (o.read(36) & 0x02)>>1 
#define get_MA_fb_pgm_mode() ( ma_read_byte(36) & 0x02)>>1 
//------------------------------------------------------------------------------fb_read---
// High to start fuse bank read 
#define MA_fb_read__a 36
#define MA_fb_read__len 1
#define MA_fb_read__mask 0x40
#define MA_fb_read__shift 0x06
#define MA_fb_read__reset 0x00
#define set_obj_MA_fb_read(o,y) ({ uint8_t __ret = o.read(36); o.write(36,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_fb_read(y) ({ uint8_t __ret = ma_read_byte(36); ma_write_byte(36,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_fb_read(o) (o.read(36) & 0x40)>>6 
#define get_MA_fb_read() ( ma_read_byte(36) & 0x40)>>6 
//------------------------------------------------------------------------------fb_reg_ctrl---
// Register take-over bit for fuse bank (1=reg bank controls) 
#define MA_fb_reg_ctrl__a 36
#define MA_fb_reg_ctrl__len 1
#define MA_fb_reg_ctrl__mask 0x10
#define MA_fb_reg_ctrl__shift 0x04
#define MA_fb_reg_ctrl__reset 0x00
#define set_obj_MA_fb_reg_ctrl(o,y) ({ uint8_t __ret = o.read(36); o.write(36,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_fb_reg_ctrl(y) ({ uint8_t __ret = ma_read_byte(36); ma_write_byte(36,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_fb_reg_ctrl(o) (o.read(36) & 0x10)>>4 
#define get_MA_fb_reg_ctrl() ( ma_read_byte(36) & 0x10)>>4 
//------------------------------------------------------------------------------itrim_reg---
// itrim from reg bank 
#define MA_itrim_reg__a 37
#define MA_itrim_reg__len 5
#define MA_itrim_reg__mask 0x1f
#define MA_itrim_reg__shift 0x00
#define MA_itrim_reg__reset 0x10
#define set_obj_MA_itrim_reg(o,y) ({ uint8_t __ret = o.read(37); o.write(37,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define set_MA_itrim_reg(y) ({ uint8_t __ret = ma_read_byte(37); ma_write_byte(37,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define get_obj_MA_itrim_reg(o) (o.read(37) & 0x1f)>>0 
#define get_MA_itrim_reg() ( ma_read_byte(37) & 0x1f)>>0 
//------------------------------------------------------------------------------audio_in_mode---
// Audio input mode; 0-1-2-3-4-5 
#define MA_audio_in_mode__a 37
#define MA_audio_in_mode__len 3
#define MA_audio_in_mode__mask 0xe0
#define MA_audio_in_mode__shift 0x05
#define MA_audio_in_mode__reset 0x00
#define set_obj_MA_audio_in_mode(o,y) ({ uint8_t __ret = o.read(37); o.write(37,(__ret&0x1f)|((y<<5)&0xe0)); }) 
#define set_MA_audio_in_mode(y) ({ uint8_t __ret = ma_read_byte(37); ma_write_byte(37,(__ret&0x1f)|((y<<5)&0xe0)); }) 
#define get_obj_MA_audio_in_mode(o) (o.read(37) & 0xe0)>>5 
#define get_MA_audio_in_mode() ( ma_read_byte(37) & 0xe0)>>5 
//------------------------------------------------------------------------------ldo_vtrim_reg---
// ldo_vtrim from reg bank 
#define MA_ldo_vtrim_reg__a 38
#define MA_ldo_vtrim_reg__len 2
#define MA_ldo_vtrim_reg__mask 0x03
#define MA_ldo_vtrim_reg__shift 0x00
#define MA_ldo_vtrim_reg__reset 0x01
#define set_obj_MA_ldo_vtrim_reg(o,y) ({ uint8_t __ret = o.read(38); o.write(38,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_ldo_vtrim_reg(y) ({ uint8_t __ret = ma_read_byte(38); ma_write_byte(38,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_ldo_vtrim_reg(o) (o.read(38) & 0x03)>>0 
#define get_MA_ldo_vtrim_reg() ( ma_read_byte(38) & 0x03)>>0 
//------------------------------------------------------------------------------dp_safe---
// High to enable DP safe mode (extra pulses) 
#define MA_dp_safe__a 38
#define MA_dp_safe__len 1
#define MA_dp_safe__mask 0x08
#define MA_dp_safe__shift 0x03
#define MA_dp_safe__reset 0x00
#define set_obj_MA_dp_safe(o,y) ({ uint8_t __ret = o.read(38); o.write(38,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_dp_safe(y) ({ uint8_t __ret = ma_read_byte(38); ma_write_byte(38,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_dp_safe(o) (o.read(38) & 0x08)>>3 
#define get_MA_dp_safe() ( ma_read_byte(38) & 0x08)>>3 
//------------------------------------------------------------------------------eh_dcShdn---
// High to enable DC protection 
#define MA_eh_dcShdn__a 38
#define MA_eh_dcShdn__len 1
#define MA_eh_dcShdn__mask 0x04
#define MA_eh_dcShdn__shift 0x02
#define MA_eh_dcShdn__reset 0x01
#define set_obj_MA_eh_dcShdn(o,y) ({ uint8_t __ret = o.read(38); o.write(38,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define set_MA_eh_dcShdn(y) ({ uint8_t __ret = ma_read_byte(38); ma_write_byte(38,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define get_obj_MA_eh_dcShdn(o) (o.read(38) & 0x04)>>2 
#define get_MA_eh_dcShdn() ( ma_read_byte(38) & 0x04)>>2 
//------------------------------------------------------------------------------bg_vtrim_reg---
// bg_vtrim from reg bank 
#define MA_bg_vtrim_reg__a 39
#define MA_bg_vtrim_reg__len 5
#define MA_bg_vtrim_reg__mask 0x1f
#define MA_bg_vtrim_reg__shift 0x00
#define MA_bg_vtrim_reg__reset 0x08
#define set_obj_MA_bg_vtrim_reg(o,y) ({ uint8_t __ret = o.read(39); o.write(39,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define set_MA_bg_vtrim_reg(y) ({ uint8_t __ret = ma_read_byte(39); ma_write_byte(39,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define get_obj_MA_bg_vtrim_reg(o) (o.read(39) & 0x1f)>>0 
#define get_MA_bg_vtrim_reg() ( ma_read_byte(39) & 0x1f)>>0 
//------------------------------------------------------------------------------oc_thr_ext---
// High to use reg bank setting 
#define MA_oc_thr_ext__a 39
#define MA_oc_thr_ext__len 1
#define MA_oc_thr_ext__mask 0x40
#define MA_oc_thr_ext__shift 0x06
#define MA_oc_thr_ext__reset 0x00
#define set_obj_MA_oc_thr_ext(o,y) ({ uint8_t __ret = o.read(39); o.write(39,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_oc_thr_ext(y) ({ uint8_t __ret = ma_read_byte(39); ma_write_byte(39,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_oc_thr_ext(o) (o.read(39) & 0x40)>>6 
#define get_MA_oc_thr_ext() ( ma_read_byte(39) & 0x40)>>6 
//------------------------------------------------------------------------------oc_blnk_ext---
// High to use reg bank setting 
#define MA_oc_blnk_ext__a 39
#define MA_oc_blnk_ext__len 1
#define MA_oc_blnk_ext__mask 0x80
#define MA_oc_blnk_ext__shift 0x07
#define MA_oc_blnk_ext__reset 0x00
#define set_obj_MA_oc_blnk_ext(o,y) ({ uint8_t __ret = o.read(39); o.write(39,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_oc_blnk_ext(y) ({ uint8_t __ret = ma_read_byte(39); ma_write_byte(39,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_oc_blnk_ext(o) (o.read(39) & 0x80)>>7 
#define get_MA_oc_blnk_ext() ( ma_read_byte(39) & 0x80)>>7 
//------------------------------------------------------------------------------audio_in_mode_ext---
// If set, audio_in_mode is controlled from audio_in_mode register. If not set  audio_in_mode is set from fuse bank setting 
#define MA_audio_in_mode_ext__a 39
#define MA_audio_in_mode_ext__len 1
#define MA_audio_in_mode_ext__mask 0x20
#define MA_audio_in_mode_ext__shift 0x05
#define MA_audio_in_mode_ext__reset 0x00
#define set_obj_MA_audio_in_mode_ext(o,y) ({ uint8_t __ret = o.read(39); o.write(39,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_audio_in_mode_ext(y) ({ uint8_t __ret = ma_read_byte(39); ma_write_byte(39,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_audio_in_mode_ext(o) (o.read(39) & 0x20)>>5 
#define get_MA_audio_in_mode_ext() ( ma_read_byte(39) & 0x20)>>5 
//------------------------------------------------------------------------------bg_vtrim_ext---
// High to use reg bank setting 
#define MA_bg_vtrim_ext__a 40
#define MA_bg_vtrim_ext__len 1
#define MA_bg_vtrim_ext__mask 0x10
#define MA_bg_vtrim_ext__shift 0x04
#define MA_bg_vtrim_ext__reset 0x00
#define set_obj_MA_bg_vtrim_ext(o,y) ({ uint8_t __ret = o.read(40); o.write(40,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_bg_vtrim_ext(y) ({ uint8_t __ret = ma_read_byte(40); ma_write_byte(40,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_bg_vtrim_ext(o) (o.read(40) & 0x10)>>4 
#define get_MA_bg_vtrim_ext() ( ma_read_byte(40) & 0x10)>>4 
//------------------------------------------------------------------------------itrim_ext---
// High to use reg bank setting 
#define MA_itrim_ext__a 40
#define MA_itrim_ext__len 1
#define MA_itrim_ext__mask 0x08
#define MA_itrim_ext__shift 0x03
#define MA_itrim_ext__reset 0x00
#define set_obj_MA_itrim_ext(o,y) ({ uint8_t __ret = o.read(40); o.write(40,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_itrim_ext(y) ({ uint8_t __ret = ma_read_byte(40); ma_write_byte(40,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_itrim_ext(o) (o.read(40) & 0x08)>>3 
#define get_MA_itrim_ext() ( ma_read_byte(40) & 0x08)>>3 
//------------------------------------------------------------------------------ldo_vtrim_ext---
// High to use reg bank setting 
#define MA_ldo_vtrim_ext__a 40
#define MA_ldo_vtrim_ext__len 1
#define MA_ldo_vtrim_ext__mask 0x20
#define MA_ldo_vtrim_ext__shift 0x05
#define MA_ldo_vtrim_ext__reset 0x00
#define set_obj_MA_ldo_vtrim_ext(o,y) ({ uint8_t __ret = o.read(40); o.write(40,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_ldo_vtrim_ext(y) ({ uint8_t __ret = ma_read_byte(40); ma_write_byte(40,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_ldo_vtrim_ext(o) (o.read(40) & 0x20)>>5 
#define get_MA_ldo_vtrim_ext() ( ma_read_byte(40) & 0x20)>>5 
//------------------------------------------------------------------------------pwm_gain_reg---
// PWM gen v2 gain control vector 
#define MA_pwm_gain_reg__a 40
#define MA_pwm_gain_reg__len 3
#define MA_pwm_gain_reg__mask 0x07
#define MA_pwm_gain_reg__shift 0x00
#define MA_pwm_gain_reg__reset 0x02
#define set_obj_MA_pwm_gain_reg(o,y) ({ uint8_t __ret = o.read(40); o.write(40,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_pwm_gain_reg(y) ({ uint8_t __ret = ma_read_byte(40); ma_write_byte(40,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_pwm_gain_reg(o) (o.read(40) & 0x07)>>0 
#define get_MA_pwm_gain_reg() ( ma_read_byte(40) & 0x07)>>0 
//------------------------------------------------------------------------------ilm_valid_delay_ext---
// When high take OC level 0 parameter settings from register, else use fuse setting. 
#define MA_ilm_valid_delay_ext__a 40
#define MA_ilm_valid_delay_ext__len 1
#define MA_ilm_valid_delay_ext__mask 0x80
#define MA_ilm_valid_delay_ext__shift 0x07
#define MA_ilm_valid_delay_ext__reset 0x00
#define set_obj_MA_ilm_valid_delay_ext(o,y) ({ uint8_t __ret = o.read(40); o.write(40,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_ilm_valid_delay_ext(y) ({ uint8_t __ret = ma_read_byte(40); ma_write_byte(40,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_ilm_valid_delay_ext(o) (o.read(40) & 0x80)>>7 
#define get_MA_ilm_valid_delay_ext() ( ma_read_byte(40) & 0x80)>>7 
//------------------------------------------------------------------------------vcf_prechg_force---
// High to force Vcf precharge (for debug) 
#define MA_vcf_prechg_force__a 40
#define MA_vcf_prechg_force__len 1
#define MA_vcf_prechg_force__mask 0x40
#define MA_vcf_prechg_force__shift 0x06
#define MA_vcf_prechg_force__reset 0x00
#define set_obj_MA_vcf_prechg_force(o,y) ({ uint8_t __ret = o.read(40); o.write(40,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_vcf_prechg_force(y) ({ uint8_t __ret = ma_read_byte(40); ma_write_byte(40,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_vcf_prechg_force(o) (o.read(40) & 0x40)>>6 
#define get_MA_vcf_prechg_force() ( ma_read_byte(40) & 0x40)>>6 
//------------------------------------------------------------------------------oc_lvl1_maxCount---
// OC level 1 => 2 count threshold 
#define MA_oc_lvl1_maxCount__a 41
#define MA_oc_lvl1_maxCount__len 4
#define MA_oc_lvl1_maxCount__mask 0x0f
#define MA_oc_lvl1_maxCount__shift 0x00
#define MA_oc_lvl1_maxCount__reset 0x00
#define set_obj_MA_oc_lvl1_maxCount(o,y) ({ uint8_t __ret = o.read(41); o.write(41,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_oc_lvl1_maxCount(y) ({ uint8_t __ret = ma_read_byte(41); ma_write_byte(41,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_oc_lvl1_maxCount(o) (o.read(41) & 0x0f)>>0 
#define get_MA_oc_lvl1_maxCount() ( ma_read_byte(41) & 0x0f)>>0 
//------------------------------------------------------------------------------oc_lvl1_decCountRatio---
// Level-1 OC counter decrement ratio 
#define MA_oc_lvl1_decCountRatio__a 41
#define MA_oc_lvl1_decCountRatio__len 4
#define MA_oc_lvl1_decCountRatio__mask 0xf0
#define MA_oc_lvl1_decCountRatio__shift 0x04
#define MA_oc_lvl1_decCountRatio__reset 0x01
#define set_obj_MA_oc_lvl1_decCountRatio(o,y) ({ uint8_t __ret = o.read(41); o.write(41,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define set_MA_oc_lvl1_decCountRatio(y) ({ uint8_t __ret = ma_read_byte(41); ma_write_byte(41,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define get_obj_MA_oc_lvl1_decCountRatio(o) (o.read(41) & 0xf0)>>4 
#define get_MA_oc_lvl1_decCountRatio() ( ma_read_byte(41) & 0xf0)>>4 
//------------------------------------------------------------------------------pll_enbits_reg---
// PLL sub-block enable bits for debugging 
#define MA_pll_enbits_reg__a 42
#define MA_pll_enbits_reg__len 8
#define MA_pll_enbits_reg__mask 0xff
#define MA_pll_enbits_reg__shift 0x00
#define MA_pll_enbits_reg__reset 0x00
#define set_obj_MA_pll_enbits_reg(o,y) o.write(42,y);
#define set_MA_pll_enbits_reg(y) ma_write_byte(42,y);
#define get_obj_MA_pll_enbits_reg(o) (o.read(42) & 0xff)>>0 
#define get_MA_pll_enbits_reg() ( ma_read_byte(42) & 0xff)>>0 
//------------------------------------------------------------------------------pll_enbits_ext---
// High to use register bits for PLL sub-block enable (debug) 
#define MA_pll_enbits_ext__a 43
#define MA_pll_enbits_ext__len 1
#define MA_pll_enbits_ext__mask 0x01
#define MA_pll_enbits_ext__shift 0x00
#define MA_pll_enbits_ext__reset 0x00
#define set_obj_MA_pll_enbits_ext(o,y) ({ uint8_t __ret = o.read(43); o.write(43,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_pll_enbits_ext(y) ({ uint8_t __ret = ma_read_byte(43); ma_write_byte(43,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_pll_enbits_ext(o) (o.read(43) & 0x01)>>0 
#define get_MA_pll_enbits_ext() ( ma_read_byte(43) & 0x01)>>0 
//------------------------------------------------------------------------------ocp_lvl1_reaction---
// High-level OCP-lvl1 reaction other than lvl-2 promotion 
#define MA_ocp_lvl1_reaction__a 43
#define MA_ocp_lvl1_reaction__len 2
#define MA_ocp_lvl1_reaction__mask 0x06
#define MA_ocp_lvl1_reaction__shift 0x01
#define MA_ocp_lvl1_reaction__reset 0x01
#define set_obj_MA_ocp_lvl1_reaction(o,y) ({ uint8_t __ret = o.read(43); o.write(43,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define set_MA_ocp_lvl1_reaction(y) ({ uint8_t __ret = ma_read_byte(43); ma_write_byte(43,(__ret&0xf9)|((y<<1)&0x06)); }) 
#define get_obj_MA_ocp_lvl1_reaction(o) (o.read(43) & 0x06)>>1 
#define get_MA_ocp_lvl1_reaction() ( ma_read_byte(43) & 0x06)>>1 
//------------------------------------------------------------------------------ocp_rel_count---
// Level-1 ocp reaction duration 
#define MA_ocp_rel_count__a 43
#define MA_ocp_rel_count__len 3
#define MA_ocp_rel_count__mask 0x38
#define MA_ocp_rel_count__shift 0x03
#define MA_ocp_rel_count__reset 0x07
#define set_obj_MA_ocp_rel_count(o,y) ({ uint8_t __ret = o.read(43); o.write(43,(__ret&0xc7)|((y<<3)&0x38)); }) 
#define set_MA_ocp_rel_count(y) ({ uint8_t __ret = ma_read_byte(43); ma_write_byte(43,(__ret&0xc7)|((y<<3)&0x38)); }) 
#define get_obj_MA_ocp_rel_count(o) (o.read(43) & 0x38)>>3 
#define get_MA_ocp_rel_count() ( ma_read_byte(43) & 0x38)>>3 
//------------------------------------------------------------------------------prot_btl_highz_reg---
// High to use high-Z prot. response for BTL 
#define MA_prot_btl_highz_reg__a 43
#define MA_prot_btl_highz_reg__len 1
#define MA_prot_btl_highz_reg__mask 0x40
#define MA_prot_btl_highz_reg__shift 0x06
#define MA_prot_btl_highz_reg__reset 0x00
#define set_obj_MA_prot_btl_highz_reg(o,y) ({ uint8_t __ret = o.read(43); o.write(43,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_prot_btl_highz_reg(y) ({ uint8_t __ret = ma_read_byte(43); ma_write_byte(43,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_prot_btl_highz_reg(o) (o.read(43) & 0x40)>>6 
#define get_MA_prot_btl_highz_reg() ( ma_read_byte(43) & 0x40)>>6 
//------------------------------------------------------------------------------gd_pu_seq_dis---
// High to disable GD PU sequencer 
#define MA_gd_pu_seq_dis__a 43
#define MA_gd_pu_seq_dis__len 1
#define MA_gd_pu_seq_dis__mask 0x80
#define MA_gd_pu_seq_dis__shift 0x07
#define MA_gd_pu_seq_dis__reset 0x00
#define set_obj_MA_gd_pu_seq_dis(o,y) ({ uint8_t __ret = o.read(43); o.write(43,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_gd_pu_seq_dis(y) ({ uint8_t __ret = ma_read_byte(43); ma_write_byte(43,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_gd_pu_seq_dis(o) (o.read(43) & 0x80)>>7 
#define get_MA_gd_pu_seq_dis() ( ma_read_byte(43) & 0x80)>>7 
//------------------------------------------------------------------------------startup_stepThr---
// Number of clk_quart ticks (/256) to advance in startup D limiting sequence  
#define MA_startup_stepThr__a 44
#define MA_startup_stepThr__len 8
#define MA_startup_stepThr__mask 0xff
#define MA_startup_stepThr__shift 0x00
#define MA_startup_stepThr__reset 0xff
#define set_obj_MA_startup_stepThr(o,y) o.write(44,y);
#define set_MA_startup_stepThr(y) ma_write_byte(44,y);
#define get_obj_MA_startup_stepThr(o) (o.read(44) & 0xff)>>0 
#define get_MA_startup_stepThr() ( ma_read_byte(44) & 0xff)>>0 
//------------------------------------------------------------------------------eh_clear---
// Flip to clear error registers 
#define MA_eh_clear__a 45
#define MA_eh_clear__len 1
#define MA_eh_clear__mask 0x04
#define MA_eh_clear__shift 0x02
#define MA_eh_clear__reset 0x00
#define set_obj_MA_eh_clear(o,y) ({ uint8_t __ret = o.read(45); o.write(45,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define set_MA_eh_clear(y) ({ uint8_t __ret = ma_read_byte(45); ma_write_byte(45,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define get_obj_MA_eh_clear(o) (o.read(45) & 0x04)>>2 
#define get_MA_eh_clear() ( ma_read_byte(45) & 0x04)>>2 
//------------------------------------------------------------------------------eh_mode---
// Error/debug pin function conf. 0=>std,1=>dig,2=>pow,3=>anl 
#define MA_eh_mode__a 45
#define MA_eh_mode__len 2
#define MA_eh_mode__mask 0x03
#define MA_eh_mode__shift 0x00
#define MA_eh_mode__reset 0x00
#define set_obj_MA_eh_mode(o,y) ({ uint8_t __ret = o.read(45); o.write(45,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_eh_mode(y) ({ uint8_t __ret = ma_read_byte(45); ma_write_byte(45,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_eh_mode(o) (o.read(45) & 0x03)>>0 
#define get_MA_eh_mode() ( ma_read_byte(45) & 0x03)>>0 
//------------------------------------------------------------------------------eh_triggerShdn---
// Allow EH trigger to shutdown power stages? 
#define MA_eh_triggerShdn__a 45
#define MA_eh_triggerShdn__len 1
#define MA_eh_triggerShdn__mask 0x08
#define MA_eh_triggerShdn__shift 0x03
#define MA_eh_triggerShdn__reset 0x00
#define set_obj_MA_eh_triggerShdn(o,y) ({ uint8_t __ret = o.read(45); o.write(45,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_eh_triggerShdn(y) ({ uint8_t __ret = ma_read_byte(45); ma_write_byte(45,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_eh_triggerShdn(o) (o.read(45) & 0x08)>>3 
#define get_MA_eh_triggerShdn() ( ma_read_byte(45) & 0x08)>>3 
//------------------------------------------------------------------------------eh_otpShdn---
// High to enable overtemperature protection shutdown on OTE. 
#define MA_eh_otpShdn__a 45
#define MA_eh_otpShdn__len 1
#define MA_eh_otpShdn__mask 0x10
#define MA_eh_otpShdn__shift 0x04
#define MA_eh_otpShdn__reset 0x01
#define set_obj_MA_eh_otpShdn(o,y) ({ uint8_t __ret = o.read(45); o.write(45,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_eh_otpShdn(y) ({ uint8_t __ret = ma_read_byte(45); ma_write_byte(45,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_eh_otpShdn(o) (o.read(45) & 0x10)>>4 
#define get_MA_eh_otpShdn() ( ma_read_byte(45) & 0x10)>>4 
//------------------------------------------------------------------------------thermal_compr_en---
// Enable otw-contr.  input compression? 
#define MA_thermal_compr_en__a 45
#define MA_thermal_compr_en__len 1
#define MA_thermal_compr_en__mask 0x20
#define MA_thermal_compr_en__shift 0x05
#define MA_thermal_compr_en__reset 0x01
#define set_obj_MA_thermal_compr_en(o,y) ({ uint8_t __ret = o.read(45); o.write(45,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_thermal_compr_en(y) ({ uint8_t __ret = ma_read_byte(45); ma_write_byte(45,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_thermal_compr_en(o) (o.read(45) & 0x20)>>5 
#define get_MA_thermal_compr_en() ( ma_read_byte(45) & 0x20)>>5 
//------------------------------------------------------------------------------dp_cont---
// High to force continuous drivePulser signaling 
#define MA_dp_cont__a 45
#define MA_dp_cont__len 1
#define MA_dp_cont__mask 0x80
#define MA_dp_cont__shift 0x07
#define MA_dp_cont__reset 0x00
#define set_obj_MA_dp_cont(o,y) ({ uint8_t __ret = o.read(45); o.write(45,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_dp_cont(y) ({ uint8_t __ret = ma_read_byte(45); ma_write_byte(45,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_dp_cont(o) (o.read(45) & 0x80)>>7 
#define get_MA_dp_cont() ( ma_read_byte(45) & 0x80)>>7 
//------------------------------------------------------------------------------system_mute---
// 1 = mute system, 0 = normal operation 
#define MA_system_mute__a 45
#define MA_system_mute__len 1
#define MA_system_mute__mask 0x40
#define MA_system_mute__shift 0x06
#define MA_system_mute__reset 0x00
#define set_obj_MA_system_mute(o,y) ({ uint8_t __ret = o.read(45); o.write(45,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_system_mute(y) ({ uint8_t __ret = ma_read_byte(45); ma_write_byte(45,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_system_mute(o) (o.read(45) & 0x40)>>6 
#define get_MA_system_mute() ( ma_read_byte(45) & 0x40)>>6 
//------------------------------------------------------------------------------thermal_compr_max_db---
// Audio limiter max thermal reduction 
#define MA_thermal_compr_max_db__a 46
#define MA_thermal_compr_max_db__len 3
#define MA_thermal_compr_max_db__mask 0x07
#define MA_thermal_compr_max_db__shift 0x00
#define MA_thermal_compr_max_db__reset 0x04
#define set_obj_MA_thermal_compr_max_db(o,y) ({ uint8_t __ret = o.read(46); o.write(46,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_thermal_compr_max_db(y) ({ uint8_t __ret = ma_read_byte(46); ma_write_byte(46,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_thermal_compr_max_db(o) (o.read(46) & 0x07)>>0 
#define get_MA_thermal_compr_max_db() ( ma_read_byte(46) & 0x07)>>0 
//------------------------------------------------------------------------------oc_bias_high---
// Set OCP circuit bias level 
#define MA_oc_bias_high__a 46
#define MA_oc_bias_high__len 1
#define MA_oc_bias_high__mask 0x80
#define MA_oc_bias_high__shift 0x07
#define MA_oc_bias_high__reset 0x01
#define set_obj_MA_oc_bias_high(o,y) ({ uint8_t __ret = o.read(46); o.write(46,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_oc_bias_high(y) ({ uint8_t __ret = ma_read_byte(46); ma_write_byte(46,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_oc_bias_high(o) (o.read(46) & 0x80)>>7 
#define get_MA_oc_bias_high() ( ma_read_byte(46) & 0x80)>>7 
//------------------------------------------------------------------------------pwm_gain_ext---
// High to use register value of pwm_gain 
#define MA_pwm_gain_ext__a 46
#define MA_pwm_gain_ext__len 1
#define MA_pwm_gain_ext__mask 0x40
#define MA_pwm_gain_ext__shift 0x06
#define MA_pwm_gain_ext__reset 0x00
#define set_obj_MA_pwm_gain_ext(o,y) ({ uint8_t __ret = o.read(46); o.write(46,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_pwm_gain_ext(y) ({ uint8_t __ret = ma_read_byte(46); ma_write_byte(46,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_pwm_gain_ext(o) (o.read(46) & 0x40)>>6 
#define get_MA_pwm_gain_ext() ( ma_read_byte(46) & 0x40)>>6 
//------------------------------------------------------------------------------error_trig_mask---
// Error trigger mask 
#define MA_error_trig_mask__a 47
#define MA_error_trig_mask__len 8
#define MA_error_trig_mask__mask 0xff
#define MA_error_trig_mask__shift 0x00
#define MA_error_trig_mask__reset 0x00
#define set_obj_MA_error_trig_mask(o,y) o.write(47,y);
#define set_MA_error_trig_mask(y) ma_write_byte(47,y);
#define get_obj_MA_error_trig_mask(o) (o.read(47) & 0xff)>>0 
#define get_MA_error_trig_mask() ( ma_read_byte(47) & 0xff)>>0 
//------------------------------------------------------------------------------gd_disable---
// Individual HS driver disables for debug 
#define MA_gd_disable__a 49
#define MA_gd_disable__len 4
#define MA_gd_disable__mask 0x0f
#define MA_gd_disable__shift 0x00
#define MA_gd_disable__reset 0x00
#define set_obj_MA_gd_disable(o,y) ({ uint8_t __ret = o.read(49); o.write(49,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_gd_disable(y) ({ uint8_t __ret = ma_read_byte(49); ma_write_byte(49,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_gd_disable(o) (o.read(49) & 0x0f)>>0 
#define get_MA_gd_disable() ( ma_read_byte(49) & 0x0f)>>0 
//------------------------------------------------------------------------------gd_goi_test_en---
// High to for extra-high vdd_float in gate drivers for GOI test. 
#define MA_gd_goi_test_en__a 49
#define MA_gd_goi_test_en__len 1
#define MA_gd_goi_test_en__mask 0x80
#define MA_gd_goi_test_en__shift 0x07
#define MA_gd_goi_test_en__reset 0x00
#define set_obj_MA_gd_goi_test_en(o,y) ({ uint8_t __ret = o.read(49); o.write(49,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_gd_goi_test_en(y) ({ uint8_t __ret = ma_read_byte(49); ma_write_byte(49,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_gd_goi_test_en(o) (o.read(49) & 0x80)>>7 
#define get_MA_gd_goi_test_en() ( ma_read_byte(49) & 0x80)>>7 
//------------------------------------------------------------------------------hvb_uvp_trim_ext---
// High to use reg. bank hvb UVP setting. 
#define MA_hvb_uvp_trim_ext__a 50
#define MA_hvb_uvp_trim_ext__len 1
#define MA_hvb_uvp_trim_ext__mask 0x10
#define MA_hvb_uvp_trim_ext__shift 0x04
#define MA_hvb_uvp_trim_ext__reset 0x00
#define set_obj_MA_hvb_uvp_trim_ext(o,y) ({ uint8_t __ret = o.read(50); o.write(50,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_hvb_uvp_trim_ext(y) ({ uint8_t __ret = ma_read_byte(50); ma_write_byte(50,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_hvb_uvp_trim_ext(o) (o.read(50) & 0x10)>>4 
#define get_MA_hvb_uvp_trim_ext() ( ma_read_byte(50) & 0x10)>>4 
//------------------------------------------------------------------------------gd_bg_vtrim---
// Set HSdriver bandgap voltage level 
#define MA_gd_bg_vtrim__a 50
#define MA_gd_bg_vtrim__len 2
#define MA_gd_bg_vtrim__mask 0x03
#define MA_gd_bg_vtrim__shift 0x00
#define MA_gd_bg_vtrim__reset 0x01
#define set_obj_MA_gd_bg_vtrim(o,y) ({ uint8_t __ret = o.read(50); o.write(50,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_gd_bg_vtrim(y) ({ uint8_t __ret = ma_read_byte(50); ma_write_byte(50,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_gd_bg_vtrim(o) (o.read(50) & 0x03)>>0 
#define get_MA_gd_bg_vtrim() ( ma_read_byte(50) & 0x03)>>0 
//------------------------------------------------------------------------------hvb_uvp_trim_reg---
// Register bank hvb UPV setting. 
#define MA_hvb_uvp_trim_reg__a 50
#define MA_hvb_uvp_trim_reg__len 2
#define MA_hvb_uvp_trim_reg__mask 0x0c
#define MA_hvb_uvp_trim_reg__shift 0x02
#define MA_hvb_uvp_trim_reg__reset 0x02
#define set_obj_MA_hvb_uvp_trim_reg(o,y) ({ uint8_t __ret = o.read(50); o.write(50,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define set_MA_hvb_uvp_trim_reg(y) ({ uint8_t __ret = ma_read_byte(50); ma_write_byte(50,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define get_obj_MA_hvb_uvp_trim_reg(o) (o.read(50) & 0x0c)>>2 
#define get_MA_hvb_uvp_trim_reg() ( ma_read_byte(50) & 0x0c)>>2 
//------------------------------------------------------------------------------dt_min_reg---
// Reg. bank min DT setting 
#define MA_dt_min_reg__a 50
#define MA_dt_min_reg__len 3
#define MA_dt_min_reg__mask 0xe0
#define MA_dt_min_reg__shift 0x05
#define MA_dt_min_reg__reset 0x02
#define set_obj_MA_dt_min_reg(o,y) ({ uint8_t __ret = o.read(50); o.write(50,(__ret&0x1f)|((y<<5)&0xe0)); }) 
#define set_MA_dt_min_reg(y) ({ uint8_t __ret = ma_read_byte(50); ma_write_byte(50,(__ret&0x1f)|((y<<5)&0xe0)); }) 
#define get_obj_MA_dt_min_reg(o) (o.read(50) & 0xe0)>>5 
#define get_MA_dt_min_reg() ( ma_read_byte(50) & 0xe0)>>5 
//------------------------------------------------------------------------------oc_thr_reg---
// OCP threshold from register bank 
#define MA_oc_thr_reg__a 51
#define MA_oc_thr_reg__len 4
#define MA_oc_thr_reg__mask 0xf0
#define MA_oc_thr_reg__shift 0x04
#define MA_oc_thr_reg__reset 0x07
#define set_obj_MA_oc_thr_reg(o,y) ({ uint8_t __ret = o.read(51); o.write(51,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define set_MA_oc_thr_reg(y) ({ uint8_t __ret = ma_read_byte(51); ma_write_byte(51,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define get_obj_MA_oc_thr_reg(o) (o.read(51) & 0xf0)>>4 
#define get_MA_oc_thr_reg() ( ma_read_byte(51) & 0xf0)>>4 
//------------------------------------------------------------------------------oc_blnk_reg---
// OCP blanking delay from register bank 
#define MA_oc_blnk_reg__a 51
#define MA_oc_blnk_reg__len 4
#define MA_oc_blnk_reg__mask 0x0f
#define MA_oc_blnk_reg__shift 0x00
#define MA_oc_blnk_reg__reset 0x07
#define set_obj_MA_oc_blnk_reg(o,y) ({ uint8_t __ret = o.read(51); o.write(51,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_oc_blnk_reg(y) ({ uint8_t __ret = ma_read_byte(51); ma_write_byte(51,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_oc_blnk_reg(o) (o.read(51) & 0x0f)>>0 
#define get_MA_oc_blnk_reg() ( ma_read_byte(51) & 0x0f)>>0 
//------------------------------------------------------------------------------vddf_test_en---
// Vdd_float HVmux enable 
#define MA_vddf_test_en__a 52
#define MA_vddf_test_en__len 1
#define MA_vddf_test_en__mask 0x01
#define MA_vddf_test_en__shift 0x00
#define MA_vddf_test_en__reset 0x00
#define set_obj_MA_vddf_test_en(o,y) ({ uint8_t __ret = o.read(52); o.write(52,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_vddf_test_en(y) ({ uint8_t __ret = ma_read_byte(52); ma_write_byte(52,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_vddf_test_en(o) (o.read(52) & 0x01)>>0 
#define get_MA_vddf_test_en() ( ma_read_byte(52) & 0x01)>>0 
//------------------------------------------------------------------------------vddf_test_turnon---
// Vdd_float HVmux CP high/low  
#define MA_vddf_test_turnon__a 52
#define MA_vddf_test_turnon__len 1
#define MA_vddf_test_turnon__mask 0x02
#define MA_vddf_test_turnon__shift 0x01
#define MA_vddf_test_turnon__reset 0x00
#define set_obj_MA_vddf_test_turnon(o,y) ({ uint8_t __ret = o.read(52); o.write(52,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define set_MA_vddf_test_turnon(y) ({ uint8_t __ret = ma_read_byte(52); ma_write_byte(52,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define get_obj_MA_vddf_test_turnon(o) (o.read(52) & 0x02)>>1 
#define get_MA_vddf_test_turnon() ( ma_read_byte(52) & 0x02)>>1 
//------------------------------------------------------------------------------vddf_test_add---
// Vdd_float HVmux address 
#define MA_vddf_test_add__a 52
#define MA_vddf_test_add__len 4
#define MA_vddf_test_add__mask 0x3c
#define MA_vddf_test_add__shift 0x02
#define MA_vddf_test_add__reset 0x00
#define set_obj_MA_vddf_test_add(o,y) ({ uint8_t __ret = o.read(52); o.write(52,(__ret&0xc3)|((y<<2)&0x3c)); }) 
#define set_MA_vddf_test_add(y) ({ uint8_t __ret = ma_read_byte(52); ma_write_byte(52,(__ret&0xc3)|((y<<2)&0x3c)); }) 
#define get_obj_MA_vddf_test_add(o) (o.read(52) & 0x3c)>>2 
#define get_MA_vddf_test_add() ( ma_read_byte(52) & 0x3c)>>2 
//------------------------------------------------------------------------------dt_min_ext---
// High to use reg. bank min. DT setting. 
#define MA_dt_min_ext__a 52
#define MA_dt_min_ext__len 1
#define MA_dt_min_ext__mask 0x40
#define MA_dt_min_ext__shift 0x06
#define MA_dt_min_ext__reset 0x00
#define set_obj_MA_dt_min_ext(o,y) ({ uint8_t __ret = o.read(52); o.write(52,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_dt_min_ext(y) ({ uint8_t __ret = ma_read_byte(52); ma_write_byte(52,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_dt_min_ext(o) (o.read(52) & 0x40)>>6 
#define get_MA_dt_min_ext() ( ma_read_byte(52) & 0x40)>>6 
//------------------------------------------------------------------------------gd_pd_strong_reg---
// High to for strong PD in gate driver. ORed with fuse setting. 
#define MA_gd_pd_strong_reg__a 52
#define MA_gd_pd_strong_reg__len 1
#define MA_gd_pd_strong_reg__mask 0x80
#define MA_gd_pd_strong_reg__shift 0x07
#define MA_gd_pd_strong_reg__reset 0x00
#define set_obj_MA_gd_pd_strong_reg(o,y) ({ uint8_t __ret = o.read(52); o.write(52,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_gd_pd_strong_reg(y) ({ uint8_t __ret = ma_read_byte(52); ma_write_byte(52,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_gd_pd_strong_reg(o) (o.read(52) & 0x80)>>7 
#define get_MA_gd_pd_strong_reg() ( ma_read_byte(52) & 0x80)>>7 
//------------------------------------------------------------------------------audio_proc_enable---
// Enable Audio proc, bypass if not enabled 
#define MA_audio_proc_enable__a 53
#define MA_audio_proc_enable__len 1
#define MA_audio_proc_enable__mask 0x08
#define MA_audio_proc_enable__shift 0x03
#define MA_audio_proc_enable__reset 0x00
#define set_obj_MA_audio_proc_enable(o,y) ({ uint8_t __ret = o.read(53); o.write(53,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_audio_proc_enable(y) ({ uint8_t __ret = ma_read_byte(53); ma_write_byte(53,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_audio_proc_enable(o) (o.read(53) & 0x08)>>3 
#define get_MA_audio_proc_enable() ( ma_read_byte(53) & 0x08)>>3 
//------------------------------------------------------------------------------audio_proc_release---
// 00:slow, 01:normal, 10:fast 
#define MA_audio_proc_release__a 53
#define MA_audio_proc_release__len 2
#define MA_audio_proc_release__mask 0x30
#define MA_audio_proc_release__shift 0x04
#define MA_audio_proc_release__reset 0x00
#define set_obj_MA_audio_proc_release(o,y) ({ uint8_t __ret = o.read(53); o.write(53,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define set_MA_audio_proc_release(y) ({ uint8_t __ret = ma_read_byte(53); ma_write_byte(53,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define get_obj_MA_audio_proc_release(o) (o.read(53) & 0x30)>>4 
#define get_MA_audio_proc_release() ( ma_read_byte(53) & 0x30)>>4 
//------------------------------------------------------------------------------audio_proc_attack---
// 00:slow, 01:normal, 10:fast  
#define MA_audio_proc_attack__a 53
#define MA_audio_proc_attack__len 2
#define MA_audio_proc_attack__mask 0xc0
#define MA_audio_proc_attack__shift 0x06
#define MA_audio_proc_attack__reset 0x00
#define set_obj_MA_audio_proc_attack(o,y) ({ uint8_t __ret = o.read(53); o.write(53,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define set_MA_audio_proc_attack(y) ({ uint8_t __ret = ma_read_byte(53); ma_write_byte(53,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define get_obj_MA_audio_proc_attack(o) (o.read(53) & 0xc0)>>6 
#define get_MA_audio_proc_attack() ( ma_read_byte(53) & 0xc0)>>6 
//------------------------------------------------------------------------------i2s_format---
// i2s basic data format, 000 = std. i2s, 001 = left justified (default) 
#define MA_i2s_format__a 53
#define MA_i2s_format__len 3
#define MA_i2s_format__mask 0x07
#define MA_i2s_format__shift 0x00
#define MA_i2s_format__reset 0x01
#define set_obj_MA_i2s_format(o,y) ({ uint8_t __ret = o.read(53); o.write(53,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_i2s_format(y) ({ uint8_t __ret = ma_read_byte(53); ma_write_byte(53,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_i2s_format(o) (o.read(53) & 0x07)>>0 
#define get_MA_i2s_format() ( ma_read_byte(53) & 0x07)>>0 
//------------------------------------------------------------------------------audio_proc_limiterEnable---
// 1: enable limiter, 0: disable limiter 
#define MA_audio_proc_limiterEnable__a 54
#define MA_audio_proc_limiterEnable__len 1
#define MA_audio_proc_limiterEnable__mask 0x40
#define MA_audio_proc_limiterEnable__shift 0x06
#define MA_audio_proc_limiterEnable__reset 0x00
#define set_obj_MA_audio_proc_limiterEnable(o,y) ({ uint8_t __ret = o.read(54); o.write(54,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_audio_proc_limiterEnable(y) ({ uint8_t __ret = ma_read_byte(54); ma_write_byte(54,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_audio_proc_limiterEnable(o) (o.read(54) & 0x40)>>6 
#define get_MA_audio_proc_limiterEnable() ( ma_read_byte(54) & 0x40)>>6 
//------------------------------------------------------------------------------audio_proc_mute---
// 1: mute, 0: unmute 
#define MA_audio_proc_mute__a 54
#define MA_audio_proc_mute__len 1
#define MA_audio_proc_mute__mask 0x80
#define MA_audio_proc_mute__shift 0x07
#define MA_audio_proc_mute__reset 0x00
#define set_obj_MA_audio_proc_mute(o,y) ({ uint8_t __ret = o.read(54); o.write(54,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_audio_proc_mute(y) ({ uint8_t __ret = ma_read_byte(54); ma_write_byte(54,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_audio_proc_mute(o) (o.read(54) & 0x80)>>7 
#define get_MA_audio_proc_mute() ( ma_read_byte(54) & 0x80)>>7 
//------------------------------------------------------------------------------i2s_sck_pol---
// i2s sck polarity cfg. 0 = rising edge data change 
#define MA_i2s_sck_pol__a 54
#define MA_i2s_sck_pol__len 1
#define MA_i2s_sck_pol__mask 0x01
#define MA_i2s_sck_pol__shift 0x00
#define MA_i2s_sck_pol__reset 0x01
#define set_obj_MA_i2s_sck_pol(o,y) ({ uint8_t __ret = o.read(54); o.write(54,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_i2s_sck_pol(y) ({ uint8_t __ret = ma_read_byte(54); ma_write_byte(54,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_i2s_sck_pol(o) (o.read(54) & 0x01)>>0 
#define get_MA_i2s_sck_pol() ( ma_read_byte(54) & 0x01)>>0 
//------------------------------------------------------------------------------i2s_framesize---
// i2s word length. 00 = 32bit, 01 = 24bit 
#define MA_i2s_framesize__a 54
#define MA_i2s_framesize__len 2
#define MA_i2s_framesize__mask 0x18
#define MA_i2s_framesize__shift 0x03
#define MA_i2s_framesize__reset 0x00
#define set_obj_MA_i2s_framesize(o,y) ({ uint8_t __ret = o.read(54); o.write(54,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define set_MA_i2s_framesize(y) ({ uint8_t __ret = ma_read_byte(54); ma_write_byte(54,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define get_obj_MA_i2s_framesize(o) (o.read(54) & 0x18)>>3 
#define get_MA_i2s_framesize() ( ma_read_byte(54) & 0x18)>>3 
//------------------------------------------------------------------------------i2s_ws_pol---
// i2s ws polarity. 0 = low first 
#define MA_i2s_ws_pol__a 54
#define MA_i2s_ws_pol__len 1
#define MA_i2s_ws_pol__mask 0x02
#define MA_i2s_ws_pol__shift 0x01
#define MA_i2s_ws_pol__reset 0x00
#define set_obj_MA_i2s_ws_pol(o,y) ({ uint8_t __ret = o.read(54); o.write(54,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define set_MA_i2s_ws_pol(y) ({ uint8_t __ret = ma_read_byte(54); ma_write_byte(54,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define get_obj_MA_i2s_ws_pol(o) (o.read(54) & 0x02)>>1 
#define get_MA_i2s_ws_pol() ( ma_read_byte(54) & 0x02)>>1 
//------------------------------------------------------------------------------i2s_order---
// i2s word bit order. 0 = MSB first 
#define MA_i2s_order__a 54
#define MA_i2s_order__len 1
#define MA_i2s_order__mask 0x04
#define MA_i2s_order__shift 0x02
#define MA_i2s_order__reset 0x00
#define set_obj_MA_i2s_order(o,y) ({ uint8_t __ret = o.read(54); o.write(54,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define set_MA_i2s_order(y) ({ uint8_t __ret = ma_read_byte(54); ma_write_byte(54,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define get_obj_MA_i2s_order(o) (o.read(54) & 0x04)>>2 
#define get_MA_i2s_order() ( ma_read_byte(54) & 0x04)>>2 
//------------------------------------------------------------------------------i2s_rightfirst---
// i2s L/R word order; 0 = left first 
#define MA_i2s_rightfirst__a 54
#define MA_i2s_rightfirst__len 1
#define MA_i2s_rightfirst__mask 0x20
#define MA_i2s_rightfirst__shift 0x05
#define MA_i2s_rightfirst__reset 0x00
#define set_obj_MA_i2s_rightfirst(o,y) ({ uint8_t __ret = o.read(54); o.write(54,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_i2s_rightfirst(y) ({ uint8_t __ret = ma_read_byte(54); ma_write_byte(54,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_i2s_rightfirst(o) (o.read(54) & 0x20)>>5 
#define get_MA_i2s_rightfirst() ( ma_read_byte(54) & 0x20)>>5 
//------------------------------------------------------------------------------pps_short_precharge---
// High to shorten PPS Vcfly precharge time (for test/debug) 
#define MA_pps_short_precharge__a 55
#define MA_pps_short_precharge__len 1
#define MA_pps_short_precharge__mask 0x80
#define MA_pps_short_precharge__shift 0x07
#define MA_pps_short_precharge__reset 0x00
#define set_obj_MA_pps_short_precharge(o,y) ({ uint8_t __ret = o.read(55); o.write(55,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_pps_short_precharge(y) ({ uint8_t __ret = ma_read_byte(55); ma_write_byte(55,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_pps_short_precharge(o) (o.read(55) & 0x80)>>7 
#define get_MA_pps_short_precharge() ( ma_read_byte(55) & 0x80)>>7 
//------------------------------------------------------------------------------pps_fixthr---
// PPS/Vcfly machine UV/OV threshold setting 
#define MA_pps_fixthr__a 55
#define MA_pps_fixthr__len 4
#define MA_pps_fixthr__mask 0x0f
#define MA_pps_fixthr__shift 0x00
#define MA_pps_fixthr__reset 0x03
#define set_obj_MA_pps_fixthr(o,y) ({ uint8_t __ret = o.read(55); o.write(55,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_pps_fixthr(y) ({ uint8_t __ret = ma_read_byte(55); ma_write_byte(55,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_pps_fixthr(o) (o.read(55) & 0x0f)>>0 
#define get_MA_pps_fixthr() ( ma_read_byte(55) & 0x0f)>>0 
//------------------------------------------------------------------------------pps_adcmode---
// Enable PPS/ machine Vcfly ADC 
#define MA_pps_adcmode__a 55
#define MA_pps_adcmode__len 1
#define MA_pps_adcmode__mask 0x10
#define MA_pps_adcmode__shift 0x04
#define MA_pps_adcmode__reset 0x00
#define set_obj_MA_pps_adcmode(o,y) ({ uint8_t __ret = o.read(55); o.write(55,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_pps_adcmode(y) ({ uint8_t __ret = ma_read_byte(55); ma_write_byte(55,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_pps_adcmode(o) (o.read(55) & 0x10)>>4 
#define get_MA_pps_adcmode() ( ma_read_byte(55) & 0x10)>>4 
//------------------------------------------------------------------------------pps_disable---
// High to disable PPS system in ASIC mode 
#define MA_pps_disable__a 55
#define MA_pps_disable__len 1
#define MA_pps_disable__mask 0x20
#define MA_pps_disable__shift 0x05
#define MA_pps_disable__reset 0x01
#define set_obj_MA_pps_disable(o,y) ({ uint8_t __ret = o.read(55); o.write(55,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_pps_disable(y) ({ uint8_t __ret = ma_read_byte(55); ma_write_byte(55,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_pps_disable(o) (o.read(55) & 0x20)>>5 
#define get_MA_pps_disable() ( ma_read_byte(55) & 0x20)>>5 
//------------------------------------------------------------------------------pps_retrigger---
// High to allow PPS to re-trigger after protection events 
#define MA_pps_retrigger__a 55
#define MA_pps_retrigger__len 1
#define MA_pps_retrigger__mask 0x40
#define MA_pps_retrigger__shift 0x06
#define MA_pps_retrigger__reset 0x01
#define set_obj_MA_pps_retrigger(o,y) ({ uint8_t __ret = o.read(55); o.write(55,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_pps_retrigger(y) ({ uint8_t __ret = ma_read_byte(55); ma_write_byte(55,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_pps_retrigger(o) (o.read(55) & 0x40)>>6 
#define get_MA_pps_retrigger() ( ma_read_byte(55) & 0x40)>>6 
//------------------------------------------------------------------------------dbsw_nFrame---
// Debug serial bus "low" framing duration 
#define MA_dbsw_nFrame__a 56
#define MA_dbsw_nFrame__len 3
#define MA_dbsw_nFrame__mask 0x07
#define MA_dbsw_nFrame__shift 0x00
#define MA_dbsw_nFrame__reset 0x07
#define set_obj_MA_dbsw_nFrame(o,y) ({ uint8_t __ret = o.read(56); o.write(56,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_dbsw_nFrame(y) ({ uint8_t __ret = ma_read_byte(56); ma_write_byte(56,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_dbsw_nFrame(o) (o.read(56) & 0x07)>>0 
#define get_MA_dbsw_nFrame() ( ma_read_byte(56) & 0x07)>>0 
//------------------------------------------------------------------------------dbsw_addr---
// Serial debug bus writer address 
#define MA_dbsw_addr__a 56
#define MA_dbsw_addr__len 2
#define MA_dbsw_addr__mask 0x18
#define MA_dbsw_addr__shift 0x03
#define MA_dbsw_addr__reset 0x00
#define set_obj_MA_dbsw_addr(o,y) ({ uint8_t __ret = o.read(56); o.write(56,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define set_MA_dbsw_addr(y) ({ uint8_t __ret = ma_read_byte(56); ma_write_byte(56,(__ret&0xe7)|((y<<3)&0x18)); }) 
#define get_obj_MA_dbsw_addr(o) (o.read(56) & 0x18)>>3 
#define get_MA_dbsw_addr() ( ma_read_byte(56) & 0x18)>>3 
//------------------------------------------------------------------------------dbsw_en---
// High to enable serial debug writer 
#define MA_dbsw_en__a 56
#define MA_dbsw_en__len 1
#define MA_dbsw_en__mask 0x40
#define MA_dbsw_en__shift 0x06
#define MA_dbsw_en__reset 0x00
#define set_obj_MA_dbsw_en(o,y) ({ uint8_t __ret = o.read(56); o.write(56,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_dbsw_en(y) ({ uint8_t __ret = ma_read_byte(56); ma_write_byte(56,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_dbsw_en(o) (o.read(56) & 0x40)>>6 
#define get_MA_dbsw_en() ( ma_read_byte(56) & 0x40)>>6 
//------------------------------------------------------------------------------sdm_debug_en---
// Take sdm data from i2s data input pins 
#define MA_sdm_debug_en__a 56
#define MA_sdm_debug_en__len 1
#define MA_sdm_debug_en__mask 0x80
#define MA_sdm_debug_en__shift 0x07
#define MA_sdm_debug_en__reset 0x00
#define set_obj_MA_sdm_debug_en(o,y) ({ uint8_t __ret = o.read(56); o.write(56,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_sdm_debug_en(y) ({ uint8_t __ret = ma_read_byte(56); ma_write_byte(56,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_sdm_debug_en(o) (o.read(56) & 0x80)>>7 
#define get_MA_sdm_debug_en() ( ma_read_byte(56) & 0x80)>>7 
//------------------------------------------------------------------------------pmc_fast---
// 0 for normal PMC, 1 for very fast auto-PMC 
#define MA_pmc_fast__a 56
#define MA_pmc_fast__len 1
#define MA_pmc_fast__mask 0x20
#define MA_pmc_fast__shift 0x05
#define MA_pmc_fast__reset 0x00
#define set_obj_MA_pmc_fast(o,y) ({ uint8_t __ret = o.read(56); o.write(56,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_pmc_fast(y) ({ uint8_t __ret = ma_read_byte(56); ma_write_byte(56,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_pmc_fast(o) (o.read(56) & 0x20)>>5 
#define get_MA_pmc_fast() ( ma_read_byte(56) & 0x20)>>5 
//------------------------------------------------------------------------------oc_use_lvl2---
// When high: Use OC level 0 low signals as OC level 2 protection signals 
#define MA_oc_use_lvl2__a 57
#define MA_oc_use_lvl2__len 1
#define MA_oc_use_lvl2__mask 0x80
#define MA_oc_use_lvl2__shift 0x07
#define MA_oc_use_lvl2__reset 0x00
#define set_obj_MA_oc_use_lvl2(o,y) ({ uint8_t __ret = o.read(57); o.write(57,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_oc_use_lvl2(y) ({ uint8_t __ret = ma_read_byte(57); ma_write_byte(57,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_oc_use_lvl2(o) (o.read(57) & 0x80)>>7 
#define get_MA_oc_use_lvl2() ( ma_read_byte(57) & 0x80)>>7 
//------------------------------------------------------------------------------CMctrl_deadband---
// CM controller dead band.  
#define MA_CMctrl_deadband__a 57
#define MA_CMctrl_deadband__len 4
#define MA_CMctrl_deadband__mask 0x0f
#define MA_CMctrl_deadband__shift 0x00
#define MA_CMctrl_deadband__reset 0x04
#define set_obj_MA_CMctrl_deadband(o,y) ({ uint8_t __ret = o.read(57); o.write(57,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_CMctrl_deadband(y) ({ uint8_t __ret = ma_read_byte(57); ma_write_byte(57,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_CMctrl_deadband(o) (o.read(57) & 0x0f)>>0 
#define get_MA_CMctrl_deadband() ( ma_read_byte(57) & 0x0f)>>0 
//------------------------------------------------------------------------------dc_prot_debug_mode---
// When high: Use ultra fast timeout in DC protection monitor 
#define MA_dc_prot_debug_mode__a 57
#define MA_dc_prot_debug_mode__len 1
#define MA_dc_prot_debug_mode__mask 0x10
#define MA_dc_prot_debug_mode__shift 0x04
#define MA_dc_prot_debug_mode__reset 0x00
#define set_obj_MA_dc_prot_debug_mode(o,y) ({ uint8_t __ret = o.read(57); o.write(57,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_dc_prot_debug_mode(y) ({ uint8_t __ret = ma_read_byte(57); ma_write_byte(57,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_dc_prot_debug_mode(o) (o.read(57) & 0x10)>>4 
#define get_MA_dc_prot_debug_mode() ( ma_read_byte(57) & 0x10)>>4 
//------------------------------------------------------------------------------highZbal_dis---
// High to disable balTypes2+3 (for MA12040) 
#define MA_highZbal_dis__a 57
#define MA_highZbal_dis__len 1
#define MA_highZbal_dis__mask 0x20
#define MA_highZbal_dis__shift 0x05
#define MA_highZbal_dis__reset 0x00
#define set_obj_MA_highZbal_dis(o,y) ({ uint8_t __ret = o.read(57); o.write(57,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_highZbal_dis(y) ({ uint8_t __ret = ma_read_byte(57); ma_write_byte(57,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_highZbal_dis(o) (o.read(57) & 0x20)>>5 
#define get_MA_highZbal_dis() ( ma_read_byte(57) & 0x20)>>5 
//------------------------------------------------------------------------------oc_deglitch_dis---
// When high: Do not deglitch OC trig signals. 
#define MA_oc_deglitch_dis__a 57
#define MA_oc_deglitch_dis__len 1
#define MA_oc_deglitch_dis__mask 0x40
#define MA_oc_deglitch_dis__shift 0x06
#define MA_oc_deglitch_dis__reset 0x00
#define set_obj_MA_oc_deglitch_dis(o,y) ({ uint8_t __ret = o.read(57); o.write(57,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_oc_deglitch_dis(y) ({ uint8_t __ret = ma_read_byte(57); ma_write_byte(57,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_oc_deglitch_dis(o) (o.read(57) & 0x40)>>6 
#define get_MA_oc_deglitch_dis() ( ma_read_byte(57) & 0x40)>>6 
//------------------------------------------------------------------------------cmrr_trim_ext---
// High to use reg bank CMRR trim settings 
#define MA_cmrr_trim_ext__a 58
#define MA_cmrr_trim_ext__len 1
#define MA_cmrr_trim_ext__mask 0x40
#define MA_cmrr_trim_ext__shift 0x06
#define MA_cmrr_trim_ext__reset 0x00
#define set_obj_MA_cmrr_trim_ext(o,y) ({ uint8_t __ret = o.read(58); o.write(58,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_cmrr_trim_ext(y) ({ uint8_t __ret = ma_read_byte(58); ma_write_byte(58,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_cmrr_trim_ext(o) (o.read(58) & 0x40)>>6 
#define get_MA_cmrr_trim_ext() ( ma_read_byte(58) & 0x40)>>6 
//------------------------------------------------------------------------------dac_mode_rz---
// High to use RZ SDM output encoding  
#define MA_dac_mode_rz__a 58
#define MA_dac_mode_rz__len 1
#define MA_dac_mode_rz__mask 0x20
#define MA_dac_mode_rz__shift 0x05
#define MA_dac_mode_rz__reset 0x01
#define set_obj_MA_dac_mode_rz(o,y) ({ uint8_t __ret = o.read(58); o.write(58,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_dac_mode_rz(y) ({ uint8_t __ret = ma_read_byte(58); ma_write_byte(58,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_dac_mode_rz(o) (o.read(58) & 0x20)>>5 
#define get_MA_dac_mode_rz() ( ma_read_byte(58) & 0x20)>>5 
//------------------------------------------------------------------------------clkDiv_sw_cp---
// Audio source mux CP clk freq setting. Zero setting gives pwm tracking mode 
#define MA_clkDiv_sw_cp__a 58
#define MA_clkDiv_sw_cp__len 5
#define MA_clkDiv_sw_cp__mask 0x1f
#define MA_clkDiv_sw_cp__shift 0x00
#define MA_clkDiv_sw_cp__reset 0x00
#define set_obj_MA_clkDiv_sw_cp(o,y) ({ uint8_t __ret = o.read(58); o.write(58,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define set_MA_clkDiv_sw_cp(y) ({ uint8_t __ret = ma_read_byte(58); ma_write_byte(58,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define get_obj_MA_clkDiv_sw_cp(o) (o.read(58) & 0x1f)>>0 
#define get_MA_clkDiv_sw_cp() ( ma_read_byte(58) & 0x1f)>>0 
//------------------------------------------------------------------------------use_int_dac_clk_reg---
// High to use internal clocks for DAC. ORed with fuse setting 
#define MA_use_int_dac_clk_reg__a 58
#define MA_use_int_dac_clk_reg__len 1
#define MA_use_int_dac_clk_reg__mask 0x80
#define MA_use_int_dac_clk_reg__shift 0x07
#define MA_use_int_dac_clk_reg__reset 0x00
#define set_obj_MA_use_int_dac_clk_reg(o,y) ({ uint8_t __ret = o.read(58); o.write(58,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_use_int_dac_clk_reg(y) ({ uint8_t __ret = ma_read_byte(58); ma_write_byte(58,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_use_int_dac_clk_reg(o) (o.read(58) & 0x80)>>7 
#define get_MA_use_int_dac_clk_reg() ( ma_read_byte(58) & 0x80)>>7 
//------------------------------------------------------------------------------cmrr_trim0_reg---
// LF0 register CMRR trim setting 
#define MA_cmrr_trim0_reg__a 59
#define MA_cmrr_trim0_reg__len 5
#define MA_cmrr_trim0_reg__mask 0x1f
#define MA_cmrr_trim0_reg__shift 0x00
#define MA_cmrr_trim0_reg__reset 0x14
#define set_obj_MA_cmrr_trim0_reg(o,y) ({ uint8_t __ret = o.read(59); o.write(59,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define set_MA_cmrr_trim0_reg(y) ({ uint8_t __ret = ma_read_byte(59); ma_write_byte(59,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define get_obj_MA_cmrr_trim0_reg(o) (o.read(59) & 0x1f)>>0 
#define get_MA_cmrr_trim0_reg() ( ma_read_byte(59) & 0x1f)>>0 
//------------------------------------------------------------------------------lf_bias_scale_ext---
// High to use reg. bank LF bias scale setting 
#define MA_lf_bias_scale_ext__a 59
#define MA_lf_bias_scale_ext__len 1
#define MA_lf_bias_scale_ext__mask 0x20
#define MA_lf_bias_scale_ext__shift 0x05
#define MA_lf_bias_scale_ext__reset 0x00
#define set_obj_MA_lf_bias_scale_ext(o,y) ({ uint8_t __ret = o.read(59); o.write(59,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_lf_bias_scale_ext(y) ({ uint8_t __ret = ma_read_byte(59); ma_write_byte(59,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_lf_bias_scale_ext(o) (o.read(59) & 0x20)>>5 
#define get_MA_lf_bias_scale_ext() ( ma_read_byte(59) & 0x20)>>5 
//------------------------------------------------------------------------------lf_bias_scale_reg---
// LF/PWM bias setting. 00=x1, 11=x2 
#define MA_lf_bias_scale_reg__a 59
#define MA_lf_bias_scale_reg__len 2
#define MA_lf_bias_scale_reg__mask 0xc0
#define MA_lf_bias_scale_reg__shift 0x06
#define MA_lf_bias_scale_reg__reset 0x00
#define set_obj_MA_lf_bias_scale_reg(o,y) ({ uint8_t __ret = o.read(59); o.write(59,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define set_MA_lf_bias_scale_reg(y) ({ uint8_t __ret = ma_read_byte(59); ma_write_byte(59,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define get_obj_MA_lf_bias_scale_reg(o) (o.read(59) & 0xc0)>>6 
#define get_MA_lf_bias_scale_reg() ( ma_read_byte(59) & 0xc0)>>6 
//------------------------------------------------------------------------------cmrr_trim1_reg---
// LF1 register CMRR trim setting 
#define MA_cmrr_trim1_reg__a 60
#define MA_cmrr_trim1_reg__len 5
#define MA_cmrr_trim1_reg__mask 0x1f
#define MA_cmrr_trim1_reg__shift 0x00
#define MA_cmrr_trim1_reg__reset 0x14
#define set_obj_MA_cmrr_trim1_reg(o,y) ({ uint8_t __ret = o.read(60); o.write(60,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define set_MA_cmrr_trim1_reg(y) ({ uint8_t __ret = ma_read_byte(60); ma_write_byte(60,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define get_obj_MA_cmrr_trim1_reg(o) (o.read(60) & 0x1f)>>0 
#define get_MA_cmrr_trim1_reg() ( ma_read_byte(60) & 0x1f)>>0 
//------------------------------------------------------------------------------sdm_sck_sel_ext---
// High to use reg SDM sck setting 
#define MA_sdm_sck_sel_ext__a 60
#define MA_sdm_sck_sel_ext__len 1
#define MA_sdm_sck_sel_ext__mask 0x20
#define MA_sdm_sck_sel_ext__shift 0x05
#define MA_sdm_sck_sel_ext__reset 0x00
#define set_obj_MA_sdm_sck_sel_ext(o,y) ({ uint8_t __ret = o.read(60); o.write(60,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_sdm_sck_sel_ext(y) ({ uint8_t __ret = ma_read_byte(60); ma_write_byte(60,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_sdm_sck_sel_ext(o) (o.read(60) & 0x20)>>5 
#define get_MA_sdm_sck_sel_ext() ( ma_read_byte(60) & 0x20)>>5 
//------------------------------------------------------------------------------sdm_sck_sel_reg---
// Reg bank SDM sck mux setting 
#define MA_sdm_sck_sel_reg__a 60
#define MA_sdm_sck_sel_reg__len 2
#define MA_sdm_sck_sel_reg__mask 0xc0
#define MA_sdm_sck_sel_reg__shift 0x06
#define MA_sdm_sck_sel_reg__reset 0x00
#define set_obj_MA_sdm_sck_sel_reg(o,y) ({ uint8_t __ret = o.read(60); o.write(60,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define set_MA_sdm_sck_sel_reg(y) ({ uint8_t __ret = ma_read_byte(60); ma_write_byte(60,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define get_obj_MA_sdm_sck_sel_reg(o) (o.read(60) & 0xc0)>>6 
#define get_MA_sdm_sck_sel_reg() ( ma_read_byte(60) & 0xc0)>>6 
//------------------------------------------------------------------------------bg_itrim_ext---
// High to use reg bank trim setting. 
#define MA_bg_itrim_ext__a 61
#define MA_bg_itrim_ext__len 1
#define MA_bg_itrim_ext__mask 0x20
#define MA_bg_itrim_ext__shift 0x05
#define MA_bg_itrim_ext__reset 0x00
#define set_obj_MA_bg_itrim_ext(o,y) ({ uint8_t __ret = o.read(61); o.write(61,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_bg_itrim_ext(y) ({ uint8_t __ret = ma_read_byte(61); ma_write_byte(61,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_bg_itrim_ext(o) (o.read(61) & 0x20)>>5 
#define get_MA_bg_itrim_ext() ( ma_read_byte(61) & 0x20)>>5 
//------------------------------------------------------------------------------bg_itrim_reg---
// Reg bank LN BG itrim setting 
#define MA_bg_itrim_reg__a 61
#define MA_bg_itrim_reg__len 5
#define MA_bg_itrim_reg__mask 0x1f
#define MA_bg_itrim_reg__shift 0x00
#define MA_bg_itrim_reg__reset 0x0f
#define set_obj_MA_bg_itrim_reg(o,y) ({ uint8_t __ret = o.read(61); o.write(61,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define set_MA_bg_itrim_reg(y) ({ uint8_t __ret = ma_read_byte(61); ma_write_byte(61,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define get_obj_MA_bg_itrim_reg(o) (o.read(61) & 0x1f)>>0 
#define get_MA_bg_itrim_reg() ( ma_read_byte(61) & 0x1f)>>0 
//------------------------------------------------------------------------------sif_mode_i2c_ext---
// High to take setting from register bank, low to take setting from fuse bank.  
#define MA_sif_mode_i2c_ext__a 61
#define MA_sif_mode_i2c_ext__len 1
#define MA_sif_mode_i2c_ext__mask 0x80
#define MA_sif_mode_i2c_ext__shift 0x07
#define MA_sif_mode_i2c_ext__reset 0x00
#define set_obj_MA_sif_mode_i2c_ext(o,y) ({ uint8_t __ret = o.read(61); o.write(61,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_sif_mode_i2c_ext(y) ({ uint8_t __ret = ma_read_byte(61); ma_write_byte(61,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_sif_mode_i2c_ext(o) (o.read(61) & 0x80)>>7 
#define get_MA_sif_mode_i2c_ext() ( ma_read_byte(61) & 0x80)>>7 
//------------------------------------------------------------------------------sif_mode_i2c_reg---
// Select serial interface mode. High for I2C, low for SPI. 
#define MA_sif_mode_i2c_reg__a 61
#define MA_sif_mode_i2c_reg__len 1
#define MA_sif_mode_i2c_reg__mask 0x40
#define MA_sif_mode_i2c_reg__shift 0x06
#define MA_sif_mode_i2c_reg__reset 0x01
#define set_obj_MA_sif_mode_i2c_reg(o,y) ({ uint8_t __ret = o.read(61); o.write(61,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_sif_mode_i2c_reg(y) ({ uint8_t __ret = ma_read_byte(61); ma_write_byte(61,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_sif_mode_i2c_reg(o) (o.read(61) & 0x40)>>6 
#define get_MA_sif_mode_i2c_reg() ( ma_read_byte(61) & 0x40)>>6 
//------------------------------------------------------------------------------vol_db_master---
// Master volume db 
#define MA_vol_db_master__a 64
#define MA_vol_db_master__len 8
#define MA_vol_db_master__mask 0xff
#define MA_vol_db_master__shift 0x00
#define MA_vol_db_master__reset 0x18
#define set_obj_MA_vol_db_master(o,y) o.write(64,y);
#define set_MA_vol_db_master(y) ma_write_byte(64,y);
#define get_obj_MA_vol_db_master(o) (o.read(64) & 0xff)>>0 
#define get_MA_vol_db_master() ( ma_read_byte(64) & 0xff)>>0 
//------------------------------------------------------------------------------vol_lsb_master---
// Master volume lsb 1/4 steps 
#define MA_vol_lsb_master__a 65
#define MA_vol_lsb_master__len 2
#define MA_vol_lsb_master__mask 0x03
#define MA_vol_lsb_master__shift 0x00
#define MA_vol_lsb_master__reset 0x00
#define set_obj_MA_vol_lsb_master(o,y) ({ uint8_t __ret = o.read(65); o.write(65,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_vol_lsb_master(y) ({ uint8_t __ret = ma_read_byte(65); ma_write_byte(65,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_vol_lsb_master(o) (o.read(65) & 0x03)>>0 
#define get_MA_vol_lsb_master() ( ma_read_byte(65) & 0x03)>>0 
//------------------------------------------------------------------------------vol_db_ch0---
// Volume channel 0 
#define MA_vol_db_ch0__a 66
#define MA_vol_db_ch0__len 8
#define MA_vol_db_ch0__mask 0xff
#define MA_vol_db_ch0__shift 0x00
#define MA_vol_db_ch0__reset 0x18
#define set_obj_MA_vol_db_ch0(o,y) o.write(66,y);
#define set_MA_vol_db_ch0(y) ma_write_byte(66,y);
#define get_obj_MA_vol_db_ch0(o) (o.read(66) & 0xff)>>0 
#define get_MA_vol_db_ch0() ( ma_read_byte(66) & 0xff)>>0 
//------------------------------------------------------------------------------vol_db_ch1---
// Volume channel 1 
#define MA_vol_db_ch1__a 67
#define MA_vol_db_ch1__len 8
#define MA_vol_db_ch1__mask 0xff
#define MA_vol_db_ch1__shift 0x00
#define MA_vol_db_ch1__reset 0x18
#define set_obj_MA_vol_db_ch1(o,y) o.write(67,y);
#define set_MA_vol_db_ch1(y) ma_write_byte(67,y);
#define get_obj_MA_vol_db_ch1(o) (o.read(67) & 0xff)>>0 
#define get_MA_vol_db_ch1() ( ma_read_byte(67) & 0xff)>>0 
//------------------------------------------------------------------------------vol_db_ch2---
// Volume channel 2 
#define MA_vol_db_ch2__a 68
#define MA_vol_db_ch2__len 8
#define MA_vol_db_ch2__mask 0xff
#define MA_vol_db_ch2__shift 0x00
#define MA_vol_db_ch2__reset 0x18
#define set_obj_MA_vol_db_ch2(o,y) o.write(68,y);
#define set_MA_vol_db_ch2(y) ma_write_byte(68,y);
#define get_obj_MA_vol_db_ch2(o) (o.read(68) & 0xff)>>0 
#define get_MA_vol_db_ch2() ( ma_read_byte(68) & 0xff)>>0 
//------------------------------------------------------------------------------vol_db_ch3---
// Volume channel 3 
#define MA_vol_db_ch3__a 69
#define MA_vol_db_ch3__len 8
#define MA_vol_db_ch3__mask 0xff
#define MA_vol_db_ch3__shift 0x00
#define MA_vol_db_ch3__reset 0x18
#define set_obj_MA_vol_db_ch3(o,y) o.write(69,y);
#define set_MA_vol_db_ch3(y) ma_write_byte(69,y);
#define get_obj_MA_vol_db_ch3(o) (o.read(69) & 0xff)>>0 
#define get_MA_vol_db_ch3() ( ma_read_byte(69) & 0xff)>>0 
//------------------------------------------------------------------------------vol_lsb_ch0---
// volume channel 1 - 1/4 steps 
#define MA_vol_lsb_ch0__a 70
#define MA_vol_lsb_ch0__len 2
#define MA_vol_lsb_ch0__mask 0x03
#define MA_vol_lsb_ch0__shift 0x00
#define MA_vol_lsb_ch0__reset 0x00
#define set_obj_MA_vol_lsb_ch0(o,y) ({ uint8_t __ret = o.read(70); o.write(70,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_vol_lsb_ch0(y) ({ uint8_t __ret = ma_read_byte(70); ma_write_byte(70,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_vol_lsb_ch0(o) (o.read(70) & 0x03)>>0 
#define get_MA_vol_lsb_ch0() ( ma_read_byte(70) & 0x03)>>0 
//------------------------------------------------------------------------------vol_lsb_ch1---
// volume channel 3 - 1/4 steps 
#define MA_vol_lsb_ch1__a 70
#define MA_vol_lsb_ch1__len 2
#define MA_vol_lsb_ch1__mask 0x0c
#define MA_vol_lsb_ch1__shift 0x02
#define MA_vol_lsb_ch1__reset 0x00
#define set_obj_MA_vol_lsb_ch1(o,y) ({ uint8_t __ret = o.read(70); o.write(70,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define set_MA_vol_lsb_ch1(y) ({ uint8_t __ret = ma_read_byte(70); ma_write_byte(70,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define get_obj_MA_vol_lsb_ch1(o) (o.read(70) & 0x0c)>>2 
#define get_MA_vol_lsb_ch1() ( ma_read_byte(70) & 0x0c)>>2 
//------------------------------------------------------------------------------vol_lsb_ch2---
// volume channel 2 - 1/4 steps 
#define MA_vol_lsb_ch2__a 70
#define MA_vol_lsb_ch2__len 2
#define MA_vol_lsb_ch2__mask 0x30
#define MA_vol_lsb_ch2__shift 0x04
#define MA_vol_lsb_ch2__reset 0x00
#define set_obj_MA_vol_lsb_ch2(o,y) ({ uint8_t __ret = o.read(70); o.write(70,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define set_MA_vol_lsb_ch2(y) ({ uint8_t __ret = ma_read_byte(70); ma_write_byte(70,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define get_obj_MA_vol_lsb_ch2(o) (o.read(70) & 0x30)>>4 
#define get_MA_vol_lsb_ch2() ( ma_read_byte(70) & 0x30)>>4 
//------------------------------------------------------------------------------vol_lsb_ch3---
// volume channel 3 - 1/4 steps 
#define MA_vol_lsb_ch3__a 70
#define MA_vol_lsb_ch3__len 2
#define MA_vol_lsb_ch3__mask 0xc0
#define MA_vol_lsb_ch3__shift 0x06
#define MA_vol_lsb_ch3__reset 0x00
#define set_obj_MA_vol_lsb_ch3(o,y) ({ uint8_t __ret = o.read(70); o.write(70,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define set_MA_vol_lsb_ch3(y) ({ uint8_t __ret = ma_read_byte(70); ma_write_byte(70,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define get_obj_MA_vol_lsb_ch3(o) (o.read(70) & 0xc0)>>6 
#define get_MA_vol_lsb_ch3() ( ma_read_byte(70) & 0xc0)>>6 
//------------------------------------------------------------------------------thr_db_ch0---
// thr_db channel 0 
#define MA_thr_db_ch0__a 71
#define MA_thr_db_ch0__len 8
#define MA_thr_db_ch0__mask 0xff
#define MA_thr_db_ch0__shift 0x00
#define MA_thr_db_ch0__reset 0x18
#define set_obj_MA_thr_db_ch0(o,y) o.write(71,y);
#define set_MA_thr_db_ch0(y) ma_write_byte(71,y);
#define get_obj_MA_thr_db_ch0(o) (o.read(71) & 0xff)>>0 
#define get_MA_thr_db_ch0() ( ma_read_byte(71) & 0xff)>>0 
//------------------------------------------------------------------------------thr_db_ch1---
// Thr db ch1 
#define MA_thr_db_ch1__a 72
#define MA_thr_db_ch1__len 8
#define MA_thr_db_ch1__mask 0xff
#define MA_thr_db_ch1__shift 0x00
#define MA_thr_db_ch1__reset 0x18
#define set_obj_MA_thr_db_ch1(o,y) o.write(72,y);
#define set_MA_thr_db_ch1(y) ma_write_byte(72,y);
#define get_obj_MA_thr_db_ch1(o) (o.read(72) & 0xff)>>0 
#define get_MA_thr_db_ch1() ( ma_read_byte(72) & 0xff)>>0 
//------------------------------------------------------------------------------thr_db_ch2---
// thr db ch2 
#define MA_thr_db_ch2__a 73
#define MA_thr_db_ch2__len 8
#define MA_thr_db_ch2__mask 0xff
#define MA_thr_db_ch2__shift 0x00
#define MA_thr_db_ch2__reset 0x18
#define set_obj_MA_thr_db_ch2(o,y) o.write(73,y);
#define set_MA_thr_db_ch2(y) ma_write_byte(73,y);
#define get_obj_MA_thr_db_ch2(o) (o.read(73) & 0xff)>>0 
#define get_MA_thr_db_ch2() ( ma_read_byte(73) & 0xff)>>0 
//------------------------------------------------------------------------------thr_db_ch3---
// Threshold db ch3   
#define MA_thr_db_ch3__a 74
#define MA_thr_db_ch3__len 8
#define MA_thr_db_ch3__mask 0xff
#define MA_thr_db_ch3__shift 0x00
#define MA_thr_db_ch3__reset 0x18
#define set_obj_MA_thr_db_ch3(o,y) o.write(74,y);
#define set_MA_thr_db_ch3(y) ma_write_byte(74,y);
#define get_obj_MA_thr_db_ch3(o) (o.read(74) & 0xff)>>0 
#define get_MA_thr_db_ch3() ( ma_read_byte(74) & 0xff)>>0 
//------------------------------------------------------------------------------thr_lsb_ch0---
// Thr lsb ch0 
#define MA_thr_lsb_ch0__a 75
#define MA_thr_lsb_ch0__len 2
#define MA_thr_lsb_ch0__mask 0x03
#define MA_thr_lsb_ch0__shift 0x00
#define MA_thr_lsb_ch0__reset 0x00
#define set_obj_MA_thr_lsb_ch0(o,y) ({ uint8_t __ret = o.read(75); o.write(75,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_thr_lsb_ch0(y) ({ uint8_t __ret = ma_read_byte(75); ma_write_byte(75,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_thr_lsb_ch0(o) (o.read(75) & 0x03)>>0 
#define get_MA_thr_lsb_ch0() ( ma_read_byte(75) & 0x03)>>0 
//------------------------------------------------------------------------------thr_lsb_ch1---
// thr lsb ch1 
#define MA_thr_lsb_ch1__a 75
#define MA_thr_lsb_ch1__len 2
#define MA_thr_lsb_ch1__mask 0x0c
#define MA_thr_lsb_ch1__shift 0x02
#define MA_thr_lsb_ch1__reset 0x00
#define set_obj_MA_thr_lsb_ch1(o,y) ({ uint8_t __ret = o.read(75); o.write(75,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define set_MA_thr_lsb_ch1(y) ({ uint8_t __ret = ma_read_byte(75); ma_write_byte(75,(__ret&0xf3)|((y<<2)&0x0c)); }) 
#define get_obj_MA_thr_lsb_ch1(o) (o.read(75) & 0x0c)>>2 
#define get_MA_thr_lsb_ch1() ( ma_read_byte(75) & 0x0c)>>2 
//------------------------------------------------------------------------------thr_lsb_ch2---
// thr lsb ch2 1/4 db step 
#define MA_thr_lsb_ch2__a 75
#define MA_thr_lsb_ch2__len 2
#define MA_thr_lsb_ch2__mask 0x30
#define MA_thr_lsb_ch2__shift 0x04
#define MA_thr_lsb_ch2__reset 0x00
#define set_obj_MA_thr_lsb_ch2(o,y) ({ uint8_t __ret = o.read(75); o.write(75,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define set_MA_thr_lsb_ch2(y) ({ uint8_t __ret = ma_read_byte(75); ma_write_byte(75,(__ret&0xcf)|((y<<4)&0x30)); }) 
#define get_obj_MA_thr_lsb_ch2(o) (o.read(75) & 0x30)>>4 
#define get_MA_thr_lsb_ch2() ( ma_read_byte(75) & 0x30)>>4 
//------------------------------------------------------------------------------thr_lsb_ch3---
// threshold lsb ch3 
#define MA_thr_lsb_ch3__a 75
#define MA_thr_lsb_ch3__len 2
#define MA_thr_lsb_ch3__mask 0xc0
#define MA_thr_lsb_ch3__shift 0x06
#define MA_thr_lsb_ch3__reset 0x00
#define set_obj_MA_thr_lsb_ch3(o,y) ({ uint8_t __ret = o.read(75); o.write(75,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define set_MA_thr_lsb_ch3(y) ({ uint8_t __ret = ma_read_byte(75); ma_write_byte(75,(__ret&0x3f)|((y<<6)&0xc0)); }) 
#define get_obj_MA_thr_lsb_ch3(o) (o.read(75) & 0xc0)>>6 
#define get_MA_thr_lsb_ch3() ( ma_read_byte(75) & 0xc0)>>6 
//------------------------------------------------------------------------------ilm_offCountThr_reg---
// Iout pol. meas. alg.  
#define MA_ilm_offCountThr_reg__a 76
#define MA_ilm_offCountThr_reg__len 3
#define MA_ilm_offCountThr_reg__mask 0x07
#define MA_ilm_offCountThr_reg__shift 0x00
#define MA_ilm_offCountThr_reg__reset 0x05
#define set_obj_MA_ilm_offCountThr_reg(o,y) ({ uint8_t __ret = o.read(76); o.write(76,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_ilm_offCountThr_reg(y) ({ uint8_t __ret = ma_read_byte(76); ma_write_byte(76,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_ilm_offCountThr_reg(o) (o.read(76) & 0x07)>>0 
#define get_MA_ilm_offCountThr_reg() ( ma_read_byte(76) & 0x07)>>0 
//------------------------------------------------------------------------------ilm_offCountThr_ext---
// High to use reg bank setting 
#define MA_ilm_offCountThr_ext__a 76
#define MA_ilm_offCountThr_ext__len 1
#define MA_ilm_offCountThr_ext__mask 0x08
#define MA_ilm_offCountThr_ext__shift 0x03
#define MA_ilm_offCountThr_ext__reset 0x00
#define set_obj_MA_ilm_offCountThr_ext(o,y) ({ uint8_t __ret = o.read(76); o.write(76,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_ilm_offCountThr_ext(y) ({ uint8_t __ret = ma_read_byte(76); ma_write_byte(76,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_ilm_offCountThr_ext(o) (o.read(76) & 0x08)>>3 
#define get_MA_ilm_offCountThr_ext() ( ma_read_byte(76) & 0x08)>>3 
//------------------------------------------------------------------------------ilm_measDelayCountThr_reg---
// Iout pol. meas. alg. delay cycles 
#define MA_ilm_measDelayCountThr_reg__a 76
#define MA_ilm_measDelayCountThr_reg__len 3
#define MA_ilm_measDelayCountThr_reg__mask 0x70
#define MA_ilm_measDelayCountThr_reg__shift 0x04
#define MA_ilm_measDelayCountThr_reg__reset 0x07
#define set_obj_MA_ilm_measDelayCountThr_reg(o,y) ({ uint8_t __ret = o.read(76); o.write(76,(__ret&0x8f)|((y<<4)&0x70)); }) 
#define set_MA_ilm_measDelayCountThr_reg(y) ({ uint8_t __ret = ma_read_byte(76); ma_write_byte(76,(__ret&0x8f)|((y<<4)&0x70)); }) 
#define get_obj_MA_ilm_measDelayCountThr_reg(o) (o.read(76) & 0x70)>>4 
#define get_MA_ilm_measDelayCountThr_reg() ( ma_read_byte(76) & 0x70)>>4 
//------------------------------------------------------------------------------ilm_measDelayCountThr_ext---
// High to use reg. bank setting 
#define MA_ilm_measDelayCountThr_ext__a 76
#define MA_ilm_measDelayCountThr_ext__len 1
#define MA_ilm_measDelayCountThr_ext__mask 0x80
#define MA_ilm_measDelayCountThr_ext__shift 0x07
#define MA_ilm_measDelayCountThr_ext__reset 0x00
#define set_obj_MA_ilm_measDelayCountThr_ext(o,y) ({ uint8_t __ret = o.read(76); o.write(76,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_ilm_measDelayCountThr_ext(y) ({ uint8_t __ret = ma_read_byte(76); ma_write_byte(76,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_ilm_measDelayCountThr_ext(o) (o.read(76) & 0x80)>>7 
#define get_MA_ilm_measDelayCountThr_ext() ( ma_read_byte(76) & 0x80)>>7 
//------------------------------------------------------------------------------ilm_invalid_delay---
// Parameter for OC level 0 balancing scheme. Sets the delay in 40ns steps from powerstage transitions to the OC signal becomes invalid. 
#define MA_ilm_invalid_delay__a 77
#define MA_ilm_invalid_delay__len 3
#define MA_ilm_invalid_delay__mask 0xe0
#define MA_ilm_invalid_delay__shift 0x05
#define MA_ilm_invalid_delay__reset 0x00
#define set_obj_MA_ilm_invalid_delay(o,y) ({ uint8_t __ret = o.read(77); o.write(77,(__ret&0x1f)|((y<<5)&0xe0)); }) 
#define set_MA_ilm_invalid_delay(y) ({ uint8_t __ret = ma_read_byte(77); ma_write_byte(77,(__ret&0x1f)|((y<<5)&0xe0)); }) 
#define get_obj_MA_ilm_invalid_delay(o) (o.read(77) & 0xe0)>>5 
#define get_MA_ilm_invalid_delay() ( ma_read_byte(77) & 0xe0)>>5 
//------------------------------------------------------------------------------cmrr_ctrim0_reg---
// LF0 HF CMRR trim handle 
#define MA_cmrr_ctrim0_reg__a 77
#define MA_cmrr_ctrim0_reg__len 5
#define MA_cmrr_ctrim0_reg__mask 0x1f
#define MA_cmrr_ctrim0_reg__shift 0x00
#define MA_cmrr_ctrim0_reg__reset 0x10
#define set_obj_MA_cmrr_ctrim0_reg(o,y) ({ uint8_t __ret = o.read(77); o.write(77,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define set_MA_cmrr_ctrim0_reg(y) ({ uint8_t __ret = ma_read_byte(77); ma_write_byte(77,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define get_obj_MA_cmrr_ctrim0_reg(o) (o.read(77) & 0x1f)>>0 
#define get_MA_cmrr_ctrim0_reg() ( ma_read_byte(77) & 0x1f)>>0 
//------------------------------------------------------------------------------ilm_valid_delay---
// Parameter for OC level 0 balancing scheme. Sets the delay in 40ns steps from powerstage transitions to the OC signal becomes valid. 
#define MA_ilm_valid_delay__a 78
#define MA_ilm_valid_delay__len 3
#define MA_ilm_valid_delay__mask 0xe0
#define MA_ilm_valid_delay__shift 0x05
#define MA_ilm_valid_delay__reset 0x07
#define set_obj_MA_ilm_valid_delay(o,y) ({ uint8_t __ret = o.read(78); o.write(78,(__ret&0x1f)|((y<<5)&0xe0)); }) 
#define set_MA_ilm_valid_delay(y) ({ uint8_t __ret = ma_read_byte(78); ma_write_byte(78,(__ret&0x1f)|((y<<5)&0xe0)); }) 
#define get_obj_MA_ilm_valid_delay(o) (o.read(78) & 0xe0)>>5 
#define get_MA_ilm_valid_delay() ( ma_read_byte(78) & 0xe0)>>5 
//------------------------------------------------------------------------------cmrr_ctrim1_reg---
// LF01 HF CMRR trim handle 
#define MA_cmrr_ctrim1_reg__a 78
#define MA_cmrr_ctrim1_reg__len 5
#define MA_cmrr_ctrim1_reg__mask 0x1f
#define MA_cmrr_ctrim1_reg__shift 0x00
#define MA_cmrr_ctrim1_reg__reset 0x10
#define set_obj_MA_cmrr_ctrim1_reg(o,y) ({ uint8_t __ret = o.read(78); o.write(78,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define set_MA_cmrr_ctrim1_reg(y) ({ uint8_t __ret = ma_read_byte(78); ma_write_byte(78,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define get_obj_MA_cmrr_ctrim1_reg(o) (o.read(78) & 0x1f)>>0 
#define get_MA_cmrr_ctrim1_reg() ( ma_read_byte(78) & 0x1f)>>0 
//------------------------------------------------------------------------------hvb_cp_period---
// Power supply charge pump frequency control. The cycle frequency becomes 3*hvb_cp_period in vco clk cycles. Setting 0 gives a frequency of 4/3 of the pwm base frequency. 
#define MA_hvb_cp_period__a 79
#define MA_hvb_cp_period__len 8
#define MA_hvb_cp_period__mask 0xff
#define MA_hvb_cp_period__shift 0x00
#define MA_hvb_cp_period__reset 0x00
#define set_obj_MA_hvb_cp_period(o,y) o.write(79,y);
#define set_MA_hvb_cp_period(y) ma_write_byte(79,y);
#define get_obj_MA_hvb_cp_period(o) (o.read(79) & 0xff)>>0 
#define get_MA_hvb_cp_period() ( ma_read_byte(79) & 0xff)>>0 
//------------------------------------------------------------------------------fet_testPattern_a_reg---
// 2s-complement A bridge switch state (test mode) 
#define MA_fet_testPattern_a_reg__a 80
#define MA_fet_testPattern_a_reg__len 3
#define MA_fet_testPattern_a_reg__mask 0x07
#define MA_fet_testPattern_a_reg__shift 0x00
#define MA_fet_testPattern_a_reg__reset 0x00
#define set_obj_MA_fet_testPattern_a_reg(o,y) ({ uint8_t __ret = o.read(80); o.write(80,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_fet_testPattern_a_reg(y) ({ uint8_t __ret = ma_read_byte(80); ma_write_byte(80,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_fet_testPattern_a_reg(o) (o.read(80) & 0x07)>>0 
#define get_MA_fet_testPattern_a_reg() ( ma_read_byte(80) & 0x07)>>0 
//------------------------------------------------------------------------------fet_testPattern_b_reg---
// 2s-complement B bridge switch state (test mode) 
#define MA_fet_testPattern_b_reg__a 80
#define MA_fet_testPattern_b_reg__len 3
#define MA_fet_testPattern_b_reg__mask 0x38
#define MA_fet_testPattern_b_reg__shift 0x03
#define MA_fet_testPattern_b_reg__reset 0x00
#define set_obj_MA_fet_testPattern_b_reg(o,y) ({ uint8_t __ret = o.read(80); o.write(80,(__ret&0xc7)|((y<<3)&0x38)); }) 
#define set_MA_fet_testPattern_b_reg(y) ({ uint8_t __ret = ma_read_byte(80); ma_write_byte(80,(__ret&0xc7)|((y<<3)&0x38)); }) 
#define get_obj_MA_fet_testPattern_b_reg(o) (o.read(80) & 0x38)>>3 
#define get_MA_fet_testPattern_b_reg() ( ma_read_byte(80) & 0x38)>>3 
//------------------------------------------------------------------------------fet_testMode_reg---
// High to enter FET testMode (static FET cfg) 
#define MA_fet_testMode_reg__a 80
#define MA_fet_testMode_reg__len 1
#define MA_fet_testMode_reg__mask 0x40
#define MA_fet_testMode_reg__shift 0x06
#define MA_fet_testMode_reg__reset 0x00
#define set_obj_MA_fet_testMode_reg(o,y) ({ uint8_t __ret = o.read(80); o.write(80,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_fet_testMode_reg(y) ({ uint8_t __ret = ma_read_byte(80); ma_write_byte(80,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_fet_testMode_reg(o) (o.read(80) & 0x40)>>6 
#define get_MA_fet_testMode_reg() ( ma_read_byte(80) & 0x40)>>6 
//------------------------------------------------------------------------------dcu_mon0.PM_mon---
// Power mode monitor channel 0 
#define MA_dcu_mon0__PM_mon__a 96
#define MA_dcu_mon0__PM_mon__len 2
#define MA_dcu_mon0__PM_mon__mask 0x03
#define MA_dcu_mon0__PM_mon__shift 0x00
#define MA_dcu_mon0__PM_mon__reset 0x00
#define set_obj_MA_dcu_mon0__PM_mon(o,y) ({ uint8_t __ret = o.read(96); o.write(96,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_dcu_mon0__PM_mon(y) ({ uint8_t __ret = ma_read_byte(96); ma_write_byte(96,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_dcu_mon0__PM_mon(o) (o.read(96) & 0x03)>>0 
#define get_MA_dcu_mon0__PM_mon() ( ma_read_byte(96) & 0x03)>>0 
//------------------------------------------------------------------------------dcu_mon0.freqMode_mon---
// Frequence mode monitor channel 0 
#define MA_dcu_mon0__freqMode_mon__a 96
#define MA_dcu_mon0__freqMode_mon__len 3
#define MA_dcu_mon0__freqMode_mon__mask 0x70
#define MA_dcu_mon0__freqMode_mon__shift 0x04
#define MA_dcu_mon0__freqMode_mon__reset 0x00
#define set_obj_MA_dcu_mon0__freqMode_mon(o,y) ({ uint8_t __ret = o.read(96); o.write(96,(__ret&0x8f)|((y<<4)&0x70)); }) 
#define set_MA_dcu_mon0__freqMode_mon(y) ({ uint8_t __ret = ma_read_byte(96); ma_write_byte(96,(__ret&0x8f)|((y<<4)&0x70)); }) 
#define get_obj_MA_dcu_mon0__freqMode_mon(o) (o.read(96) & 0x70)>>4 
#define get_MA_dcu_mon0__freqMode_mon() ( ma_read_byte(96) & 0x70)>>4 
//------------------------------------------------------------------------------dcu_mon0.pps_passed---
// DCU0 PPS completion indicator 
#define MA_dcu_mon0__pps_passed__a 96
#define MA_dcu_mon0__pps_passed__len 1
#define MA_dcu_mon0__pps_passed__mask 0x80
#define MA_dcu_mon0__pps_passed__shift 0x07
#define MA_dcu_mon0__pps_passed__reset 0x00
#define set_obj_MA_dcu_mon0__pps_passed(o,y) ({ uint8_t __ret = o.read(96); o.write(96,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_dcu_mon0__pps_passed(y) ({ uint8_t __ret = ma_read_byte(96); ma_write_byte(96,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_dcu_mon0__pps_passed(o) (o.read(96) & 0x80)>>7 
#define get_MA_dcu_mon0__pps_passed() ( ma_read_byte(96) & 0x80)>>7 
//------------------------------------------------------------------------------dcu_mon0.OCP_mon---
// OCP Monitor channel 0 
#define MA_dcu_mon0__OCP_mon__a 97
#define MA_dcu_mon0__OCP_mon__len 1
#define MA_dcu_mon0__OCP_mon__mask 0x01
#define MA_dcu_mon0__OCP_mon__shift 0x00
#define MA_dcu_mon0__OCP_mon__reset 0x00
#define set_obj_MA_dcu_mon0__OCP_mon(o,y) ({ uint8_t __ret = o.read(97); o.write(97,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_dcu_mon0__OCP_mon(y) ({ uint8_t __ret = ma_read_byte(97); ma_write_byte(97,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_dcu_mon0__OCP_mon(o) (o.read(97) & 0x01)>>0 
#define get_MA_dcu_mon0__OCP_mon() ( ma_read_byte(97) & 0x01)>>0 
//------------------------------------------------------------------------------dcu_mon0.Vcfly1_ok---
// Cfly1 protection monitor channel 0. 
#define MA_dcu_mon0__Vcfly1_ok__a 97
#define MA_dcu_mon0__Vcfly1_ok__len 1
#define MA_dcu_mon0__Vcfly1_ok__mask 0x02
#define MA_dcu_mon0__Vcfly1_ok__shift 0x01
#define MA_dcu_mon0__Vcfly1_ok__reset 0x00
#define set_obj_MA_dcu_mon0__Vcfly1_ok(o,y) ({ uint8_t __ret = o.read(97); o.write(97,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define set_MA_dcu_mon0__Vcfly1_ok(y) ({ uint8_t __ret = ma_read_byte(97); ma_write_byte(97,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define get_obj_MA_dcu_mon0__Vcfly1_ok(o) (o.read(97) & 0x02)>>1 
#define get_MA_dcu_mon0__Vcfly1_ok() ( ma_read_byte(97) & 0x02)>>1 
//------------------------------------------------------------------------------dcu_mon0.Vcfly2_ok---
// Cfly2 protection monitor channel 0. 
#define MA_dcu_mon0__Vcfly2_ok__a 97
#define MA_dcu_mon0__Vcfly2_ok__len 1
#define MA_dcu_mon0__Vcfly2_ok__mask 0x04
#define MA_dcu_mon0__Vcfly2_ok__shift 0x02
#define MA_dcu_mon0__Vcfly2_ok__reset 0x00
#define set_obj_MA_dcu_mon0__Vcfly2_ok(o,y) ({ uint8_t __ret = o.read(97); o.write(97,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define set_MA_dcu_mon0__Vcfly2_ok(y) ({ uint8_t __ret = ma_read_byte(97); ma_write_byte(97,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define get_obj_MA_dcu_mon0__Vcfly2_ok(o) (o.read(97) & 0x04)>>2 
#define get_MA_dcu_mon0__Vcfly2_ok() ( ma_read_byte(97) & 0x04)>>2 
//------------------------------------------------------------------------------dcu_mon0.pvdd_ok---
// DCU0 PVDD monitor 
#define MA_dcu_mon0__pvdd_ok__a 97
#define MA_dcu_mon0__pvdd_ok__len 1
#define MA_dcu_mon0__pvdd_ok__mask 0x08
#define MA_dcu_mon0__pvdd_ok__shift 0x03
#define MA_dcu_mon0__pvdd_ok__reset 0x00
#define set_obj_MA_dcu_mon0__pvdd_ok(o,y) ({ uint8_t __ret = o.read(97); o.write(97,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_dcu_mon0__pvdd_ok(y) ({ uint8_t __ret = ma_read_byte(97); ma_write_byte(97,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_dcu_mon0__pvdd_ok(o) (o.read(97) & 0x08)>>3 
#define get_MA_dcu_mon0__pvdd_ok() ( ma_read_byte(97) & 0x08)>>3 
//------------------------------------------------------------------------------dcu_mon0.vdd_ok---
// DCU0 VDD monitor 
#define MA_dcu_mon0__vdd_ok__a 97
#define MA_dcu_mon0__vdd_ok__len 1
#define MA_dcu_mon0__vdd_ok__mask 0x10
#define MA_dcu_mon0__vdd_ok__shift 0x04
#define MA_dcu_mon0__vdd_ok__reset 0x00
#define set_obj_MA_dcu_mon0__vdd_ok(o,y) ({ uint8_t __ret = o.read(97); o.write(97,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_dcu_mon0__vdd_ok(y) ({ uint8_t __ret = ma_read_byte(97); ma_write_byte(97,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_dcu_mon0__vdd_ok(o) (o.read(97) & 0x10)>>4 
#define get_MA_dcu_mon0__vdd_ok() ( ma_read_byte(97) & 0x10)>>4 
//------------------------------------------------------------------------------dcu_mon0.mute---
// DCU0 mute monitor 
#define MA_dcu_mon0__mute__a 97
#define MA_dcu_mon0__mute__len 1
#define MA_dcu_mon0__mute__mask 0x20
#define MA_dcu_mon0__mute__shift 0x05
#define MA_dcu_mon0__mute__reset 0x00
#define set_obj_MA_dcu_mon0__mute(o,y) ({ uint8_t __ret = o.read(97); o.write(97,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_dcu_mon0__mute(y) ({ uint8_t __ret = ma_read_byte(97); ma_write_byte(97,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_dcu_mon0__mute(o) (o.read(97) & 0x20)>>5 
#define get_MA_dcu_mon0__mute() ( ma_read_byte(97) & 0x20)>>5 
//------------------------------------------------------------------------------dcu_mon0.M_mon---
// M sense monitor channel 0 
#define MA_dcu_mon0__M_mon__a 98
#define MA_dcu_mon0__M_mon__len 8
#define MA_dcu_mon0__M_mon__mask 0xff
#define MA_dcu_mon0__M_mon__shift 0x00
#define MA_dcu_mon0__M_mon__reset 0x00
#define set_obj_MA_dcu_mon0__M_mon(o,y) o.write(98,y);
#define set_MA_dcu_mon0__M_mon(y) ma_write_byte(98,y);
#define get_obj_MA_dcu_mon0__M_mon(o) (o.read(98) & 0xff)>>0 
#define get_MA_dcu_mon0__M_mon() ( ma_read_byte(98) & 0xff)>>0 
//------------------------------------------------------------------------------dcu_mon1.PM_mon---
// Power mode monitor channel 1 
#define MA_dcu_mon1__PM_mon__a 100
#define MA_dcu_mon1__PM_mon__len 2
#define MA_dcu_mon1__PM_mon__mask 0x03
#define MA_dcu_mon1__PM_mon__shift 0x00
#define MA_dcu_mon1__PM_mon__reset 0x00
#define set_obj_MA_dcu_mon1__PM_mon(o,y) ({ uint8_t __ret = o.read(100); o.write(100,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_dcu_mon1__PM_mon(y) ({ uint8_t __ret = ma_read_byte(100); ma_write_byte(100,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_dcu_mon1__PM_mon(o) (o.read(100) & 0x03)>>0 
#define get_MA_dcu_mon1__PM_mon() ( ma_read_byte(100) & 0x03)>>0 
//------------------------------------------------------------------------------dcu_mon1.freqMode_mon---
// Frequence mode monitor channel 1 
#define MA_dcu_mon1__freqMode_mon__a 100
#define MA_dcu_mon1__freqMode_mon__len 3
#define MA_dcu_mon1__freqMode_mon__mask 0x70
#define MA_dcu_mon1__freqMode_mon__shift 0x04
#define MA_dcu_mon1__freqMode_mon__reset 0x00
#define set_obj_MA_dcu_mon1__freqMode_mon(o,y) ({ uint8_t __ret = o.read(100); o.write(100,(__ret&0x8f)|((y<<4)&0x70)); }) 
#define set_MA_dcu_mon1__freqMode_mon(y) ({ uint8_t __ret = ma_read_byte(100); ma_write_byte(100,(__ret&0x8f)|((y<<4)&0x70)); }) 
#define get_obj_MA_dcu_mon1__freqMode_mon(o) (o.read(100) & 0x70)>>4 
#define get_MA_dcu_mon1__freqMode_mon() ( ma_read_byte(100) & 0x70)>>4 
//------------------------------------------------------------------------------dcu_mon1.pps_passed---
// DCU1 PPS completion indicator 
#define MA_dcu_mon1__pps_passed__a 100
#define MA_dcu_mon1__pps_passed__len 1
#define MA_dcu_mon1__pps_passed__mask 0x80
#define MA_dcu_mon1__pps_passed__shift 0x07
#define MA_dcu_mon1__pps_passed__reset 0x00
#define set_obj_MA_dcu_mon1__pps_passed(o,y) ({ uint8_t __ret = o.read(100); o.write(100,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_dcu_mon1__pps_passed(y) ({ uint8_t __ret = ma_read_byte(100); ma_write_byte(100,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_dcu_mon1__pps_passed(o) (o.read(100) & 0x80)>>7 
#define get_MA_dcu_mon1__pps_passed() ( ma_read_byte(100) & 0x80)>>7 
//------------------------------------------------------------------------------dcu_mon1.OCP_mon---
// OCP Monitor channel 1 
#define MA_dcu_mon1__OCP_mon__a 101
#define MA_dcu_mon1__OCP_mon__len 1
#define MA_dcu_mon1__OCP_mon__mask 0x01
#define MA_dcu_mon1__OCP_mon__shift 0x00
#define MA_dcu_mon1__OCP_mon__reset 0x00
#define set_obj_MA_dcu_mon1__OCP_mon(o,y) ({ uint8_t __ret = o.read(101); o.write(101,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define set_MA_dcu_mon1__OCP_mon(y) ({ uint8_t __ret = ma_read_byte(101); ma_write_byte(101,(__ret&0xfe)|((y<<0)&0x01)); }) 
#define get_obj_MA_dcu_mon1__OCP_mon(o) (o.read(101) & 0x01)>>0 
#define get_MA_dcu_mon1__OCP_mon() ( ma_read_byte(101) & 0x01)>>0 
//------------------------------------------------------------------------------dcu_mon1.Vcfly1_ok---
// Cfly1 protcetion monitor channel 1 
#define MA_dcu_mon1__Vcfly1_ok__a 101
#define MA_dcu_mon1__Vcfly1_ok__len 1
#define MA_dcu_mon1__Vcfly1_ok__mask 0x02
#define MA_dcu_mon1__Vcfly1_ok__shift 0x01
#define MA_dcu_mon1__Vcfly1_ok__reset 0x00
#define set_obj_MA_dcu_mon1__Vcfly1_ok(o,y) ({ uint8_t __ret = o.read(101); o.write(101,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define set_MA_dcu_mon1__Vcfly1_ok(y) ({ uint8_t __ret = ma_read_byte(101); ma_write_byte(101,(__ret&0xfd)|((y<<1)&0x02)); }) 
#define get_obj_MA_dcu_mon1__Vcfly1_ok(o) (o.read(101) & 0x02)>>1 
#define get_MA_dcu_mon1__Vcfly1_ok() ( ma_read_byte(101) & 0x02)>>1 
//------------------------------------------------------------------------------dcu_mon1.Vcfly2_ok---
// Cfly2 protection monitor channel 1 
#define MA_dcu_mon1__Vcfly2_ok__a 101
#define MA_dcu_mon1__Vcfly2_ok__len 1
#define MA_dcu_mon1__Vcfly2_ok__mask 0x04
#define MA_dcu_mon1__Vcfly2_ok__shift 0x02
#define MA_dcu_mon1__Vcfly2_ok__reset 0x00
#define set_obj_MA_dcu_mon1__Vcfly2_ok(o,y) ({ uint8_t __ret = o.read(101); o.write(101,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define set_MA_dcu_mon1__Vcfly2_ok(y) ({ uint8_t __ret = ma_read_byte(101); ma_write_byte(101,(__ret&0xfb)|((y<<2)&0x04)); }) 
#define get_obj_MA_dcu_mon1__Vcfly2_ok(o) (o.read(101) & 0x04)>>2 
#define get_MA_dcu_mon1__Vcfly2_ok() ( ma_read_byte(101) & 0x04)>>2 
//------------------------------------------------------------------------------dcu_mon1.pvdd_ok---
// DCU1 PVDD monitor 
#define MA_dcu_mon1__pvdd_ok__a 101
#define MA_dcu_mon1__pvdd_ok__len 1
#define MA_dcu_mon1__pvdd_ok__mask 0x08
#define MA_dcu_mon1__pvdd_ok__shift 0x03
#define MA_dcu_mon1__pvdd_ok__reset 0x00
#define set_obj_MA_dcu_mon1__pvdd_ok(o,y) ({ uint8_t __ret = o.read(101); o.write(101,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define set_MA_dcu_mon1__pvdd_ok(y) ({ uint8_t __ret = ma_read_byte(101); ma_write_byte(101,(__ret&0xf7)|((y<<3)&0x08)); }) 
#define get_obj_MA_dcu_mon1__pvdd_ok(o) (o.read(101) & 0x08)>>3 
#define get_MA_dcu_mon1__pvdd_ok() ( ma_read_byte(101) & 0x08)>>3 
//------------------------------------------------------------------------------dcu_mon1.vdd_ok---
// DCU1 VDD monitor 
#define MA_dcu_mon1__vdd_ok__a 101
#define MA_dcu_mon1__vdd_ok__len 1
#define MA_dcu_mon1__vdd_ok__mask 0x10
#define MA_dcu_mon1__vdd_ok__shift 0x04
#define MA_dcu_mon1__vdd_ok__reset 0x00
#define set_obj_MA_dcu_mon1__vdd_ok(o,y) ({ uint8_t __ret = o.read(101); o.write(101,(__ret&0xef)|((y<<4)&0x10)); }) 
#define set_MA_dcu_mon1__vdd_ok(y) ({ uint8_t __ret = ma_read_byte(101); ma_write_byte(101,(__ret&0xef)|((y<<4)&0x10)); }) 
#define get_obj_MA_dcu_mon1__vdd_ok(o) (o.read(101) & 0x10)>>4 
#define get_MA_dcu_mon1__vdd_ok() ( ma_read_byte(101) & 0x10)>>4 
//------------------------------------------------------------------------------dcu_mon1.mute---
// DCU1 mute monitor 
#define MA_dcu_mon1__mute__a 101
#define MA_dcu_mon1__mute__len 1
#define MA_dcu_mon1__mute__mask 0x20
#define MA_dcu_mon1__mute__shift 0x05
#define MA_dcu_mon1__mute__reset 0x00
#define set_obj_MA_dcu_mon1__mute(o,y) ({ uint8_t __ret = o.read(101); o.write(101,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_dcu_mon1__mute(y) ({ uint8_t __ret = ma_read_byte(101); ma_write_byte(101,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_dcu_mon1__mute(o) (o.read(101) & 0x20)>>5 
#define get_MA_dcu_mon1__mute() ( ma_read_byte(101) & 0x20)>>5 
//------------------------------------------------------------------------------dcu_mon1.M_mon---
// M sense monitor channel 1 
#define MA_dcu_mon1__M_mon__a 102
#define MA_dcu_mon1__M_mon__len 8
#define MA_dcu_mon1__M_mon__mask 0xff
#define MA_dcu_mon1__M_mon__shift 0x00
#define MA_dcu_mon1__M_mon__reset 0x00
#define set_obj_MA_dcu_mon1__M_mon(o,y) o.write(102,y);
#define set_MA_dcu_mon1__M_mon(y) ma_write_byte(102,y);
#define get_obj_MA_dcu_mon1__M_mon(o) (o.read(102) & 0xff)>>0 
#define get_MA_dcu_mon1__M_mon() ( ma_read_byte(102) & 0xff)>>0 
//------------------------------------------------------------------------------calib_done---
// Calib block  
#define MA_calib_done__a 104
#define MA_calib_done__len 1
#define MA_calib_done__mask 0x20
#define MA_calib_done__shift 0x05
#define MA_calib_done__reset 0x00
#define set_obj_MA_calib_done(o,y) ({ uint8_t __ret = o.read(104); o.write(104,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_calib_done(y) ({ uint8_t __ret = ma_read_byte(104); ma_write_byte(104,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_calib_done(o) (o.read(104) & 0x20)>>5 
#define get_MA_calib_done() ( ma_read_byte(104) & 0x20)>>5 
//------------------------------------------------------------------------------dcu_mon0.sw_enable---
// DCU0 Switch enable monitor 
#define MA_dcu_mon0__sw_enable__a 104
#define MA_dcu_mon0__sw_enable__len 1
#define MA_dcu_mon0__sw_enable__mask 0x40
#define MA_dcu_mon0__sw_enable__shift 0x06
#define MA_dcu_mon0__sw_enable__reset 0x00
#define set_obj_MA_dcu_mon0__sw_enable(o,y) ({ uint8_t __ret = o.read(104); o.write(104,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_dcu_mon0__sw_enable(y) ({ uint8_t __ret = ma_read_byte(104); ma_write_byte(104,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_dcu_mon0__sw_enable(o) (o.read(104) & 0x40)>>6 
#define get_MA_dcu_mon0__sw_enable() ( ma_read_byte(104) & 0x40)>>6 
//------------------------------------------------------------------------------dcu_mon1.sw_enable---
// DCU1 Switch enable monitor 
#define MA_dcu_mon1__sw_enable__a 104
#define MA_dcu_mon1__sw_enable__len 1
#define MA_dcu_mon1__sw_enable__mask 0x80
#define MA_dcu_mon1__sw_enable__shift 0x07
#define MA_dcu_mon1__sw_enable__reset 0x00
#define set_obj_MA_dcu_mon1__sw_enable(o,y) ({ uint8_t __ret = o.read(104); o.write(104,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_dcu_mon1__sw_enable(y) ({ uint8_t __ret = ma_read_byte(104); ma_write_byte(104,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_dcu_mon1__sw_enable(o) (o.read(104) & 0x80)>>7 
#define get_MA_dcu_mon1__sw_enable() ( ma_read_byte(104) & 0x80)>>7 
//------------------------------------------------------------------------------ftrim---
// 100MHz VCO trim vector 
#define MA_ftrim__a 105
#define MA_ftrim__len 5
#define MA_ftrim__mask 0x1f
#define MA_ftrim__shift 0x00
#define MA_ftrim__reset 0x00
#define set_obj_MA_ftrim(o,y) ({ uint8_t __ret = o.read(105); o.write(105,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define set_MA_ftrim(y) ({ uint8_t __ret = ma_read_byte(105); ma_write_byte(105,(__ret&0xe0)|((y<<0)&0x1f)); }) 
#define get_obj_MA_ftrim(o) (o.read(105) & 0x1f)>>0 
#define get_MA_ftrim() ( ma_read_byte(105) & 0x1f)>>0 
//------------------------------------------------------------------------------eh_clear_fb---
// Current value of eh_clear register 
#define MA_eh_clear_fb__a 105
#define MA_eh_clear_fb__len 1
#define MA_eh_clear_fb__mask 0x20
#define MA_eh_clear_fb__shift 0x05
#define MA_eh_clear_fb__reset 0x00
#define set_obj_MA_eh_clear_fb(o,y) ({ uint8_t __ret = o.read(105); o.write(105,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define set_MA_eh_clear_fb(y) ({ uint8_t __ret = ma_read_byte(105); ma_write_byte(105,(__ret&0xdf)|((y<<5)&0x20)); }) 
#define get_obj_MA_eh_clear_fb(o) (o.read(105) & 0x20)>>5 
#define get_MA_eh_clear_fb() ( ma_read_byte(105) & 0x20)>>5 
//------------------------------------------------------------------------------hvboot0_ok_mon---
// HVboot0_ok for test/debug 
#define MA_hvboot0_ok_mon__a 105
#define MA_hvboot0_ok_mon__len 1
#define MA_hvboot0_ok_mon__mask 0x40
#define MA_hvboot0_ok_mon__shift 0x06
#define MA_hvboot0_ok_mon__reset 0x00
#define set_obj_MA_hvboot0_ok_mon(o,y) ({ uint8_t __ret = o.read(105); o.write(105,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define set_MA_hvboot0_ok_mon(y) ({ uint8_t __ret = ma_read_byte(105); ma_write_byte(105,(__ret&0xbf)|((y<<6)&0x40)); }) 
#define get_obj_MA_hvboot0_ok_mon(o) (o.read(105) & 0x40)>>6 
#define get_MA_hvboot0_ok_mon() ( ma_read_byte(105) & 0x40)>>6 
//------------------------------------------------------------------------------hvboot1_ok_mon---
// HVboot1_ok for test/debug 
#define MA_hvboot1_ok_mon__a 105
#define MA_hvboot1_ok_mon__len 1
#define MA_hvboot1_ok_mon__mask 0x80
#define MA_hvboot1_ok_mon__shift 0x07
#define MA_hvboot1_ok_mon__reset 0x00
#define set_obj_MA_hvboot1_ok_mon(o,y) ({ uint8_t __ret = o.read(105); o.write(105,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define set_MA_hvboot1_ok_mon(y) ({ uint8_t __ret = ma_read_byte(105); ma_write_byte(105,(__ret&0x7f)|((y<<7)&0x80)); }) 
#define get_obj_MA_hvboot1_ok_mon(o) (o.read(105) & 0x80)>>7 
#define get_MA_hvboot1_ok_mon() ( ma_read_byte(105) & 0x80)>>7 
//------------------------------------------------------------------------------fb_data_out0---
// Data read from fuse bank 0 
#define MA_fb_data_out0__a 106
#define MA_fb_data_out0__len 8
#define MA_fb_data_out0__mask 0xff
#define MA_fb_data_out0__shift 0x00
#define MA_fb_data_out0__reset 0x00
#define set_obj_MA_fb_data_out0(o,y) o.write(106,y);
#define set_MA_fb_data_out0(y) ma_write_byte(106,y);
#define get_obj_MA_fb_data_out0(o) (o.read(106) & 0xff)>>0 
#define get_MA_fb_data_out0() ( ma_read_byte(106) & 0xff)>>0 
//------------------------------------------------------------------------------fb_data_out1---
// Data read from fuse bank 1 
#define MA_fb_data_out1__a 107
#define MA_fb_data_out1__len 8
#define MA_fb_data_out1__mask 0xff
#define MA_fb_data_out1__shift 0x00
#define MA_fb_data_out1__reset 0x00
#define set_obj_MA_fb_data_out1(o,y) o.write(107,y);
#define set_MA_fb_data_out1(y) ma_write_byte(107,y);
#define get_obj_MA_fb_data_out1(o) (o.read(107) & 0xff)>>0 
#define get_MA_fb_data_out1() ( ma_read_byte(107) & 0xff)>>0 
//------------------------------------------------------------------------------error_trig---
// Captured error flag(s) on trigger 
#define MA_error_trig__a 108
#define MA_error_trig__len 8
#define MA_error_trig__mask 0xff
#define MA_error_trig__shift 0x00
#define MA_error_trig__reset 0x00
#define set_obj_MA_error_trig(o,y) o.write(108,y);
#define set_MA_error_trig(y) ma_write_byte(108,y);
#define get_obj_MA_error_trig(o) (o.read(108) & 0xff)>>0 
#define get_MA_error_trig() ( ma_read_byte(108) & 0xff)>>0 
//------------------------------------------------------------------------------error_acc---
// Accumulated errors, at and after triggering 
#define MA_error_acc__a 109
#define MA_error_acc__len 8
#define MA_error_acc__mask 0xff
#define MA_error_acc__shift 0x00
#define MA_error_acc__reset 0x00
#define set_obj_MA_error_acc(o,y) o.write(109,y);
#define set_MA_error_acc(y) ma_write_byte(109,y);
#define get_obj_MA_error_acc(o) (o.read(109) & 0xff)>>0 
#define get_MA_error_acc() ( ma_read_byte(109) & 0xff)>>0 
//------------------------------------------------------------------------------error_trig_oc---
// oc flags, if causing error triggering 
#define MA_error_trig_oc__a 110
#define MA_error_trig_oc__len 8
#define MA_error_trig_oc__mask 0xff
#define MA_error_trig_oc__shift 0x00
#define MA_error_trig_oc__reset 0x00
#define set_obj_MA_error_trig_oc(o,y) o.write(110,y);
#define set_MA_error_trig_oc(y) ma_write_byte(110,y);
#define get_obj_MA_error_trig_oc(o) (o.read(110) & 0xff)>>0 
#define get_MA_error_trig_oc() ( ma_read_byte(110) & 0xff)>>0 
//------------------------------------------------------------------------------error_trig_vc---
// vcfly flags, if causing error triggering 
#define MA_error_trig_vc__a 111
#define MA_error_trig_vc__len 8
#define MA_error_trig_vc__mask 0xff
#define MA_error_trig_vc__shift 0x00
#define MA_error_trig_vc__reset 0x00
#define set_obj_MA_error_trig_vc(o,y) o.write(111,y);
#define set_MA_error_trig_vc(y) ma_write_byte(111,y);
#define get_obj_MA_error_trig_vc(o) (o.read(111) & 0xff)>>0 
#define get_MA_error_trig_vc() ( ma_read_byte(111) & 0xff)>>0 
//------------------------------------------------------------------------------error_acc_oc---
// Accumulated OC error flags 
#define MA_error_acc_oc__a 112
#define MA_error_acc_oc__len 8
#define MA_error_acc_oc__mask 0xff
#define MA_error_acc_oc__shift 0x00
#define MA_error_acc_oc__reset 0x00
#define set_obj_MA_error_acc_oc(o,y) o.write(112,y);
#define set_MA_error_acc_oc(y) ma_write_byte(112,y);
#define get_obj_MA_error_acc_oc(o) (o.read(112) & 0xff)>>0 
#define get_MA_error_acc_oc() ( ma_read_byte(112) & 0xff)>>0 
//------------------------------------------------------------------------------error_acc_vc---
// Accumulated vcfly flags 
#define MA_error_acc_vc__a 113
#define MA_error_acc_vc__len 8
#define MA_error_acc_vc__mask 0xff
#define MA_error_acc_vc__shift 0x00
#define MA_error_acc_vc__reset 0x00
#define set_obj_MA_error_acc_vc(o,y) o.write(113,y);
#define set_MA_error_acc_vc(y) ma_write_byte(113,y);
#define get_obj_MA_error_acc_vc(o) (o.read(113) & 0xff)>>0 
#define get_MA_error_acc_vc() ( ma_read_byte(113) & 0xff)>>0 
//------------------------------------------------------------------------------ctrim---
// Ctrim vector - Routed to all Ctrim on chip (LF, OSC, VCO)  
#define MA_ctrim__a 114
#define MA_ctrim__len 6
#define MA_ctrim__mask 0x3f
#define MA_ctrim__shift 0x00
#define MA_ctrim__reset 0x00
#define set_obj_MA_ctrim(o,y) ({ uint8_t __ret = o.read(114); o.write(114,(__ret&0xc0)|((y<<0)&0x3f)); }) 
#define set_MA_ctrim(y) ({ uint8_t __ret = ma_read_byte(114); ma_write_byte(114,(__ret&0xc0)|((y<<0)&0x3f)); }) 
#define get_obj_MA_ctrim(o) (o.read(114) & 0x3f)>>0 
#define get_MA_ctrim() ( ma_read_byte(114) & 0x3f)>>0 
//------------------------------------------------------------------------------i2s_data_rate---
// Detected i2s data rate: 00/01/10 = x1/x2/x4 
#define MA_i2s_data_rate__a 116
#define MA_i2s_data_rate__len 2
#define MA_i2s_data_rate__mask 0x03
#define MA_i2s_data_rate__shift 0x00
#define MA_i2s_data_rate__reset 0x00
#define set_obj_MA_i2s_data_rate(o,y) ({ uint8_t __ret = o.read(116); o.write(116,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define set_MA_i2s_data_rate(y) ({ uint8_t __ret = ma_read_byte(116); ma_write_byte(116,(__ret&0xfc)|((y<<0)&0x03)); }) 
#define get_obj_MA_i2s_data_rate(o) (o.read(116) & 0x03)>>0 
#define get_MA_i2s_data_rate() ( ma_read_byte(116) & 0x03)>>0 
//------------------------------------------------------------------------------audio_in_mode_mon---
// Audio input mode monitor 
#define MA_audio_in_mode_mon__a 116
#define MA_audio_in_mode_mon__len 3
#define MA_audio_in_mode_mon__mask 0x1c
#define MA_audio_in_mode_mon__shift 0x02
#define MA_audio_in_mode_mon__reset 0x00
#define set_obj_MA_audio_in_mode_mon(o,y) ({ uint8_t __ret = o.read(116); o.write(116,(__ret&0xe3)|((y<<2)&0x1c)); }) 
#define set_MA_audio_in_mode_mon(y) ({ uint8_t __ret = ma_read_byte(116); ma_write_byte(116,(__ret&0xe3)|((y<<2)&0x1c)); }) 
#define get_obj_MA_audio_in_mode_mon(o) (o.read(116) & 0x1c)>>2 
#define get_MA_audio_in_mode_mon() ( ma_read_byte(116) & 0x1c)>>2 
//------------------------------------------------------------------------------msel_mon---
// MSEL[2:0] monitor register 
#define MA_msel_mon__a 117
#define MA_msel_mon__len 3
#define MA_msel_mon__mask 0x07
#define MA_msel_mon__shift 0x00
#define MA_msel_mon__reset 0x00
#define set_obj_MA_msel_mon(o,y) ({ uint8_t __ret = o.read(117); o.write(117,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define set_MA_msel_mon(y) ({ uint8_t __ret = ma_read_byte(117); ma_write_byte(117,(__ret&0xf8)|((y<<0)&0x07)); }) 
#define get_obj_MA_msel_mon(o) (o.read(117) & 0x07)>>0 
#define get_MA_msel_mon() ( ma_read_byte(117) & 0x07)>>0 
//------------------------------------------------------------------------------ocp_flag_mon---
// All OCP flags 
#define MA_ocp_flag_mon__a 118
#define MA_ocp_flag_mon__len 8
#define MA_ocp_flag_mon__mask 0xff
#define MA_ocp_flag_mon__shift 0x00
#define MA_ocp_flag_mon__reset 0x00
#define set_obj_MA_ocp_flag_mon(o,y) o.write(118,y);
#define set_MA_ocp_flag_mon(y) ma_write_byte(118,y);
#define get_obj_MA_ocp_flag_mon(o) (o.read(118) & 0xff)>>0 
#define get_MA_ocp_flag_mon() ( ma_read_byte(118) & 0xff)>>0 
//------------------------------------------------------------------------------vcfly_flag_mon---
// Vcfly protection flags 
#define MA_vcfly_flag_mon__a 119
#define MA_vcfly_flag_mon__len 8
#define MA_vcfly_flag_mon__mask 0xff
#define MA_vcfly_flag_mon__shift 0x00
#define MA_vcfly_flag_mon__reset 0x00
#define set_obj_MA_vcfly_flag_mon(o,y) o.write(119,y);
#define set_MA_vcfly_flag_mon(y) ma_write_byte(119,y);
#define get_obj_MA_vcfly_flag_mon(o) (o.read(119) & 0xff)>>0 
#define get_MA_vcfly_flag_mon() ( ma_read_byte(119) & 0xff)>>0 
//------------------------------------------------------------------------------dcu_mon0.pps_adc_code_a---
// ADC word for bridge 0a Vcfly 
#define MA_dcu_mon0__pps_adc_code_a__a 120
#define MA_dcu_mon0__pps_adc_code_a__len 4
#define MA_dcu_mon0__pps_adc_code_a__mask 0x0f
#define MA_dcu_mon0__pps_adc_code_a__shift 0x00
#define MA_dcu_mon0__pps_adc_code_a__reset 0x00
#define set_obj_MA_dcu_mon0__pps_adc_code_a(o,y) ({ uint8_t __ret = o.read(120); o.write(120,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_dcu_mon0__pps_adc_code_a(y) ({ uint8_t __ret = ma_read_byte(120); ma_write_byte(120,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_dcu_mon0__pps_adc_code_a(o) (o.read(120) & 0x0f)>>0 
#define get_MA_dcu_mon0__pps_adc_code_a() ( ma_read_byte(120) & 0x0f)>>0 
//------------------------------------------------------------------------------dcu_mon0.pps_adc_code_b---
// ADC word for bridge 0b Vcfly 
#define MA_dcu_mon0__pps_adc_code_b__a 120
#define MA_dcu_mon0__pps_adc_code_b__len 4
#define MA_dcu_mon0__pps_adc_code_b__mask 0xf0
#define MA_dcu_mon0__pps_adc_code_b__shift 0x04
#define MA_dcu_mon0__pps_adc_code_b__reset 0x00
#define set_obj_MA_dcu_mon0__pps_adc_code_b(o,y) ({ uint8_t __ret = o.read(120); o.write(120,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define set_MA_dcu_mon0__pps_adc_code_b(y) ({ uint8_t __ret = ma_read_byte(120); ma_write_byte(120,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define get_obj_MA_dcu_mon0__pps_adc_code_b(o) (o.read(120) & 0xf0)>>4 
#define get_MA_dcu_mon0__pps_adc_code_b() ( ma_read_byte(120) & 0xf0)>>4 
//------------------------------------------------------------------------------dcu_mon1.pps_adc_code_a---
// ADC word for bridge 1a Vcfly 
#define MA_dcu_mon1__pps_adc_code_a__a 121
#define MA_dcu_mon1__pps_adc_code_a__len 4
#define MA_dcu_mon1__pps_adc_code_a__mask 0x0f
#define MA_dcu_mon1__pps_adc_code_a__shift 0x00
#define MA_dcu_mon1__pps_adc_code_a__reset 0x00
#define set_obj_MA_dcu_mon1__pps_adc_code_a(o,y) ({ uint8_t __ret = o.read(121); o.write(121,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_dcu_mon1__pps_adc_code_a(y) ({ uint8_t __ret = ma_read_byte(121); ma_write_byte(121,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_dcu_mon1__pps_adc_code_a(o) (o.read(121) & 0x0f)>>0 
#define get_MA_dcu_mon1__pps_adc_code_a() ( ma_read_byte(121) & 0x0f)>>0 
//------------------------------------------------------------------------------dcu_mon1.pps_adc_code_b---
// ADC word for bridge 1b Vcfly 
#define MA_dcu_mon1__pps_adc_code_b__a 121
#define MA_dcu_mon1__pps_adc_code_b__len 4
#define MA_dcu_mon1__pps_adc_code_b__mask 0xf0
#define MA_dcu_mon1__pps_adc_code_b__shift 0x04
#define MA_dcu_mon1__pps_adc_code_b__reset 0x00
#define set_obj_MA_dcu_mon1__pps_adc_code_b(o,y) ({ uint8_t __ret = o.read(121); o.write(121,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define set_MA_dcu_mon1__pps_adc_code_b(y) ({ uint8_t __ret = ma_read_byte(121); ma_write_byte(121,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define get_obj_MA_dcu_mon1__pps_adc_code_b(o) (o.read(121) & 0xf0)>>4 
#define get_MA_dcu_mon1__pps_adc_code_b() ( ma_read_byte(121) & 0xf0)>>4 
//------------------------------------------------------------------------------dcu_mon0.CMbal_stretch_b---
// CM balancing 0B-side reset stretch 
#define MA_dcu_mon0__CMbal_stretch_b__a 122
#define MA_dcu_mon0__CMbal_stretch_b__len 4
#define MA_dcu_mon0__CMbal_stretch_b__mask 0xf0
#define MA_dcu_mon0__CMbal_stretch_b__shift 0x04
#define MA_dcu_mon0__CMbal_stretch_b__reset 0x00
#define set_obj_MA_dcu_mon0__CMbal_stretch_b(o,y) ({ uint8_t __ret = o.read(122); o.write(122,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define set_MA_dcu_mon0__CMbal_stretch_b(y) ({ uint8_t __ret = ma_read_byte(122); ma_write_byte(122,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define get_obj_MA_dcu_mon0__CMbal_stretch_b(o) (o.read(122) & 0xf0)>>4 
#define get_MA_dcu_mon0__CMbal_stretch_b() ( ma_read_byte(122) & 0xf0)>>4 
//------------------------------------------------------------------------------dcu_mon0.CMbal_stretch_a---
// CM balancing 0A-side reset stretch 
#define MA_dcu_mon0__CMbal_stretch_a__a 122
#define MA_dcu_mon0__CMbal_stretch_a__len 4
#define MA_dcu_mon0__CMbal_stretch_a__mask 0x0f
#define MA_dcu_mon0__CMbal_stretch_a__shift 0x00
#define MA_dcu_mon0__CMbal_stretch_a__reset 0x00
#define set_obj_MA_dcu_mon0__CMbal_stretch_a(o,y) ({ uint8_t __ret = o.read(122); o.write(122,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_dcu_mon0__CMbal_stretch_a(y) ({ uint8_t __ret = ma_read_byte(122); ma_write_byte(122,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_dcu_mon0__CMbal_stretch_a(o) (o.read(122) & 0x0f)>>0 
#define get_MA_dcu_mon0__CMbal_stretch_a() ( ma_read_byte(122) & 0x0f)>>0 
//------------------------------------------------------------------------------dcu_mon1.CMbal_stretch_b---
// CM balancing 1B-side reset stretch 
#define MA_dcu_mon1__CMbal_stretch_b__a 123
#define MA_dcu_mon1__CMbal_stretch_b__len 4
#define MA_dcu_mon1__CMbal_stretch_b__mask 0xf0
#define MA_dcu_mon1__CMbal_stretch_b__shift 0x04
#define MA_dcu_mon1__CMbal_stretch_b__reset 0x00
#define set_obj_MA_dcu_mon1__CMbal_stretch_b(o,y) ({ uint8_t __ret = o.read(123); o.write(123,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define set_MA_dcu_mon1__CMbal_stretch_b(y) ({ uint8_t __ret = ma_read_byte(123); ma_write_byte(123,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define get_obj_MA_dcu_mon1__CMbal_stretch_b(o) (o.read(123) & 0xf0)>>4 
#define get_MA_dcu_mon1__CMbal_stretch_b() ( ma_read_byte(123) & 0xf0)>>4 
//------------------------------------------------------------------------------dcu_mon1.CMbal_stretch_a---
// CM balancing 1A-side reset stretch 
#define MA_dcu_mon1__CMbal_stretch_a__a 123
#define MA_dcu_mon1__CMbal_stretch_a__len 4
#define MA_dcu_mon1__CMbal_stretch_a__mask 0x0f
#define MA_dcu_mon1__CMbal_stretch_a__shift 0x00
#define MA_dcu_mon1__CMbal_stretch_a__reset 0x00
#define set_obj_MA_dcu_mon1__CMbal_stretch_a(o,y) ({ uint8_t __ret = o.read(123); o.write(123,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_dcu_mon1__CMbal_stretch_a(y) ({ uint8_t __ret = ma_read_byte(123); ma_write_byte(123,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_dcu_mon1__CMbal_stretch_a(o) (o.read(123) & 0x0f)>>0 
#define get_MA_dcu_mon1__CMbal_stretch_a() ( ma_read_byte(123) & 0x0f)>>0 
//------------------------------------------------------------------------------error---
// Current error flag monitor reg - for app. ctrl. 
#define MA_error__a 124
#define MA_error__len 8
#define MA_error__mask 0xff
#define MA_error__shift 0x00
#define MA_error__reset 0x00
#define set_obj_MA_error(o,y) o.write(124,y);
#define set_MA_error(y) ma_write_byte(124,y);
#define get_obj_MA_error(o) (o.read(124) & 0xff)>>0 
#define get_MA_error() ( ma_read_byte(124) & 0xff)>>0 
//------------------------------------------------------------------------------audio_proc_limiter_mon---
// b7-b4: Channel 3-0 limiter active  
#define MA_audio_proc_limiter_mon__a 126
#define MA_audio_proc_limiter_mon__len 4
#define MA_audio_proc_limiter_mon__mask 0xf0
#define MA_audio_proc_limiter_mon__shift 0x04
#define MA_audio_proc_limiter_mon__reset 0x00
#define set_obj_MA_audio_proc_limiter_mon(o,y) ({ uint8_t __ret = o.read(126); o.write(126,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define set_MA_audio_proc_limiter_mon(y) ({ uint8_t __ret = ma_read_byte(126); ma_write_byte(126,(__ret&0x0f)|((y<<4)&0xf0)); }) 
#define get_obj_MA_audio_proc_limiter_mon(o) (o.read(126) & 0xf0)>>4 
#define get_MA_audio_proc_limiter_mon() ( ma_read_byte(126) & 0xf0)>>4 
//------------------------------------------------------------------------------audio_proc_clip_mon---
// b3-b0: Channel 3-0 clipping monitor 
#define MA_audio_proc_clip_mon__a 126
#define MA_audio_proc_clip_mon__len 4
#define MA_audio_proc_clip_mon__mask 0x0f
#define MA_audio_proc_clip_mon__shift 0x00
#define MA_audio_proc_clip_mon__reset 0x00
#define set_obj_MA_audio_proc_clip_mon(o,y) ({ uint8_t __ret = o.read(126); o.write(126,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define set_MA_audio_proc_clip_mon(y) ({ uint8_t __ret = ma_read_byte(126); ma_write_byte(126,(__ret&0xf0)|((y<<0)&0x0f)); }) 
#define get_obj_MA_audio_proc_clip_mon(o) (o.read(126) & 0x0f)>>0 
#define get_MA_audio_proc_clip_mon() ( ma_read_byte(126) & 0x0f)>>0 
//------------------------------------------------------------------------------hw_version---
// Hardware version ID number 
#define MA_hw_version__a 127
#define MA_hw_version__len 8
#define MA_hw_version__mask 0xff
#define MA_hw_version__shift 0x00
#define MA_hw_version__reset 0x00
#define set_obj_MA_hw_version(o,y) o.write(127,y);
#define set_MA_hw_version(y) ma_write_byte(127,y);
#define get_obj_MA_hw_version(o) (o.read(127) & 0xff)>>0 
#define get_MA_hw_version() ( ma_read_byte(127) & 0xff)>>0 
#endif   /* _MA120X0_H_ */
