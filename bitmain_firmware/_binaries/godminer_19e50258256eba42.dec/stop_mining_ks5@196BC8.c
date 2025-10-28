int __fastcall stop_mining_ks5(int a1)
{
  __int64 v1; // r0
  int (**v2)(); // r0
  int v5; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v5, 0x1000u, 0, "%s ...", "stop_mining_ks5");
  V_UNLOCK();
  v1 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
         "gin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
         171,
         "stop_mining_ks5",
         15,
         938,
         60,
         &v5);
  (*(void (__fastcall **)(int, _DWORD))(a1 + 60))(a1, HIDWORD(v1));
  v2 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v2[14])(*(_DWORD *)(a1 + 264));
  *(_BYTE *)(a1 + 278) = 0;
  *(_BYTE *)(a1 + 279) = 0;
  sub_186454(a1, 0x7Fu);
  set_reset_ks5(a1);
  set_core_reset_ks5(a1);
  set_inactive_ks5(a1);
  return 0;
}
