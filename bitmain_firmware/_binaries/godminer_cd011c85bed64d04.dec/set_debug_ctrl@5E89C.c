int __fastcall set_debug_ctrl(int a1, int a2)
{
  int v4; // r0
  void (__fastcall *v5)(int, _DWORD *); // r3
  _DWORD v7[2]; // [sp+10h] [bp-1000h] BYREF
  int v8; // [sp+18h] [bp-FF8h]
  int v9; // [sp+1Ch] [bp-FF4h]

  V_LOCK(a1);
  v4 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_debug_ctrl",
    14,
    233,
    20,
    v7);
  v8 = 0;
  v9 = 0;
  v7[0] = a2;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 164);
  v7[1] = 0;
  LOBYTE(v8) = 1;
  HIWORD(v8) = 80;
  v5(a1, v7);
  usleep(0x2710u);
  return 0;
}
