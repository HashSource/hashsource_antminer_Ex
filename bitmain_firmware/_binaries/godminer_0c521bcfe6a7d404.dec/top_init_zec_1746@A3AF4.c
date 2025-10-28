int __fastcall top_init_zec_1746(int a1)
{
  int v2; // r0
  int v3; // r7
  int v4; // r4
  int v5; // r0
  int v6; // r1
  char v7; // r3
  int v9; // [sp+28h] [bp-1024h] BYREF
  _BYTE v10[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v9, "chain");
  v2 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    174,
    "top_init_zec_1746",
    17,
    644,
    40,
    v10);
  v3 = *(_DWORD *)(a1 + 304);
  v4 = *(_DWORD *)(a1 + 456);
  v5 = sub_12E060(256, (unsigned __int8)v3);
  if ( (_BYTE)v3 )
  {
    v6 = v4 - 1;
    v7 = 0;
    do
    {
      *(_BYTE *)++v6 = v7;
      v7 += v5;
    }
    while ( v6 != v4 - 1 + (unsigned __int8)v3 );
    v4 = *(_DWORD *)(a1 + 456);
  }
  *(_DWORD *)(a1 + 396) = v5;
  (*(void (__fastcall **)(int, int, int))(a1 + 232))(a1, v4, v3);
  sub_A3178(a1, 1);
  return 0;
}
