void *__fastcall abin2hex(int a1, int a2)
{
  void *v4; // r0
  void *v5; // r8
  int v6; // r6
  int v7; // r4
  char *v8; // r5
  int v9; // t1
  char *v10; // r0
  int v12; // r0
  _BYTE v13[4096]; // [sp+10h] [bp-1000h] BYREF

  v4 = malloc(2 * a2 + 1);
  v5 = v4;
  if ( v4 )
  {
    if ( a2 )
    {
      v6 = a1 + a2 - 1;
      v7 = a1 - 1;
      v8 = (char *)v4;
      do
      {
        v9 = *(unsigned __int8 *)++v7;
        v10 = v8;
        v8 += 2;
        sprintf(v10, "%02x", v9);
      }
      while ( v7 != v6 );
    }
  }
  else
  {
    V_LOCK(0);
    v12 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/util.c",
      133,
      "abin2hex",
      8,
      132,
      100,
      v13);
  }
  return v5;
}
