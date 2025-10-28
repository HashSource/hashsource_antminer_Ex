int __fastcall stop_mining_rvn(int a1)
{
  __int64 v1; // r0
  int (**v2)(); // r0
  int v5; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v5, 0x1000u, 0, "%s ...", "stop_mining_rvn");
  V_UNLOCK();
  v1 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
         "gin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
         171,
         "stop_mining_rvn",
         15,
         2140,
         60,
         &v5);
  (*(void (__fastcall **)(int, _DWORD))(a1 + 60))(a1, HIDWORD(v1));
  v2 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v2[14])(*(_DWORD *)(a1 + 264));
  *(_BYTE *)(a1 + 278) = 0;
  *(_BYTE *)(a1 + 279) = 0;
  set_ticketmask_rvn(a1, 63);
  set_reset_rvn(a1);
  set_core_reset_rvn(a1);
  set_inactive_rvn(a1);
  return 0;
}
