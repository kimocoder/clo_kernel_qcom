/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2023, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_NIOBE_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_NIOBE_H

#define MASTER_GPU_TCU				0
#define MASTER_SYS_TCU				1
#define MASTER_APPSS_PROC				2
#define MASTER_LLCC				3
#define MASTER_QDSS_BAM				4
#define MASTER_QUP_1				5
#define MASTER_QUP_2				6
#define MASTER_QUP_3				7
#define MASTER_A1NOC_SNOC				8
#define MASTER_A2NOC_SNOC				9
#define MASTER_CAMNOC_HF				10
#define MASTER_CAMNOC_ICP				11
#define MASTER_CAMNOC_SF				12
#define MASTER_GEM_NOC_CNOC				13
#define MASTER_GEM_NOC_PCIE_SNOC				14
#define MASTER_GFX3D				15
#define MASTER_MDP0				16
#define MASTER_MDP1				17
#define MASTER_MNOC_HF_MEM_NOC				18
#define MASTER_MNOC_SF_MEM_NOC				19
#define MASTER_CDSP_PROC				20
#define MASTER_COMPUTE_NOC				21
#define MASTER_ANOC_PCIE_GEM_NOC				22
#define MASTER_SNOC_SF_MEM_NOC				23
#define MASTER_VIDEO				24
#define MASTER_VIDEO_CV_PROC				25
#define MASTER_VIDEO_PROC				26
#define MASTER_VIDEO_V_PROC				27
#define MASTER_CNOC_CFG				28
#define MASTER_CNOC_MNOC_HF_CFG				29
#define MASTER_PCIE_ANOC_CFG				30
#define MASTER_CNOC_MNOC_SF_CFG				31
#define MASTER_QUP_CORE_1				32
#define MASTER_QUP_CORE_2				33
#define MASTER_QUP_CORE_3				34
#define MASTER_CRYPTO				35
#define MASTER_IPA				36
#define MASTER_SOCCP_AGGR_NOC				37
#define MASTER_SP				38
#define MASTER_GIC				39
#define MASTER_PCIE_0				40
#define MASTER_PCIE_2				41
#define MASTER_PCIE_1				42
#define MASTER_QDSS_ETR				43
#define MASTER_QDSS_ETR_1				44
#define MASTER_SDCC_2				45
#define MASTER_UFS_MEM				46
#define MASTER_USB3_0				47
#define MASTER_USB3_1				48
#define SLAVE_EBI1				512
#define SLAVE_AHB2PHY_SOUTH				513
#define SLAVE_AHB2PHY_CENTER				514
#define SLAVE_AHB2PHY_WEST				515
#define SLAVE_AOSS				516
#define SLAVE_APPSS				517
#define SLAVE_CAMERA_CFG				518
#define SLAVE_CLK_CTL				519
#define SLAVE_CRYPTO_0_CFG				520
#define SLAVE_DISPLAY1_CFG				521
#define SLAVE_DISPLAY_CFG				522
#define SLAVE_GFX3D_CFG				523
#define SLAVE_IMEM_CFG				524
#define SLAVE_IPA_CFG				525
#define SLAVE_IPC_ROUTER_CFG				526
#define SLAVE_PCIE_0_CFG				527
#define SLAVE_PCIE_2_CFG				528
#define SLAVE_PCIE_1_CFG				529
#define SLAVE_PRNG				530
#define SLAVE_QDSS_CFG				531
#define SLAVE_QUP_1				532
#define SLAVE_QUP_2				533
#define SLAVE_QUP_3				534
#define SLAVE_SDCC_2				535
#define SLAVE_SOCCP				536
#define SLAVE_SPSS_CFG				537
#define SLAVE_TCSR				538
#define SLAVE_TLMM				539
#define SLAVE_TME_CFG				540
#define SLAVE_UFS_MEM_CFG				541
#define SLAVE_USB3_0				542
#define SLAVE_USB3_1				543
#define SLAVE_VENUS_CFG				544
#define SLAVE_VSENSE_CTRL_CFG				545
#define SLAVE_A1NOC_SNOC				546
#define SLAVE_A2NOC_SNOC				547
#define SLAVE_GEM_NOC_CNOC				548
#define SLAVE_SNOC_GEM_NOC_SF				549
#define SLAVE_LLCC				550
#define SLAVE_MNOC_HF_MEM_NOC				551
#define SLAVE_MNOC_SF_MEM_NOC				552
#define SLAVE_CDSP_MEM_NOC				553
#define SLAVE_MEM_NOC_PCIE_SNOC				554
#define SLAVE_ANOC_PCIE_GEM_NOC				555
#define SLAVE_CNOC_CFG				556
#define SLAVE_DDRSS_CFG				557
#define SLAVE_CNOC_MNOC_HF_CFG				558
#define SLAVE_CNOC_MNOC_SF_CFG				559
#define SLAVE_PCIE_ANOC_CFG				560
#define SLAVE_QUP_CORE_1				561
#define SLAVE_QUP_CORE_2				562
#define SLAVE_QUP_CORE_3				563
#define SLAVE_BOOT_IMEM				564
#define SLAVE_BOOT_IMEM_2				565
#define SLAVE_IMEM				566
#define SLAVE_SERVICE_CNOC				567
#define SLAVE_SERVICE_MNOC_HF				568
#define SLAVE_SERVICE_MNOC_SF				569
#define SLAVE_SERVICE_PCIE_ANOC				570
#define SLAVE_PCIE_0				571
#define SLAVE_PCIE_2				572
#define SLAVE_PCIE_1				573
#define SLAVE_QDSS_STM				574
#define SLAVE_TCU				575
#define MASTER_LLCC_DISP				1000
#define MASTER_MDP0_DISP				1001
#define MASTER_MNOC_HF_MEM_NOC_DISP				1002
#define MASTER_ANOC_PCIE_GEM_NOC_DISP				1003
#define SLAVE_EBI1_DISP				1512
#define SLAVE_LLCC_DISP				1513
#define SLAVE_MNOC_HF_MEM_NOC_DISP				1514
#define MASTER_LLCC_DISP2				2000
#define MASTER_MDP1_DISP2				2001
#define MASTER_MNOC_HF_MEM_NOC_DISP2				2002
#define MASTER_ANOC_PCIE_GEM_NOC_DISP2				2003
#define SLAVE_EBI1_DISP2				2512
#define SLAVE_LLCC_DISP2				2513
#define SLAVE_MNOC_HF_MEM_NOC_DISP2				2514
#define MASTER_LLCC_CAM_IFE_0				3000
#define MASTER_CAMNOC_HF_CAM_IFE_0				3001
#define MASTER_CAMNOC_ICP_CAM_IFE_0				3002
#define MASTER_CAMNOC_SF_CAM_IFE_0				3003
#define MASTER_MNOC_HF_MEM_NOC_CAM_IFE_0				3004
#define MASTER_MNOC_SF_MEM_NOC_CAM_IFE_0				3005
#define MASTER_ANOC_PCIE_GEM_NOC_CAM_IFE_0				3006
#define SLAVE_EBI1_CAM_IFE_0				3512
#define SLAVE_LLCC_CAM_IFE_0				3513
#define SLAVE_MNOC_HF_MEM_NOC_CAM_IFE_0				3514
#define SLAVE_MNOC_SF_MEM_NOC_CAM_IFE_0				3515
#define MASTER_LLCC_CAM_IFE_1				4000
#define MASTER_CAMNOC_HF_CAM_IFE_1				4001
#define MASTER_CAMNOC_ICP_CAM_IFE_1				4002
#define MASTER_CAMNOC_SF_CAM_IFE_1				4003
#define MASTER_MNOC_HF_MEM_NOC_CAM_IFE_1				4004
#define MASTER_MNOC_SF_MEM_NOC_CAM_IFE_1				4005
#define MASTER_ANOC_PCIE_GEM_NOC_CAM_IFE_1				4006
#define SLAVE_EBI1_CAM_IFE_1				4512
#define SLAVE_LLCC_CAM_IFE_1				4513
#define SLAVE_MNOC_HF_MEM_NOC_CAM_IFE_1				4514
#define SLAVE_MNOC_SF_MEM_NOC_CAM_IFE_1				4515
#define MASTER_LLCC_CAM_IFE_2				5000
#define MASTER_CAMNOC_HF_CAM_IFE_2				5001
#define MASTER_CAMNOC_ICP_CAM_IFE_2				5002
#define MASTER_CAMNOC_SF_CAM_IFE_2				5003
#define MASTER_MNOC_HF_MEM_NOC_CAM_IFE_2				5004
#define MASTER_MNOC_SF_MEM_NOC_CAM_IFE_2				5005
#define MASTER_ANOC_PCIE_GEM_NOC_CAM_IFE_2				5006
#define SLAVE_EBI1_CAM_IFE_2				5512
#define SLAVE_LLCC_CAM_IFE_2				5513
#define SLAVE_MNOC_HF_MEM_NOC_CAM_IFE_2				5514
#define SLAVE_MNOC_SF_MEM_NOC_CAM_IFE_2				5515

#endif
