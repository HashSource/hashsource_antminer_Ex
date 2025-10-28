bool __fastcall hex2bin(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int v4; // r5
  char v5; // r12
  unsigned __int8 *v6; // r4
  int v7; // r6
  char *v8; // r3
  int v9; // r0
  int v10; // r2
  int v12; // r0
  char v13[4]; // [sp+10h] [bp-1008h] BYREF
  char *endptr; // [sp+14h] [bp-1004h] BYREF
  _BYTE v15[4096]; // [sp+18h] [bp-1000h] BYREF

  v3 = *a2;
  v4 = a3;
  v13[2] = 0;
  if ( !v3 )
    return v4 == 0;
  if ( !a3 )
    return 1;
  v5 = a2[1];
  if ( v5 )
  {
    v6 = a2;
    v7 = a1 - 1;
    while ( 1 )
    {
      v13[0] = v3;
      v13[1] = v5;
      --v4;
      a1 = strtol(v13, &endptr, 16);
      v8 = endptr;
      *(_BYTE *)++v7 = a1;
      if ( *v8 )
        break;
      v3 = v6[2];
      v6 += 2;
      if ( !v3 )
        return v4 == 0;
      if ( !v4 )
        return 1;
      v5 = v6[1];
      if ( !v5 )
        goto LABEL_14;
    }
    V_LOCK(a1);
    v9 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v9);
    v10 = 161;
  }
  else
  {
LABEL_14:
    V_LOCK(a1);
    v12 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v12);
    v10 = 154;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c",
    127,
    "hex2bin",
    7,
    v10,
    100,
    v15);
  return 0;
}
