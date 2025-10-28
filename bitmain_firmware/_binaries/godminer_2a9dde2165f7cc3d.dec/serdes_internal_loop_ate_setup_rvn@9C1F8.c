int __fastcall serdes_internal_loop_ate_setup_rvn(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v10; // [sp+28h] [bp+0h] BYREF
  _BYTE v11[4100]; // [sp+48h] [bp+20h] BYREF

  V_LOCK(a1);
  V_INT((int)&v10, "chain");
  v8 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    177,
    "serdes_internal_loop_ate_setup_rvn",
    34,
    394,
    60,
    v11);
  serdes_wait_status_rvn(a1, a2, a3, 4244, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4244, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4756, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4756, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5268, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5268, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5780, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5780, 0);
  sub_99858(a1, a3, 77, (int)&loc_110010 + 1);
  sub_99858(a1, a3, 78, -2144251791);
  sub_99858(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99858(a1, a3, 78, -2144251791);
  usleep(0x2710u);
  serdes_wait_status_rvn(a1, a2, a3, 4244, a4);
  serdes_wait_status_rvn(a1, a2, a3, 4244, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 4756, a4);
  serdes_wait_status_rvn(a1, a2, a3, 4756, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 5268, a4);
  serdes_wait_status_rvn(a1, a2, a3, 5268, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 5780, a4);
  serdes_wait_status_rvn(a1, a2, a3, 5780, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  return 0;
}
