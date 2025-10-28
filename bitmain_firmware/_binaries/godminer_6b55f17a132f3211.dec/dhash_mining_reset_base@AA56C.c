int __fastcall dhash_mining_reset_base(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v12; // [sp+28h] [bp-1020h] BYREF
  _BYTE v13[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v12, "chain");
  v2 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_base.c",
    149,
    "dhash_mining_reset_base",
    23,
    491,
    80,
    v13);
  v3 = (*(int (__fastcall **)(int))(a1 + 4))(a1);
  *(_BYTE *)(a1 + 217) = 0;
  *(_BYTE *)(a1 + 218) = 0;
  v4 = dev_ctrl(v3);
  (*(void (__fastcall **)(_DWORD))(v4 + 28))(*(_DWORD *)(a1 + 208));
  v5 = sleep(0xAu);
  v6 = dev_ctrl(v5);
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v6 + 24))(
    *(_DWORD *)(a1 + 208),
    *(_DWORD *)(a1 + 920),
    *(_DWORD *)(a1 + 944));
  v7 = sleep(1u);
  v8 = dev_ctrl(v7);
  v9 = (*(int (__fastcall **)(_DWORD))(v8 + 44))(*(_DWORD *)(a1 + 208));
  v10 = dev_ctrl(v9);
  (*(void (__fastcall **)(_DWORD))(v10 + 4))(*(_DWORD *)(a1 + 208));
  return (*(int (__fastcall **)(int))(a1 + 16))(a1);
}
