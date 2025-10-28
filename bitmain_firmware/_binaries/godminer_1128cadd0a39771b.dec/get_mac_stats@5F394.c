int __fastcall get_mac_stats(int a1)
{
  __int16 v2; // r7
  char *v3; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r0
  char *v8; // [sp+3Ch] [bp-1048h]
  _BYTE *j; // [sp+48h] [bp-103Ch]
  char i; // [sp+4Ch] [bp-1038h]
  char *ptr; // [sp+54h] [bp-1030h]
  int v12; // [sp+5Ch] [bp-1028h] BYREF
  _BYTE v13[32]; // [sp+60h] [bp-1024h] BYREF
  _BYTE v14[4100]; // [sp+80h] [bp-1004h] BYREF

  v12 = -1734895979;
  ptr = (char *)malloc(0x600u);
  for ( i = 0; i != 8; ++i )
  {
    v2 = 149;
    for ( j = (char *)&v12 + 1; ; ++j )
    {
      v3 = ptr;
      v4 = sub_5CDF4(a1, i, 255, v2, ptr);
      if ( v4 > 0 )
      {
        v5 = 3 * v4;
        v8 = &ptr[4 * v5];
        do
        {
          V_LOCK(v5);
          v3 += 12;
          V_INT((int)v13, "chain");
          v6 = logfmt_raw((int)v14, 0x1000u);
          V_UNLOCK(v6);
          v5 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_eth/backend_eth.c",
                 154,
                 "get_mac_stats",
                 13,
                 368,
                 60,
                 v14);
        }
        while ( v3 != v8 );
      }
      if ( v13 == j )
        break;
      v2 = (unsigned __int8)*j;
    }
  }
  free(ptr);
  return 0;
}
