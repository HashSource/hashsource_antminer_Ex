int __fastcall serdes_external_loop_ate_init_rvn(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE v9[44]; // [sp+30h] [bp-17ACh] BYREF
  _DWORD v10[7]; // [sp+1030h] [bp-7ACh] BYREF
  int v11; // [sp+104Ch] [bp-790h]
  _DWORD v12[7]; // [sp+1050h] [bp-78Ch] BYREF
  int v13; // [sp+106Ch] [bp-770h]
  _DWORD v14[7]; // [sp+1070h] [bp-76Ch] BYREF
  int v15; // [sp+108Ch] [bp-750h]
  _DWORD v16[7]; // [sp+1090h] [bp-74Ch] BYREF
  int v17; // [sp+10ACh] [bp-730h]
  _DWORD v18[7]; // [sp+10B0h] [bp-72Ch] BYREF
  int v19; // [sp+10CCh] [bp-710h]
  _DWORD v20[7]; // [sp+10D0h] [bp-70Ch] BYREF
  int v21; // [sp+10ECh] [bp-6F0h]
  _DWORD v22[7]; // [sp+10F0h] [bp-6ECh] BYREF
  int v23; // [sp+110Ch] [bp-6D0h]
  _DWORD v24[7]; // [sp+1110h] [bp-6CCh] BYREF
  int v25; // [sp+112Ch] [bp-6B0h]
  _DWORD v26[7]; // [sp+1130h] [bp-6ACh] BYREF
  int v27; // [sp+114Ch] [bp-690h]
  _DWORD v28[7]; // [sp+1150h] [bp-68Ch] BYREF
  int v29; // [sp+116Ch] [bp-670h]
  _DWORD v30[7]; // [sp+1170h] [bp-66Ch] BYREF
  int v31; // [sp+118Ch] [bp-650h]
  _DWORD v32[7]; // [sp+1190h] [bp-64Ch] BYREF
  int v33; // [sp+11ACh] [bp-630h]
  _DWORD v34[7]; // [sp+11B0h] [bp-62Ch] BYREF
  int v35; // [sp+11CCh] [bp-610h]
  _DWORD v36[7]; // [sp+11D0h] [bp-60Ch] BYREF
  int v37; // [sp+11ECh] [bp-5F0h]
  _DWORD v38[7]; // [sp+11F0h] [bp-5ECh] BYREF
  int v39; // [sp+120Ch] [bp-5D0h]
  _DWORD v40[7]; // [sp+1210h] [bp-5CCh] BYREF
  int v41; // [sp+122Ch] [bp-5B0h]
  _DWORD v42[7]; // [sp+1230h] [bp-5ACh] BYREF
  int v43; // [sp+124Ch] [bp-590h]
  _DWORD v44[7]; // [sp+1250h] [bp-58Ch] BYREF
  int v45; // [sp+126Ch] [bp-570h]
  _DWORD v46[7]; // [sp+1270h] [bp-56Ch] BYREF
  int v47; // [sp+128Ch] [bp-550h]
  _DWORD v48[7]; // [sp+1290h] [bp-54Ch] BYREF
  int v49; // [sp+12ACh] [bp-530h]
  _DWORD v50[7]; // [sp+12B0h] [bp-52Ch] BYREF
  int v51; // [sp+12CCh] [bp-510h]
  _DWORD v52[7]; // [sp+12D0h] [bp-50Ch] BYREF
  int v53; // [sp+12ECh] [bp-4F0h]
  _DWORD v54[7]; // [sp+12F0h] [bp-4ECh] BYREF
  int v55; // [sp+130Ch] [bp-4D0h]
  _DWORD v56[7]; // [sp+1310h] [bp-4CCh] BYREF
  int v57; // [sp+132Ch] [bp-4B0h]
  _DWORD v58[7]; // [sp+1330h] [bp-4ACh] BYREF
  int v59; // [sp+134Ch] [bp-490h]
  _DWORD v60[7]; // [sp+1350h] [bp-48Ch] BYREF
  int v61; // [sp+136Ch] [bp-470h]
  _DWORD v62[7]; // [sp+1370h] [bp-46Ch] BYREF
  int v63; // [sp+138Ch] [bp-450h]
  _DWORD v64[7]; // [sp+1390h] [bp-44Ch] BYREF
  int v65; // [sp+13ACh] [bp-430h]
  _DWORD v66[7]; // [sp+13B0h] [bp-42Ch] BYREF
  int v67; // [sp+13CCh] [bp-410h]
  _DWORD v68[7]; // [sp+13D0h] [bp-40Ch] BYREF
  int v69; // [sp+13ECh] [bp-3F0h]
  _DWORD v70[7]; // [sp+13F0h] [bp-3ECh] BYREF
  int v71; // [sp+140Ch] [bp-3D0h]
  _DWORD v72[7]; // [sp+1410h] [bp-3CCh] BYREF
  int v73; // [sp+142Ch] [bp-3B0h]
  _DWORD v74[7]; // [sp+1430h] [bp-3ACh] BYREF
  int v75; // [sp+144Ch] [bp-390h]
  _DWORD v76[7]; // [sp+1450h] [bp-38Ch] BYREF
  int v77; // [sp+146Ch] [bp-370h]
  _DWORD v78[7]; // [sp+1470h] [bp-36Ch] BYREF
  int v79; // [sp+148Ch] [bp-350h]
  _DWORD v80[7]; // [sp+1490h] [bp-34Ch] BYREF
  int v81; // [sp+14ACh] [bp-330h]
  _DWORD v82[7]; // [sp+14B0h] [bp-32Ch] BYREF
  int v83; // [sp+14CCh] [bp-310h]
  _DWORD v84[7]; // [sp+14D0h] [bp-30Ch] BYREF
  int v85; // [sp+14ECh] [bp-2F0h]
  _DWORD v86[7]; // [sp+14F0h] [bp-2ECh] BYREF
  int v87; // [sp+150Ch] [bp-2D0h]
  _DWORD v88[7]; // [sp+1510h] [bp-2CCh] BYREF
  int v89; // [sp+152Ch] [bp-2B0h]
  _DWORD v90[7]; // [sp+1530h] [bp-2ACh] BYREF
  int v91; // [sp+154Ch] [bp-290h]
  _DWORD v92[7]; // [sp+1550h] [bp-28Ch] BYREF
  int v93; // [sp+156Ch] [bp-270h]
  _DWORD v94[7]; // [sp+1570h] [bp-26Ch] BYREF
  int v95; // [sp+158Ch] [bp-250h]
  _DWORD v96[7]; // [sp+1590h] [bp-24Ch] BYREF
  int v97; // [sp+15ACh] [bp-230h]
  _DWORD v98[7]; // [sp+15B0h] [bp-22Ch] BYREF
  int v99; // [sp+15CCh] [bp-210h]
  _DWORD v100[7]; // [sp+15D0h] [bp-20Ch] BYREF
  int v101; // [sp+15ECh] [bp-1F0h]
  _DWORD v102[7]; // [sp+15F0h] [bp-1ECh] BYREF
  int v103; // [sp+160Ch] [bp-1D0h]
  _DWORD v104[7]; // [sp+1610h] [bp-1CCh] BYREF
  int v105; // [sp+162Ch] [bp-1B0h]
  _DWORD v106[7]; // [sp+1630h] [bp-1ACh] BYREF
  int v107; // [sp+164Ch] [bp-190h]
  _DWORD v108[7]; // [sp+1650h] [bp-18Ch] BYREF
  int v109; // [sp+166Ch] [bp-170h]
  _DWORD v110[7]; // [sp+1670h] [bp-16Ch] BYREF
  int v111; // [sp+168Ch] [bp-150h]
  _DWORD v112[7]; // [sp+1690h] [bp-14Ch] BYREF
  int v113; // [sp+16ACh] [bp-130h]
  _DWORD v114[7]; // [sp+16B0h] [bp-12Ch] BYREF
  int v115; // [sp+16CCh] [bp-110h]
  _DWORD v116[7]; // [sp+16D0h] [bp-10Ch] BYREF
  int v117; // [sp+16ECh] [bp-F0h]
  _DWORD v118[7]; // [sp+16F0h] [bp-ECh] BYREF
  int v119; // [sp+170Ch] [bp-D0h]
  _DWORD v120[7]; // [sp+1710h] [bp-CCh] BYREF
  int v121; // [sp+172Ch] [bp-B0h]
  _DWORD v122[7]; // [sp+1730h] [bp-ACh] BYREF
  int v123; // [sp+174Ch] [bp-90h]
  _DWORD v124[7]; // [sp+1750h] [bp-8Ch] BYREF
  int v125; // [sp+176Ch] [bp-70h]
  _DWORD v126[7]; // [sp+1770h] [bp-6Ch] BYREF
  int v127; // [sp+178Ch] [bp-50h]
  _DWORD v128[7]; // [sp+1790h] [bp-4Ch] BYREF
  int v129; // [sp+17ACh] [bp-30h]
  _DWORD v130[7]; // [sp+17B0h] [bp-2Ch] BYREF
  int v131; // [sp+17CCh] [bp-10h]

  V_LOCK();
  sub_1C61DC((int)v10, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "%s ...",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    422,
    60,
    v9);
  sub_1D0F04(a1, a3, 240, 0x80000000);
  sub_1D0F04(a1, a3, 86, 67634184);
  sub_1D0F04(a1, a3, 64, 256);
  sub_1D0F04(a1, a3, 80, 33423870);
  sub_1D0F04(a1, a3, 81, 832516511);
  sub_1D0F04(a1, a3, 88, -1);
  sub_1D0F04(a1, a3, 86, 201853960);
  V_LOCK();
  sub_1C61DC((int)v12, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s Sram_ext_ld done",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    437,
    60,
    v9);
  V_LOCK();
  sub_1C61DC((int)v14, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    "%s Override pcs_pwr_stable, pma_pwr_stable",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    438,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x152u, 3);
  serdes_apb_write_rvn(a1, a2, a3, 0x6042u, 512);
  serdes_apb_write_rvn(a1, a2, a3, 0x6042u, 1536);
  serdes_apb_write_rvn(a1, a2, a3, 0x17Du, 1);
  V_LOCK();
  sub_1C61DC((int)v16, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "%s Override tx_cnxt_sel rx_cnxt_sel tx_cmn_cntx_sel",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    445,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6042u, a4 | 0x600);
  serdes_apb_write_rvn(a1, a2, a3, 0x6043u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x6044u, a4 << 7);
  serdes_apb_write_rvn(a1, a2, a3, 0x6042u, a4 | 0x700);
  serdes_apb_write_rvn(a1, a2, a3, 0x6043u, 256);
  serdes_apb_write_rvn(a1, a2, a3, 0x6044u, a4 << 7);
  V_LOCK();
  sub_1C61DC((int)v18, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    "%s Overriding sup_cntx_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    460,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x500Cu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x500Cu, 4096);
  serdes_apb_write_rvn(a1, a2, a3, 0x12Au, 511);
  serdes_apb_write_rvn(a1, a2, a3, 0x12Bu, 4095);
  V_LOCK();
  sub_1C61DC((int)v20, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v21,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v21,
    "%s Overriding lane_cntx_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    466,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6044u, (a4 << 7) | 0x8020);
  serdes_apb_write_rvn(a1, a2, a3, 0x6044u, (a4 << 7) | 0x8060);
  serdes_apb_write_rvn(a1, a2, a3, 0x6059u, 0xFFFF);
  serdes_apb_write_rvn(a1, a2, a3, 0x605Au, 65407);
  V_LOCK();
  sub_1C61DC((int)v22, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v23,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v23,
    "%s Override tx_req, rx_req, and De-assert rx_data_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    472,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32928);
  V_LOCK();
  sub_1C61DC((int)v24, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v25,
    v24[0],
    v24[1],
    v24[2],
    v24[3],
    v24[4],
    v24[5],
    v24[6],
    v25,
    "%s Override rx_width",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    476,
    60,
    v9);
  if ( a4 == 2 )
    serdes_apb_write_rvn(a1, a2, a3, 0x6056u, 4160);
  else
    serdes_apb_write_rvn(a1, a2, a3, 0x6056u, 4144);
  serdes_apb_write_rvn(a1, a2, a3, 0x605Au, 0xFFFF);
  V_LOCK();
  sub_1C61DC((int)v26, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v27,
    v26[0],
    v26[1],
    v26[2],
    v26[3],
    v26[4],
    v26[5],
    v26[6],
    v27,
    "%s Override rx_lpd, rx_pstate",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    483,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6025u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x6025u, 20);
  V_LOCK();
  sub_1C61DC((int)v28, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v29,
    v28[0],
    v28[1],
    v28[2],
    v28[3],
    v28[4],
    v28[5],
    v28[6],
    v29,
    "%s Override rx_recal_skip_en, rx_recal_force_en, rx_recal_bank_sel, rx_coarse_adpt_force_en, rx_coarse_adpt_skip_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    487,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6030u, 512);
  serdes_apb_write_rvn(a1, a2, a3, 0x6030u, 1876);
  V_LOCK();
  sub_1C61DC((int)v30, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v31,
    v30[0],
    v30[1],
    v30[2],
    v30[3],
    v30[4],
    v30[5],
    v30[6],
    v31,
    "%s  Override tx_lpd, tx_pstate, tx_pll_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    491,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6026u, 0x4000);
  serdes_apb_write_rvn(a1, a2, a3, 0x6026u, 49172);
  V_LOCK();
  sub_1C61DC((int)v32, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v33,
    v32[0],
    v32[1],
    v32[2],
    v32[3],
    v32[4],
    v32[5],
    v32[6],
    v33,
    "%s Override tx_width_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    494,
    60,
    v9);
  if ( a4 == 2 )
    serdes_apb_write_rvn(a1, a2, a3, 0x6045u, 4);
  else
    serdes_apb_write_rvn(a1, a2, a3, 0x6045u, 3);
  serdes_apb_write_rvn(a1, a2, a3, 0x604Cu, 0xFFFF);
  V_LOCK();
  sub_1C61DC((int)v34, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v35,
    v34[0],
    v34[1],
    v34[2],
    v34[3],
    v34[4],
    v34[5],
    v34[6],
    v35,
    "%s Override tx_master_pll_state_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    501,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6027u, 4096);
  serdes_apb_write_rvn(a1, a2, a3, 0x6027u, 12288);
  V_LOCK();
  sub_1C61DC((int)v36, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v37,
    v36[0],
    v36[1],
    v36[2],
    v36[3],
    v36[4],
    v36[5],
    v36[6],
    v37,
    "%s Override tx_recal_bank_sel_r, tx_recal_force_en_r, tx_recal_skip_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    505,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6039u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x6039u, 84);
  V_LOCK();
  sub_1C61DC((int)v38, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v39,
    v38[0],
    v38[1],
    v38[2],
    v38[3],
    v38[4],
    v38[5],
    v38[6],
    v39,
    "%s Overriding tx_invert_r, tx_clk_rdy_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    508,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x5001u, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x5001u, 35);
  V_LOCK();
  sub_1C61DC((int)v40, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v41,
    v40[0],
    v40[1],
    v40[2],
    v40[3],
    v40[4],
    v40[5],
    v40[6],
    v41,
    "%s Overriding rx_invert",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    511,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x5020u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x5020u, 8);
  V_LOCK();
  sub_1C61DC((int)v42, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v43,
    v42[0],
    v42[1],
    v42[2],
    v42[3],
    v42[4],
    v42[5],
    v42[6],
    v43,
    "%s Overriding sup_misc",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    514,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x111u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x128u, 0x3FFF);
  V_LOCK();
  sub_1C61DC((int)v44, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v45,
    v44[0],
    v44[1],
    v44[2],
    v44[3],
    v44[4],
    v44[5],
    v44[6],
    v45,
    "%s Perform refa_clk_div2_en override",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    517,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 2u, 3584);
  serdes_apb_write_rvn(a1, a2, a3, 2u, 3592);
  V_LOCK();
  sub_1C61DC((int)v46, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v47,
    v46[0],
    v46[1],
    v46[2],
    v46[3],
    v46[4],
    v46[5],
    v46[6],
    v47,
    "%s  Perform refb_clk_div2_en override",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    520,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 3u, 3584);
  serdes_apb_write_rvn(a1, a2, a3, 3u, 3592);
  V_LOCK();
  sub_1C61DC((int)v48, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v49,
    v48[0],
    v48[1],
    v48[2],
    v48[3],
    v48[4],
    v48[5],
    v48[6],
    v49,
    "%s Get access to external resistor",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    523,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x1Fu, 24);
  V_LOCK();
  sub_1C61DC((int)v50, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v51,
    v50[0],
    v50[1],
    v50[2],
    v50[3],
    v50[4],
    v50[5],
    v50[6],
    v51,
    "%s Overriding refa_clk_en, refb_clk_en, mplla_force_en, mpllb_force_en, ref_repeat_clk_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    526,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x154u, 341);
  serdes_apb_write_rvn(a1, a2, a3, 0x154u, 1023);
  V_LOCK();
  sub_1C61DC((int)v52, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v53,
    v52[0],
    v52[1],
    v52[2],
    v52[3],
    v52[4],
    v52[5],
    v52[6],
    v53,
    "%s Overriding bg_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    529,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 4u, 935);
  serdes_apb_write_rvn(a1, a2, a3, 4u, 999);
  V_LOCK();
  sub_1C61DC((int)v54, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v55,
    v54[0],
    v54[1],
    v54[2],
    v54[3],
    v54[4],
    v54[5],
    v54[6],
    v55,
    "%s Overriding refa_clkdet_en_r, refb_clkdet_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    532,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 2u, 3592);
  serdes_apb_write_rvn(a1, a2, a3, 2u, 3848);
  serdes_apb_write_rvn(a1, a2, a3, 3u, 3592);
  serdes_apb_write_rvn(a1, a2, a3, 3u, 3848);
  V_LOCK();
  sub_1C61DC((int)v56, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v57,
    v56[0],
    v56[1],
    v56[2],
    v56[3],
    v56[4],
    v56[5],
    v56[6],
    v57,
    "%s Asserting mplla_word_clk_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    537,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 5u, 4);
  serdes_apb_write_rvn(a1, a2, a3, 5u, 12);
  V_LOCK();
  sub_1C61DC((int)v58, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v59,
    v58[0],
    v58[1],
    v58[2],
    v58[3],
    v58[4],
    v58[5],
    v58[6],
    v59,
    "%s Asserting mpllb_word_clk_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    540,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 6u, 4);
  serdes_apb_write_rvn(a1, a2, a3, 6u, 12);
  V_LOCK();
  sub_1C61DC((int)v60, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v61,
    v60[0],
    v60[1],
    v60[2],
    v60[3],
    v60[4],
    v60[5],
    v60[6],
    v61,
    "%s  Overriding mplla_ssc_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    543,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0xCu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0xCu, 16);
  V_LOCK();
  sub_1C61DC((int)v62, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v63,
    v62[0],
    v62[1],
    v62[2],
    v62[3],
    v62[4],
    v62[5],
    v62[6],
    v63,
    "%s Overriding mpllb_ssc_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    546,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x18u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x18u, 16);
  V_LOCK();
  sub_1C61DC((int)v64, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v65,
    v64[0],
    v64[1],
    v64[2],
    v64[3],
    v64[4],
    v64[5],
    v64[6],
    v65,
    "%s Overriding mplla/b_recal_skip_en, mplla/b_recal_force_en, mplla/b_cal_bank_sel",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    550,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x10Eu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x10Eu, 10836);
  V_LOCK();
  sub_1C61DC((int)v66, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v67,
    v66[0],
    v66[1],
    v66[2],
    v66[3],
    v66[4],
    v66[5],
    v66[6],
    v67,
    "%s Overriding mplla_init_cal_disable, mpllb_init_cal_disable, rtune_req",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    553,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x104u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x104u, 2);
  V_LOCK();
  sub_1C61DC((int)v68, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v69,
    v68[0],
    v68[1],
    v68[2],
    v68[3],
    v68[4],
    v68[5],
    v68[6],
    v69,
    "%s Hooking up tx0_clk to appropriate ROPLL word/dword/qword, mplla/b word/dword/qword clock",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    557,
    60,
    v9);
  V_LOCK();
  sub_1C61DC((int)v70, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v71,
    v70[0],
    v70[1],
    v70[2],
    v70[3],
    v70[4],
    v70[5],
    v70[6],
    v71,
    "%s  Overriding tx_clk_sel",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    558,
    60,
    v9);
  if ( a4 == 2 )
    serdes_apb_write_rvn(a1, a2, a3, 0x60F9u, 498);
  else
    serdes_apb_write_rvn(a1, a2, a3, 0x60F9u, 501);
  V_LOCK();
  sub_1C61DC((int)v72, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v73,
    v72[0],
    v72[1],
    v72[2],
    v72[3],
    v72[4],
    v72[5],
    v72[6],
    v73,
    "%s Overriding tx_eq_main_r, tx_beacon_en_r, tx_disable_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    563,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x5003u, 320);
  serdes_apb_write_rvn(a1, a2, a3, 0x5003u, 1352);
  V_LOCK();
  sub_1C61DC((int)v74, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v75,
    v74[0],
    v74[1],
    v74[2],
    v74[3],
    v74[4],
    v74[5],
    v74[6],
    v75,
    "%s Overriding tx_eq_pre and tx_eq_post",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    567,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x5004u, 16);
  serdes_apb_write_rvn(a1, a2, a3, 0x5004u, 8272);
  V_LOCK();
  sub_1C61DC((int)v76, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v77,
    v76[0],
    v76[1],
    v76[2],
    v76[3],
    v76[4],
    v76[5],
    v76[6],
    v77,
    "%s Overriding tx_detrx_req",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    570,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x602Fu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x602Fu, 2);
  V_LOCK();
  sub_1C61DC((int)v78, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v79,
    v78[0],
    v78[1],
    v78[2],
    v78[3],
    v78[4],
    v78[5],
    v78[6],
    v79,
    "%s Overriding the RX_MARGIN_IN_PROG_OVRD and RX_MARGIN_ERROR_CLEAR_OVRD to 0",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    574,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x603Au, 8194);
  V_LOCK();
  sub_1C61DC((int)v80, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v81,
    v80[0],
    v80[1],
    v80[2],
    v80[3],
    v80[4],
    v80[5],
    v80[6],
    v81,
    "%s Overriding lane_ref_sel_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    576,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6027u, 13312);
  serdes_apb_write_rvn(a1, a2, a3, 0x6027u, 15360);
  V_LOCK();
  sub_1C61DC((int)v82, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v83,
    v82[0],
    v82[1],
    v82[2],
    v82[3],
    v82[4],
    v82[5],
    v82[6],
    v83,
    "%s  Overriding tx_ropll_word_clk_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    579,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x603Fu, 8);
  serdes_apb_write_rvn(a1, a2, a3, 0x603Fu, 24);
  V_LOCK();
  sub_1C61DC((int)v84, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v85,
    v84[0],
    v84[1],
    v84[2],
    v84[3],
    v84[4],
    v84[5],
    v84[6],
    v85,
    "%s Overriding rx_offcan_cont_r, rx_adapt_cont_r, rx_adapt_req_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    582,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 2);
  V_LOCK();
  sub_1C61DC((int)v86, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v87,
    v86[0],
    v86[1],
    v86[2],
    v86[3],
    v86[4],
    v86[5],
    v86[6],
    v87,
    "%s Clear the rx_adapt_dis IRQ to prevent rx_ack assertion after initial powerup sequence completed",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    585,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x60CCu, 1);
  V_LOCK();
  sub_1C61DC((int)v88, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v89,
    v88[0],
    v88[1],
    v88[2],
    v88[3],
    v88[4],
    v88[5],
    v88[6],
    v89,
    "%s Overriding rx_margin_iq and rx_delta_iq",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    587,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x600Cu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x600Cu, 4096);
  V_LOCK();
  sub_1C61DC((int)v90, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v91,
    v90[0],
    v90[1],
    v90[2],
    v90[3],
    v90[4],
    v90[5],
    v90[6],
    v91,
    "%s Overriding rx_term_en_r, rx_disable_r, rx_cdr_ssc_en_r, rx_cdr_track_en_r",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    591,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x702Eu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x702Eu, 2);
  serdes_apb_write_rvn(a1, a2, a3, 0x5023u, 65);
  serdes_apb_write_rvn(a1, a2, a3, 0x5023u, 203);
  V_LOCK();
  sub_1C61DC((int)v92, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v93,
    v92[0],
    v92[1],
    v92[2],
    v92[3],
    v92[4],
    v92[5],
    v92[6],
    v93,
    "%s Disable RX CDR PPM detector",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    596,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x7067u, 4);
  V_LOCK();
  sub_1C61DC((int)v94, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v95,
    v94[0],
    v94[1],
    v94[2],
    v94[3],
    v94[4],
    v94[5],
    v94[6],
    v95,
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en to 0",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    598,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6028u, 10);
  V_LOCK();
  sub_1C61DC((int)v96, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v97,
    v96[0],
    v96[1],
    v96[2],
    v96[3],
    v96[4],
    v96[5],
    v96[6],
    v97,
    "%s Overriding TOKEN_DLY",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    600,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x132u, 7);
  V_LOCK();
  sub_1C61DC((int)v98, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v99,
    v98[0],
    v98[1],
    v98[2],
    v98[3],
    v98[4],
    v98[5],
    v98[6],
    v99,
    "%s De-assrting per lane resets to 0",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    602,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32928);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32938);
  V_LOCK();
  sub_1C61DC((int)v100, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v101,
    v100[0],
    v100[1],
    v100[2],
    v100[3],
    v100[4],
    v100[5],
    v100[6],
    v101,
    "%s Waiting for PHY power up...",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    605,
    60,
    v9);
  serdes_wait_status_rvn(a1, a2, a3, 0x3014u, 1);
  serdes_wait_status_rvn(a1, a2, a3, 0x3214u, 1);
  serdes_wait_status_rvn(a1, a2, a3, 0x3414u, 1);
  serdes_wait_status_rvn(a1, a2, a3, 0x3614u, 1);
  V_LOCK();
  sub_1C61DC((int)v102, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v103,
    v102[0],
    v102[1],
    v102[2],
    v102[3],
    v102[4],
    v102[5],
    v102[6],
    v103,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    611,
    60,
    v9);
  serdes_wait_status_rvn(a1, a2, a3, 0x103Cu, 80);
  serdes_wait_status_rvn(a1, a2, a3, 0x123Cu, 80);
  serdes_wait_status_rvn(a1, a2, a3, 0x143Cu, 80);
  serdes_wait_status_rvn(a1, a2, a3, 0x163Cu, 80);
  V_LOCK();
  sub_1C61DC((int)v104, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v105,
    v104[0],
    v104[1],
    v104[2],
    v104[3],
    v104[4],
    v104[5],
    v104[6],
    v105,
    "%s Reading RX ACK at PHY level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    616,
    60,
    v9);
  serdes_wait_status_rvn(a1, a2, a3, 0x2019u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2219u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2419u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2619u, 0);
  V_LOCK();
  sub_1C61DC((int)v106, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v107,
    v106[0],
    v106[1],
    v106[2],
    v106[3],
    v106[4],
    v106[5],
    v106[6],
    v107,
    "%s Reading TX ACK at PMA level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    621,
    60,
    v9);
  serdes_wait_status_rvn(a1, a2, a3, 0x1012u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1212u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1412u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1612u, 0);
  V_LOCK();
  sub_1C61DC((int)v108, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v109,
    v108[0],
    v108[1],
    v108[2],
    v108[3],
    v108[4],
    v108[5],
    v108[6],
    v109,
    "%s Reading TX ACK at PHY level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    626,
    60,
    v9);
  serdes_wait_status_rvn(a1, a2, a3, 0x2004u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2204u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2404u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2604u, 0);
  V_LOCK();
  sub_1C61DC((int)v110, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v111,
    v110[0],
    v110[1],
    v110[2],
    v110[3],
    v110[4],
    v110[5],
    v110[6],
    v111,
    "%s Enabling TX LBERT in LFSR31",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    631,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x5071u, 1);
  V_LOCK();
  sub_1C61DC((int)v112, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v113,
    v112[0],
    v112[1],
    v112[2],
    v112[3],
    v112[4],
    v112[5],
    v112[6],
    v113,
    "%s Overriding lane_rx2tx_par_lb_en and lane_tx2rx_ser_lb_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    633,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6028u, 10);
  serdes_apb_write_rvn(a1, a2, a3, 0x6028u, 10);
  V_LOCK();
  sub_1C61DC((int)v114, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v115,
    v114[0],
    v114[1],
    v114[2],
    v114[3],
    v114[4],
    v114[5],
    v114[6],
    v115,
    "%s Overriding the RX_COARSE_ADAPT_SKIP_B0/B1/B2 to 1 to skip the RX coarse adaptation",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    637,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x714Fu, 3);
  serdes_apb_write_rvn(a1, a2, a3, 0x714Fu, 3);
  serdes_apb_write_rvn(a1, a2, a3, 0x714Fu, 7);
  V_LOCK();
  sub_1C61DC((int)v116, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v117,
    v116[0],
    v116[1],
    v116[2],
    v116[3],
    v116[4],
    v116[5],
    v116[6],
    v117,
    "%s Toggle rx resets",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    641,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32939);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32939);
  usleep(0xAu);
  serdes_wait_status_rvn(a1, a2, a3, 0x103Cu, 81);
  serdes_wait_status_rvn(a1, a2, a3, 0x123Cu, 81);
  serdes_wait_status_rvn(a1, a2, a3, 0x143Cu, 81);
  serdes_wait_status_rvn(a1, a2, a3, 0x163Cu, 81);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32938);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32938);
  usleep(0x64u);
  serdes_wait_status_rvn(a1, a2, a3, 0x103Cu, 84);
  serdes_wait_status_rvn(a1, a2, a3, 0x123Cu, 80);
  serdes_wait_status_rvn(a1, a2, a3, 0x143Cu, 80);
  serdes_wait_status_rvn(a1, a2, a3, 0x163Cu, 84);
  usleep(0x3Cu);
  V_LOCK();
  sub_1C61DC((int)v118, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v119,
    v118[0],
    v118[1],
    v118[2],
    v118[3],
    v118[4],
    v118[5],
    v118[6],
    v119,
    "%s Enable rxX_data_en",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    657,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 49322);
  usleep(0x32u);
  V_LOCK();
  sub_1C61DC((int)v120, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v121,
    v120[0],
    v120[1],
    v120[2],
    v120[3],
    v120[4],
    v120[5],
    v120[6],
    v121,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    660,
    60,
    v9);
  serdes_wait_status_rvn(a1, a2, a3, 0x103Cu, 86);
  serdes_wait_status_rvn(a1, a2, a3, 0x123Cu, 86);
  serdes_wait_status_rvn(a1, a2, a3, 0x143Cu, 86);
  serdes_wait_status_rvn(a1, a2, a3, 0x163Cu, 86);
  V_LOCK();
  sub_1C61DC((int)v122, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v123,
    v122[0],
    v122[1],
    v122[2],
    v122[3],
    v122[4],
    v122[5],
    v122[6],
    v123,
    "%s Overriding rx_adapt_req",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    666,
    60,
    v9);
  if ( a4 == 2 )
  {
    serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 3);
    serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 3);
    usleep(1u);
    serdes_wait_status_rvn(a1, a2, a3, 0x201Au, 1);
    serdes_wait_status_rvn(a1, a2, a3, 0x221Au, 1);
    serdes_wait_status_rvn(a1, a2, a3, 0x241Au, 1);
    serdes_wait_status_rvn(a1, a2, a3, 0x261Au, 1);
    serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 2);
    serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 2);
    usleep(0x64u);
    serdes_wait_status_rvn(a1, a2, a3, 0x201Au, 0);
    serdes_wait_status_rvn(a1, a2, a3, 0x221Au, 0);
    serdes_wait_status_rvn(a1, a2, a3, 0x241Au, 0);
    serdes_wait_status_rvn(a1, a2, a3, 0x261Au, 0);
  }
  V_LOCK();
  sub_1C61DC((int)v124, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v125,
    v124[0],
    v124[1],
    v124[2],
    v124[3],
    v124[4],
    v124[5],
    v124[6],
    v125,
    "%s Disable rxX_data_en after adaptation done",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    685,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32938);
  V_LOCK();
  sub_1C61DC((int)v126, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v127,
    v126[0],
    v126[1],
    v126[2],
    v126[3],
    v126[4],
    v126[5],
    v126[6],
    v127,
    "%s Re-enable rxX_data_en to track receive data",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    687,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 49322);
  usleep(0x32u);
  V_LOCK();
  sub_1C61DC((int)v128, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v129,
    v128[0],
    v128[1],
    v128[2],
    v128[3],
    v128[4],
    v128[5],
    v128[6],
    v129,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    691,
    60,
    v9);
  serdes_wait_status_rvn(a1, a2, a3, 0x103Cu, 82);
  serdes_wait_status_rvn(a1, a2, a3, 0x123Cu, 86);
  serdes_wait_status_rvn(a1, a2, a3, 0x143Cu, 82);
  serdes_wait_status_rvn(a1, a2, a3, 0x163Cu, 86);
  V_LOCK();
  sub_1C61DC((int)v130, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v131,
    v130[0],
    v130[1],
    v130[2],
    v130[3],
    v130[4],
    v130[5],
    v130[6],
    v131,
    "%s Enabling RX LBERT in LFSR31 and setting RX LBERT SYNC to 1",
    "serdes_external_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_external_loop_ate_init_rvn",
    33,
    697,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 17);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 17);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 1);
  usleep(0xAu);
  return 0;
}
