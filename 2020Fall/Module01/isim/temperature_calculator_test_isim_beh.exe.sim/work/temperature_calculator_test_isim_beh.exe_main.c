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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000672861211_3993892700_init();
    work_m_00000000000672861211_2465691887_init();
    work_m_00000000003097014353_3271766324_init();
    work_m_00000000000045740818_3950440041_init();
    work_m_00000000002504059271_4021975052_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002504059271_4021975052");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
