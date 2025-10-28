int __fastcall set_nonce_count_zero_kas(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD *); // r3
  _DWORD v5[2]; // [sp+10h] [bp-1000h] BYREF
  int v6; // [sp+18h] [bp-FF8h]
  int v7; // [sp+1Ch] [bp-FF4h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    174,
    "set_nonce_count_zero_kas",
    24,
    153,
    40,
    v5);
  v6 = 3932160;
  v7 = 0;
  v5[1] = 0;
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 240);
  LOBYTE(v6) = 1;
  v5[0] = 0;
  v3(a1, v5);
  usleep(0x2710u);
  return 0;
}
