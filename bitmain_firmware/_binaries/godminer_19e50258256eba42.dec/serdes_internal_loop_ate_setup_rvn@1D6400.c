int __fastcall serdes_internal_loop_ate_setup_rvn(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  _BYTE v9[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v10[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v11; // [sp+104Ch] [bp-10h]

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
    "serdes_internal_loop_ate_setup_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_setup_rvn",
    34,
    394,
    60,
    v9);
  serdes_wait_status_rvn(a1, a2, a3, 0x1094u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1094u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1294u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1294u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1494u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1494u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1694u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1694u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x5071u, 17);
  serdes_apb_write_rvn(a1, a2, a3, 0x5071u, 1);
  usleep(0x2710u);
  serdes_wait_status_rvn(a1, a2, a3, 0x1094u, a4);
  serdes_wait_status_rvn(a1, a2, a3, 0x1094u, 1);
  serdes_wait_status_rvn(a1, a2, a3, 0x1294u, a4);
  serdes_wait_status_rvn(a1, a2, a3, 0x1294u, 1);
  serdes_wait_status_rvn(a1, a2, a3, 0x1494u, a4);
  serdes_wait_status_rvn(a1, a2, a3, 0x1494u, 1);
  serdes_wait_status_rvn(a1, a2, a3, 0x1694u, a4);
  serdes_wait_status_rvn(a1, a2, a3, 0x1694u, 1);
  return 0;
}
