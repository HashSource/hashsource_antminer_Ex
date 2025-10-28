int __fastcall set_debug_ctrl_rvn(int a1, int a2)
{
  int v4; // r0
  void (__fastcall *v5)(int, _DWORD *); // r3
  _BYTE v7[32]; // [sp+28h] [bp-1020h] BYREF
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  int v9; // [sp+50h] [bp-FF8h]
  int v10; // [sp+54h] [bp-FF4h]

  V_LOCK(a1);
  V_INT((int)v7, "chain");
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "set_debug_ctrl_rvn",
    18,
    182,
    60,
    v8);
  v9 = 0;
  v10 = 0;
  v8[0] = a2;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 228);
  v8[1] = 0;
  LOBYTE(v9) = 1;
  HIWORD(v9) = 80;
  v5(a1, v8);
  usleep(0x2710u);
  return 0;
}
