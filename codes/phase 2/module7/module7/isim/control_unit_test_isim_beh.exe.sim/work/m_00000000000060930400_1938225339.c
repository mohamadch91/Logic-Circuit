/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "M:/uni/thirdsummestur/az manteghi/final proj/phase 2/module7/module7/ControlUnit.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {4U, 0U};



static void Always_54_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    int t29;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t2) == 0)
        goto LAB9;

LAB11:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB12:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB14;

LAB13:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t12 = (t13 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB19:    t5 = ((char*)((ng1)));
    t29 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t29 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t29 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t29 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t29 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t29 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t29 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t29 == 1)
        goto LAB26;

LAB27:
LAB28:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB14:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB13;

LAB15:    xsi_set_current_line(57, ng0);

LAB18:    xsi_set_current_line(58, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 2728);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB17;

LAB20:    xsi_set_current_line(63, ng0);

LAB29:    xsi_set_current_line(64, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB28;

LAB22:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB28;

LAB24:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB26:    xsi_set_current_line(78, ng0);

LAB41:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 2008U);
    t5 = *((char **)t3);
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 35);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB28;

LAB30:    xsi_set_current_line(67, ng0);

LAB33:    xsi_set_current_line(68, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB36:    goto LAB32;

LAB34:    xsi_set_current_line(70, ng0);
    t5 = ((char*)((ng4)));
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 3);
    goto LAB36;

LAB37:    xsi_set_current_line(74, ng0);

LAB40:    xsi_set_current_line(75, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

}


extern void work_m_00000000000060930400_1938225339_init()
{
	static char *pe[] = {(void *)Always_54_0};
	xsi_register_didat("work_m_00000000000060930400_1938225339", "isim/control_unit_test_isim_beh.exe.sim/work/m_00000000000060930400_1938225339.didat");
	xsi_register_executes(pe);
}
