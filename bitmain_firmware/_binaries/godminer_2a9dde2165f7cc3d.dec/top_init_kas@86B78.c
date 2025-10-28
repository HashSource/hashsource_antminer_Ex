int __fastcall top_init_kas(_DWORD *a1)
{
  int v2; // r0
  int v3; // r7
  int v4; // r4
  int v5; // r0
  int v6; // r1
  char v7; // r3
  void (__fastcall *v8)(_DWORD *, int, int); // r3
  void *v9; // r0
  int v11; // [sp+28h] [bp-1024h] BYREF
  _BYTE v12[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v11, "chain");
  v2 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    174,
    "top_init_kas",
    12,
    1012,
    60,
    v12);
  v3 = a1[76];
  v4 = a1[114];
  v5 = sub_12E050(256, (unsigned __int8)v3);
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
    v4 = a1[114];
    v3 = a1[76];
  }
  v8 = (void (__fastcall *)(_DWORD *, int, int))a1[58];
  a1[99] = v5;
  v8(a1, v4, v3);
  v9 = malloc(0x450u);
  sub_841DC((int)a1, 0, v9);
  set_core_enable_kas((int)a1, 23130);
  sub_8439C(a1, 127);
  set_work_len_kas((int)a1);
  set_nonce_len_kas((int)a1);
  set_nonce_count_zero_kas((int)a1);
  set_nonce_overflow_kas((int)a1, 0);
  sub_85934(a1);
  return 0;
}
