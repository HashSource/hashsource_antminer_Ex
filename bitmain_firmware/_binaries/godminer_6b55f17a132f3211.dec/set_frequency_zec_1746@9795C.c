int __fastcall set_frequency_zec_1746(int a1)
{
  float v1; // s0
  const char *v2; // r3
  unsigned int v3; // r2
  int v4; // r4
  unsigned int v5; // t1
  int (__fastcall *v6)(int, _DWORD *); // r3
  int v7; // r0
  int v8; // r0
  _DWORD v10[1025]; // [sp+10h] [bp-1004h] BYREF

  v2 = "d";
  v3 = 100;
  v4 = -2145385919;
  while ( (float)v3 <= v1 )
  {
    v4 = *((_DWORD *)v2 + 1);
    if ( v2 == (const char *)&unk_143D74 )
      break;
    v5 = *((_DWORD *)v2 + 2);
    v2 += 8;
    v3 = v5;
  }
  v6 = *(int (__fastcall **)(int, _DWORD *))(a1 + 228);
  v10[0] = v4;
  v10[2] = 786433;
  v10[3] = 0;
  v10[1] = 0;
  v7 = v6(a1, v10);
  V_LOCK(v7);
  v8 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    170,
    "set_frequency_zec_1746",
    22,
    645,
    40,
    v10);
  return 0;
}
