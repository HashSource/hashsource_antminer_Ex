int __fastcall valid_ascii(const char *a1)
{
  signed int v2; // r0
  const char *v3; // r2
  int v4; // t1
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r2
  _BYTE v12[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a1 )
  {
    V_LOCK(0);
    v9 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v9);
    v11 = 243;
    v6 = g_zc;
    LOWORD(v7) = 4520;
LABEL_9:
    HIWORD(v7) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/relea"
                               "se/build/godminer-origin_master/util.c" >> 16;
    zlog(v6, v7, 127, "valid_ascii", 11, v11, 20, v12);
    return 0;
  }
  v2 = strlen(a1);
  if ( !v2 )
  {
    V_LOCK(0);
    v10 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v10);
    v11 = 249;
LABEL_8:
    v6 = g_zc;
    LOWORD(v7) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/r"
                                   "elease/build/godminer-origin_master/util.c";
    goto LABEL_9;
  }
  v3 = a1;
  do
  {
    v4 = *(unsigned __int8 *)v3++;
    if ( (unsigned int)(v4 - 32) > 0x5E )
    {
      V_LOCK(v2);
      v5 = logfmt_raw((int)v12, 0x1000u);
      V_UNLOCK(v5);
      v11 = 258;
      goto LABEL_8;
    }
  }
  while ( v3 - a1 < v2 );
  return 1;
}
