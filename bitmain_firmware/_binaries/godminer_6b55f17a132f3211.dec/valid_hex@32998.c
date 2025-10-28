int __fastcall valid_hex(const char *a1)
{
  size_t v2; // r0
  const char *v3; // r2
  int v4; // t1
  int v5; // r0
  int v6; // r2
  int v7; // r0
  int v8; // r1
  int v10; // r0
  _BYTE v11[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a1 )
  {
    V_LOCK(0);
    v10 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v10);
    v6 = 215;
    v7 = g_zc;
    LOWORD(v8) = 24392;
    goto LABEL_9;
  }
  v2 = strlen(a1);
  if ( v2 )
  {
    if ( *(int *)&aGetValueFromLo[4 * *(unsigned __int8 *)a1 + 148] >= 0 )
    {
      v3 = a1;
      v2 += (size_t)(a1 - 1);
      while ( v3 != (const char *)v2 )
      {
        v4 = *(unsigned __int8 *)++v3;
        if ( *(int *)&aGetValueFromLo[4 * v4 + 148] < 0 )
          goto LABEL_8;
      }
      return 1;
    }
LABEL_8:
    V_LOCK(v2);
    v5 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v5);
    v6 = 225;
    v7 = g_zc;
    LOWORD(v8) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp"
                                   "/debug/build/godminer-origin_godminer-new/util.c";
LABEL_9:
    HIWORD(v8) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/deb"
                               "ug/build/godminer-origin_godminer-new/util.c" >> 16;
    zlog(v7, v8, 133, "valid_hex", 9, v6, 20, v11);
    return 0;
  }
  return 1;
}
